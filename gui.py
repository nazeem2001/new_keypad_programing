import tkinter as tk
import record
import merge


def b0() :
    record.record( 0 )


def b1() :
    record.record( 1 )


def b2() :
    record.record( 2 )


def b3() :
    record.record( 3 )


def b4() :
    record.record( 4 )


def b5() :
    record.record( 5 )


def b6() :
    record.record( 6 )


def b7() :
    record.record( 7 )


def b8() :
    record.record( 8 )


def b9() :
    record.record( 9 )


def bm() :
    merge.merge()


def main() :
    window = tk.Tk()
    window.title( "keypad Progmer" )
    window.geometry( '250x300' )

    bt1 = tk.Button( window , text=' 1 ' , bg='red' , fg='black' , height='4' , width='10' , command=b1 )
    bt1.grid( column=1 , row=1 )
    bt2 = tk.Button( window , text=' 2 ' , bg='red' , fg='black' , height='4' , width='10' , command=b2 )
    bt2.grid( column=2 , row=1 )
    bt3 = tk.Button( window , text=' 3  ' , bg='red' , fg='black' , height='4' , width='10' , command=b3 )
    bt3.grid( column=3 , row=1 )
    bt4 = tk.Button( window , text=' 4 ' , bg='red' , fg='black' , height='4' , width='10' , command=b4 )
    bt4.grid( column=1 , row=2 )
    bt5 = tk.Button( window , text=' 5 ' , bg='red' , fg='black' , height='4' , width='10' , command=b5 )
    bt5.grid( column=2 , row=2 )
    bt6 = tk.Button( window , text=' 6  ' , bg='red' , fg='black' , height='4' , width='10' , command=b6 )
    bt6.grid( column=3 , row=2 )
    bt7 = tk.Button( window , text=' 7 ' , bg='red' , fg='black' , height='4' , width='10' , command=b7 )
    bt7.grid( column=1 , row=3 )
    bt8 = tk.Button( window , text=' 8 ' , bg='red' , fg='black' , height='4' , width='10' , command=b8 )
    bt8.grid( column=2 , row=3 )
    bt9 = tk.Button( window , text=' 9  ' , bg='red' , fg='black' , height='4' , width='10' , command=b9 )
    bt9.grid( column=3 , row=3 )
    bt0 = tk.Button( window , text=' 0 ' , bg='red' , fg='black' , height='4' , width='10' , command=b0 )
    bt0.grid( column=2 , row=4 )
    btm = tk.Button( window , text=' merge  ' , bg='red' , fg='black' , height='4' , width='10' , command=bm )
    btm.grid( column=3 , row=4 )

    window.mainloop()


if __name__ == '__main__' :
    main()
