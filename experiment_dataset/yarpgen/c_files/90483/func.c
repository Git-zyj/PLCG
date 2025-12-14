/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90483
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) ((912702069U) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)8191), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))))) : (var_6)));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_11 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_12 = ((/* implicit */int) max(((short)-32761), (((/* implicit */short) (signed char)-7))));
        arr_7 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_4 [i_1]))), ((~(((/* implicit */int) (unsigned short)44561))))));
        arr_8 [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_1)) - (var_2))), (((/* implicit */long long int) (-(arr_6 [i_1] [i_1]))))))) ? ((~(1689433738U))) : (2710788972U));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_13 &= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [i_2])) >> (((((/* implicit */int) arr_5 [i_2])) - (63966)))))));
        arr_11 [(unsigned char)11] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_2 [i_2]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (var_8)));
        arr_16 [2U] &= ((/* implicit */int) (-(arr_1 [i_3])));
        var_15 = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) (unsigned short)46807)))))) - ((-(-157274835)))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_12 [(unsigned short)7] [i_3])) % (((/* implicit */int) arr_12 [i_3] [i_3]))));
    }
}
