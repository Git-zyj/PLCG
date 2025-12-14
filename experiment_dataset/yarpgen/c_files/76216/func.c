/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76216
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [6] [i_0] |= (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)255)) >= (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_12 = ((/* implicit */int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_1))))) ? (max((var_7), (((/* implicit */int) arr_0 [i_0])))) : (max((var_8), (((/* implicit */int) arr_2 [i_0 - 1]))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-68)) % (((/* implicit */int) (unsigned short)57633))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), (((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) var_5))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned char) arr_5 [i_1] [i_1]));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (max((((/* implicit */int) ((signed char) var_4))), (min((var_8), (arr_7 [i_2])))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_10 [i_2])), (-1725848182))) + ((-(((/* implicit */int) var_2))))));
        arr_13 [(signed char)0] [i_2] |= ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])))));
    }
    var_15 |= ((/* implicit */signed char) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_1))));
}
