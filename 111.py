import cv2 
image=cv2. imread ('test.jpg')

gray = cv2.cvt Color (image, cv2.COLOR -BGR2GRAY)

contours, - = cv2.find Contours (gray, cv2.RETR_EXTERNAL, cv2-CHAIN_APPROX.SIMPLE)

Contour_Image=image.copy()

cv2.draw Contours (contour_image, contours, -1, (0,255,0),2) 
cv2.imshow(" Image with contours", contour images)

cv2.waitKey(0)

cv2.destroyAllWindows()