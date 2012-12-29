#ifndef AUDIOEXTRACT_IT_H__
#define AUDIOEXTRACT_IT_H__

#include "audioextract.h"

#define IT_MAGIC            MAGIC("IMPM")
#define IT_INSTRUMENT_MAGIC MAGIC("IMPI")
#define IT_SAMPLE_MAGIC     MAGIC("IMPS")
#define IT_HEADER_SIZE        192
#define IT_INSTRUMENT_SIZE    554
#define IT_SAMPLE_HEADER_SIZE  80
#define IT_PATTERN_HEADER_SIZE  4

int it_isfile(const unsigned char *start, const unsigned char *end, size_t *lengthptr);

#endif /* AUDIOEXTRACT_IT_H__ */
