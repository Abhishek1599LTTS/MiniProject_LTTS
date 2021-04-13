# Requirements
## Introduction
 * This Calculator provides simple and advanced mathematical functions in a beautifully designed application. It takes user data about his/her monthly expenses and allowances and calculates Monthly deficit or surplus amount.
 * I have chosen this topic as I feel this is something different and can be very useful for anyone, it has given me an opportunity to implement and understand multiple C programming concepts.


### Benefits
* It can be very beneficial for anyone who wants to keep a check on their montlhy expenses.
* It can keep records on your Monthly Surplus amount. 
* It can help someone making a budget for entire month.
* Very Easy to use and maintain .
* Helps people who are not good with finance management or budget making.



## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 1999 | Hall, Pamela L. (1999), Effective Use of a Financial Calculator, Cengage Learning, ISBN 9780030267864   |  |
| 2004 |Barrell, Doris (2004), Real Estate Finance Today, Dearborn Real Estate, p. 34, ISBN 9780793181490, most real estate professionals today use a programmable financial calculator to determine loan payments and other financial calculations.|  |
| 2009 | Barrell, Doris (2004), Real Estate Finance Today, Dearborn Real Estate, p. 34, ISBN 9780793181490, most real estate professionals today use a programmable financial calculator to determine loan payments and other financial calculations. |  |



## Defining Our System
### Explanation:
*This Calculator provides simple and advanced mathematical functions in a beautifully designed application. It takes user data about his/her monthly expenses and allowances and calculates Monthly deficit or surplus amount.

* We can say that in future sprints new features could be added in which for the enhancement of the product.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/260315/MiniProject_LTTS/blob/master/1__Requirements/amazon-swot-analysis-1024x576.png)

# 4W&#39;s and 1&#39;H

## Who:
* Small and medium size clinics Providing Covid vaccinations to patients

## What:
* Many Clinics are not able to afford high end HMS or ERP systems and hence still depend on manual filing systems. During COVID vaccinations it becomes a tedious task to manage every patient with hand written file system

## When:
* This problem began in February 2021, when COVID Vaccination Drive began and small/medium clinics will soon have to administer vaccinations to people.

## Where:
* This problem is expected to surface in all states of India.

## How:
* This problem may cause ineffective vaccine management and hence there can be a huge amount of vaccine wastage. As per recent data in cities like Noida and Delhi till date 9%-18% vaccines have gone to waste.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new patient record | Techincal | TBD-S1 | 
| HR02 | User shall be able to read a patient record | Techincal | TBD-S1 |
| HR03 | User shall be able to update a patient record | Techincal | TBD-S1 |
| HR04 | User shall be able to delete a patient record | Techincal | TBD-S1 |
| HR05 | User shall be able to save records in a file | Techincal | TBD-S1 |
| HR06 | User shall be able to read data from a file | Techincal | TBD-S1 |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario | TBD-S1 |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record shall be added by providing all the asked information and the id should be unique or else patient record should not be accepted. | HR01 | TBD-S1 |
| LR02 | Reading patient data should be possible in 2 ways, first being by searching by id of a patient and second by printing all the records available | HR02 | TBD-S1 |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 | TBD-S1 |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 | TBD-S1 |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 | TBD-S1 |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 | TBD-S1 |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 | TBD-S1 |
| LR07 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | HR08 | TBD-S1 |
