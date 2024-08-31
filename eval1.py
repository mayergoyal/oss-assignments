print("hello in python application ")
contacts={"radha":[1425367898,"r@mail.com"]}
print("enter 1 for addding conatct, 2 to update , 3 for delete contact , 4 to print ,5 for searching contacts , 6 for prinnting according to letter")

ans=1
while(ans):
    n=int(input("enter which option u want to choose "))
    if(n==1):
        name=input("enter name")
        phone=int(input("enter phone no."))
        email=input("enter email if any ")
        lis=[]
        lis.append(phone)
        lis.append(email)
        contacts[name]=lis
        
    elif (n==2):
        name=input("enter name whose info is to be updated")
        phone=int(input("enter phone no."))
        email=input("enter email if any ")
        contacts[name]=[phone,email]
        
        
    
    elif(n==3):
        name=input("enter name whose info is to be deleted")
        #contacts.(name)
        del contacts[name]
        
        
    elif(n==4):
        for k,v in contacts.items():
            print(k," -> ",v)
        
    elif(n==5):
        name=input("enter name whose info is to be serached")
        for k,v in contacts.items():
            if( k==name):
                print(k," => ",v)
                break
    else:
        i=input("enter initial")
        for k , v in contacts.items():
            for j in k:
                if(j==i):
                    print(k," => ",v)
                    break
    
    ans=int(input("wanna enter more ? enter 0 or 1" ))
    if(ans==0):
        break
