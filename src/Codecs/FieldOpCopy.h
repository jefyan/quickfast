// Copyright (c) 2009, Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
#ifdef _MSC_VER
# pragma once
#endif
#ifndef FIELDOPCOPY_H
#define FIELDOPCOPY_H
#include <Codecs/FieldOp.h>
namespace QuickFAST{
  namespace Codecs{
    /// @brief Dispatch the &lt;copy> operation to the appropriate method in a FieldInstruction.
    class QuickFAST_Export FieldOpCopy : public FieldOp
    {
    public:
      virtual bool usesPresenceMap(bool mandatory)const;
      virtual bool usesDictionary() const;

      virtual bool decode(
        const Codecs::FieldInstruction & instruction,
        Codecs::DataSource & source,
        Codecs::PresenceMap & pmap,
        Codecs::Decoder & decoder,
        Messages::FieldSet & fieldSet) const;

      virtual void encode(
        const Codecs::FieldInstruction & instruction,
        Codecs::DataDestination & destination,
        Codecs::PresenceMap & pmap,
        Codecs::Encoder & encoder,
        const Messages::FieldSet & fieldSet) const;

      virtual void setDefaultValue(
        Codecs::FieldInstruction & instruction) const;
    };
  }
}
#endif // FIELDOPCOPY_H