#ifndef CEL_FILE_H
#define CEL_FILE_H

#include <stdint.h>
#include <vector>
#include <map>
#include "pal.h"
#include "celframe.h"
#include "celdecoder.h"


namespace FAIO
{
    struct FAFile;
}

namespace Cel
{
    class CelFile
    {
        public:
            CelFile(const std::string& filename);

            //If normal cel file, returns same as numFrames(), for an archive, the number of frames in each subcel
            size_t animLength() const;
            size_t numFrames() const;
            CelFrame& operator[] (size_t index);

        private:
            CelDecoder mDecoder;
    };
}

#endif
