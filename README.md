# Commodity-Inventory-System
ENGG1340 Course Project

Group 23:

Chang Wei-Fan 3035554610

Hsu Ya-Cheng  3035550250
## Problem Statement
With the rise of e-commerce services, the industry has expanded exponentially. There has been an increasing demand for a more efficient inventory system. Our commodity-inventory system want to tackle with the following problems: First, the system need to read in complex data that contain gigantic information. Second, the staff need to spot where the void of commodities is at and offer timely restock. Third, the system requires search function for staffs to find specific types of data from it. Last but not least, the system need to be automatically updated from time to time. 

## Problem Setting 
Our commodity system follows the following assumptions. After a commodity system (server) has been turn on, a system menu will pop up with various functions for staffs (user) to choose from. In addition, the system ends by entering a shut-down command. The whole process is constructed in a way to simulate a computer: system on -> open a file to work on (initialization as we call) -> save -> system off. Moreover, we believe users will read through the manual before using out commodity system program. 

## Functionalities and Features
A commodity inventory system should be easy to manage, and can quickly respond to changes in the inventory. We have the following functions: 

### Initialize the system
Our initialization of system starts with shell command in terminal, followed by file input to the system. As aforementioned, we need to do the initialization section because it simulates the process of **opening** a file to write/modify on a computer; as in the case of our system, we choose an item file to work on.

#### In Terminal
Since our execution program is called “system” after the compilation process that we’ll illustrate in the later sub-topic, we need to enter a shell command “./system” to run the program.
#### In System 
After the shell command, we’ll enter the commodity system. The user/staff will be asked to input the name of the file for initialization, and the information of the item list will be further loaded into the system. A menu of functions will then appear.

### Search function 
Our search function is activated by entering **1** in the system menu. The search function serves as a filter to only display data of interest. 

After activating the function, we need to enter a keyword. We can search for the name of item, availability, or retailer to find desired data.

Search results should tell basic information about the item: the name of item, availability,how many stocks are left, the price per unit, which retailer contains the item. An interesting feature of the display is that no matter what the keyword is, the search result will always be sorted in the order from out-of-stock, nearly-out-of-stock, to in-stock, so as to help the staff understand the degree of urgency amongst commodities.

### Access stock  
Our access function is activated by entering **2** in the system menu. The access function print out the current overall situation in our commodity system. After entering **2** , a list of information of current commodities will appear.  

### Output stock to file
Our output function is activated by entering **3** in the system menu. The output function writes the current overall situation in our commodity system to a file, whose name is further specified by the user (staff). We designed the output function to generate output file whenever we wish to because in the logistic industry, we often need to print out the information for truck driver and executives to do further actions. After entering **3** and specifying the name of your desired output file, a file will be generated with all the information in the system. 
 
### Best sellings 
Our best-selling function is activated by entering **4** in the system menu. The best-selling function is ranked according to the “soldout” attribute of the item. We can easily observe what commodities constantly go out of stock. After entering **4**, it will list out the **top 3 items** out of all the items in our system. Not only that, the system will also offer some pricing policies to boost sales for retailers.

### Input new entry
Our input-new-entry function is activated by entering **5** in the system menu. The input-new-entry function allows edit or addition of items in the system after initialization. After entering **5**, you will be asked to enter the complete information about the item in the form of “name availability amount price retailer”. If the specified item name and retailer has its record in the system, it’ll then replace the existing information with the specified one. On the other hand, if the specified item name and retailer doesn’t exist in the system at the moment, it’ll be appended as new entry to the end of vector of items. The system will also be updated correspondingly.

### Auto-update 
Our auto-update function is not activated by the system menu, while as it literally means, the function is called whenever there are changes of item status the system, and immediately notify the user about the changes through screen output. Most important of all, when a commodity is changed to 'out-of-stock' or 'nearly-out-of-stock', the system will send alert and ask if the staff wish to restock in that particular retailer or not. If “yes”, the system will then need the user to specify the amount to supply/restock to the retailer. If the user enters “no”, the system will not make changes; however, if unfortunately this item is also currently ‘out-of-stock’, we’ll automatically consider this item as obsolete, and delete that entry at the meantime. 

Though this function is not shown on the system menu, it’s actually the backbone of the whole program. No matter which function you choose, in the end the auto-update function will be executed and keep the system as updated as possible.

### Main 
Our main function is also not activated by the system menu, it’s automatically executed when we use the **’./system command’**. The main function draw out the blueprint of how the system goes. In this particular commodity system, we’ll first ask user to input the item file of interest, loaded into the system, and directly print to screen for user reference. Later on, user goes into a while loop that could be terminated entering **-999**; in the while loop, the user get to choose between five functions (i.e. search, access-stock, output to file, best-selling, new-entry) and get updated with auto-update function at every round.  

### End the system 
The system ending command is activated by entering **-999** in the system menu. Once in a while, the commodity system need to be shut off. Our system is no different. After saving the current stock to output file and input **-999** to the system will be shut down immediately.

## Input/Output Specification
The formats of input and output file are the same. The item list will provide basic information, such as name of item, availability, current stock, price, retailer, and times of sold-out. 

## Compilation and Execution Instructions
Despite the fact that we only have 9 source files, which is considered pretty easy for a normal computer in terms of the compilation time, we still utilize “makefile” to do separate compilation so as to allow future addition of function and to better logically understand relationship in between functions (source files). Our compilation of the system works like this: First, each c++ function (i.e. main,  access_stock, auto_update, best_selling, input, output, search_func, new_entry) and a header file **functions.h** will be compiled into respective object codes. Secondly, the objects will be linked together and generate the final executable **system**. Lastly, let the **make** tool do its thing in the terminal, activated by the following shell command.

  $ make system
 
After the executable **system** is generated, we can use the ./system shell command to run the program. Please refer to the functionalities and feature section to look for further choice of functions.   
 

