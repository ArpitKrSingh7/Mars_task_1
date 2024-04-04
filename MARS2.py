from PIL import Image

im = Image.open('IMG.jpg') 
pix = im.load()
typea=typeb=0
length,breadth=im.size
threshold=160
brightThreshold=30

for i in range(length):
    for j in range(breadth):
        if pix[i,j][0]>=threshold and pix[i,j][1]>=threshold and pix[i,j][2]>=threshold:
            typea+=1
        else: 
            typeb+=1
        if ((0.21*pix[i,j][0]+0.72*pix[i,j][1]+0.07*pix[i,j][2])/3 ) > brightThreshold:
            pix[i,j]=(0,0,0)
        else:
            pix[i,j]=(200,200,200)
print((typea/(typea+typeb))*100,(typeb/(typea+typeb))*100)   
im.save('Magic.jpg')