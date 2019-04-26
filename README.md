# Commodity-Inventory-System
ENGG1340 Course Project

Group 23:

Chang Wei-Fan 3035554610

Hsu Ya-Cheng  3035550250
## Problem Statement
With the rise of e-commerce services, the industry has expanded exponentially. There has been an increasing demand for a more efficient inventory system. Our commodity-inventory system want to tackle with the following problems: First, the system need to read in complex data that contain gigantic information. Second, the staff need to spot where the void of commodities is at and offer timely restock. Third, the system requires search function for staffs to find specific types of data from it. Last but not least, the system need to be automatically updated from time to time. 

## Problem Setting （等等寫）


## Functionalities and Features
A commodity inventory system should be easy to manage, and can quickly respond to changes in the inventory. We have the following functions: 

### Initialize the system
Our initialization of system starts with shell command in terminal, followed by file input to the system. (給個initialization的背景原因)

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
Our input-new-entry function is activated by entering **5** in the system menu. The input-new-entry function allows edit or addition of items in the system after initialization. After entering **5**, you will be asked to enter the complete information about the item in the form of “name availability amount price retailer”. If the specified item name and retailer has its record in the system, it’ll then replace the existing information with the specified one. On the ther hand, if the specified item name and retailer doesn’t exist in the system at the moment, it’ll be appended as new entry to the end of vector of items. The system will also be updated correspondingly.

### Auto-update (這邊要大修)
The system will automatically update if there is new entries. (Such as an item status changing)
When the commodotity is changed to 'out-of-stock' or 'nearly-out-of-stock', the system will alert you.
If an item is out-of-stock, we will notify retailers asking if they want to restock, if **answer is 'NO'**, the system will delete the item.

If any extra descriptions or information needs to be updated, such as some problems retailers encountered, we can update it under said item immediately.

### End the system 
The system ending command is activated by entering **-999** in the system menu. Once in a while, the commodity system need to be shut off. Our system is no different. After saving the current stock to output file and input **-999** to the system will be shut down immediately.

## Input/Output Specification
The formats of input and output file are the same. The item list will provide basic information, such as name of item, availability, current stock, price, retailer, and times of sold-out. 

## Compilation and Execution Instructions （等等寫）
