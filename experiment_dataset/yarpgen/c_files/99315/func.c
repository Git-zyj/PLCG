/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99315
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) 2047))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-28094)) >= (((/* implicit */int) (_Bool)0))))) : (2066)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)7088))))) ? (var_17) : (((/* implicit */unsigned int) -2047)))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)178)))), (((/* implicit */int) (short)7088)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_16)), ((unsigned short)0)))) + (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((-2047) + (2147483647))) << (((((/* implicit */int) var_10)) - (56676)))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (2047) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (var_14))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-405281597) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-7088)) : (((/* implicit */int) (_Bool)0))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-862678596) % (((/* implicit */int) arr_0 [(unsigned char)1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [7ULL] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] [i_1 - 2] = arr_6 [i_0] [i_1 - 1];
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)65)))) | (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_1 - 1]))));
            arr_10 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (14753826278989855583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29344)))))) ? (((2047) << (((((/* implicit */int) (unsigned char)178)) - (176))))) : (((-1438888846) & (((/* implicit */int) arr_0 [i_0] [i_1])))));
        }
        arr_11 [i_0 - 2] = (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [2ULL])) : (((((/* implicit */_Bool) -2048)) ? (((/* implicit */int) (short)7088)) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    var_21 = ((/* implicit */unsigned char) (short)7088);
}
