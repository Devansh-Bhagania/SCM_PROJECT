from tkinter import*

tk=Tk()

tk.title("SCM project")
tk.geometry("500x500")
tk.configure(bg="light yellow")


lb=Label(tk, text="PROJECT WORK", font=("SF Pro", 25), fg="black", bg="#F0F8FF")
lb2=Label(tk,text="This GUI was created for SCM project", font=("SF Pro", 21), fg="black", bg="yellow")
lb.pack(padx=10,pady=20)
lb2.pack(padx=10,pady=150)

tk.mainloop()