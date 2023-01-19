/**
@file   Layout.h
@date   2013-03-01
@author Mark Young
@brief  interface for a tool to print tables
*/

#ifndef LAYOUT_H
#define LAYOUT_H

#include <string>
using std::string;

class Layout {
    public:

        /** 
         @brief set the width of the table
         @param w width of table as % of screen width 
        */
        virtual void setWidth(int w) = 0;

        /** 
         @brief set the number of columns in the table
         @param n number of columns in the table
        */
        virtual void setColumns(int n) = 0;


        /** 
         @brief emit table header to standard output
        */
        virtual void putHeader() const = 0;

        /** 
         @brief emit start of table line/row to standard output
        */
        virtual void putLineStart() const = 0;

        /** 
         @brief emit one non-empty table cell to standard output
         @param e element to place in table cell
         @param w width of cell as % of table width
        */
        virtual void putElement(const string& e, int w) const = 0;

        /** 
         @brief emit one non-empty table cell to standard output
         @param n element to place in table cell
         @param w width of cell as % of table width
        */
        virtual void putElement(int n, int w) const = 0;

        /** 
         @brief emit end of table line/row to standard output
        */
        virtual void putLineEnd() const = 0;

        /** 
         @brief emit end of table to standard output
        */
        virtual void putFooter() const = 0;

};

#endif

