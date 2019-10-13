from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
import time

driver=webdriver.Chrome("Chromekit Local Address")
driver.get("https://web.whatsapp.com/")
wait=WebDriverWait(driver,600)
target='"Target Contact"'
string="Sent using Python Automatically"
x='//span[contains(@title, '+ target + ')]'
target=wait.until(EC.presence_of_element_located((By.XPATH, x)))

target.click()
input_box = driver.find_element_by_class_name("class name")
for i in range(50):
    input_box.send_keys(string+Keys.ENTER)