// Copyright (c) 2009, Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
#ifdef _MSC_VER
# pragma once
#endif
#ifndef FIELDINT64_H
#define FIELDINT64_H
#include "Field.h"
namespace QuickFAST{
  namespace Messages{
    /// @brief A field containing a signed 64 bit integer
    ///
    /// In the XML template file this field is described as &lt;int64>
    class QuickFAST_Export FieldInt64 : public Field{
      /// @brief Construct the field from an initial value
      /// @param value the value to be stored in the field
      explicit FieldInt64(int64 value);
      /// @brief Construct a NULL field
      FieldInt64();
    public:
      /// @brief Construct the field from am int64 value
      /// @param value the value to be stored in the field
      /// @returns a constant pointer to the immutable field
      static FieldCPtr create(int64 value);
      /// @brief Construct a NULL field
      /// @returns a constant pointer to the immutable field
      static FieldCPtr createNull();

      /// @brief a typical virtual destructor.
      virtual ~FieldInt64();

      // implement selected virtual methods from Field
      virtual Field::FieldType getType()const;
      virtual int64 toInt64() const;
    private:
      int64 value_;
    };
  }
}
#endif // FIELDINT64_H