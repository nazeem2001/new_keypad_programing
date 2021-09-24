import tkinter as tk
class merge:
    w=0
    def __init__(self):
        with open( "template.txt" , "r" ) as template :
            sorce = template.readlines()
        code = []
        for i in range( 0 , 10 ) :
            try :
                with open( f'output{i}.txt' ) as line :
                    code.append( line.readline() )
            except :
                code.append( ' ' )
        print( sorce )
        for i in range( 1 , 10 ) :
            sorce[
                i + 50] = f"case '{i}': digitalWrite(LED_BUILTIN, HIGH); {code[i]}  digitalWrite(LED_BUILTIN, LOW); break; \n"
        sorce[90] = f'digitalWrite(LED_BUILTIN, HIGH); {code[0]}digitalWrite(LED_BUILTIN, LOW); '

        print( code )
        with open( "code_final/code_final.ino" , "w" ) as output :
            output.writelines( sorce )
        self.w = tk.Tk()
        self.w.geometry( '400x60' )
        self.w.title( "done" )
        self.message = tk.Label( self.w , text="code generation was succesfull" )
        self.button = tk.Button( self.w , text='Done' , height=2 , width=8 , command=self.button_done )
        self.message.pack()
        self.button.place(x=320,y=17)
        self.w.mainloop()


    def button_done(self) :

        self.w.destroy()
        self.__del__()
    def __del__(self):
        print("jhhgfss")


