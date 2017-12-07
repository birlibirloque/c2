#include <string>

const std::string encoded (const std::string & word) {

   return("");
};


#include "gmock/gmock.h"    //<label id="code.include"/>
using ::testing::Eq;

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) { //<label id="code.test"/>
   ASSERT_THAT(encoded("A"), Eq("A")); //<label id="code.assert"/>
}

