/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75984
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
    var_16 = ((/* implicit */int) ((unsigned short) var_15));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) 2957843113U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? ((+(1337124182U))) : (max((1163276302U), (4294967275U)))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-(arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1337124175U)) ? (-1683027017) : (((/* implicit */int) (unsigned char)152))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 1])) : (((/* implicit */int) var_6))))));
            arr_5 [i_0] [6U] [i_1] |= ((/* implicit */unsigned short) max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-2069517711)))) ? (((((/* implicit */_Bool) -1904146084998056923LL)) ? (4294967295U) : (2957843091U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1 - 1] [i_1 + 1])), (var_3))))))))));
        }
        var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) min((2939607195U), (4294967295U)));
        arr_7 [i_0] [(signed char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2957843122U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) + (((long long int) arr_0 [i_0] [i_0]))))));
        arr_8 [i_0] = ((/* implicit */unsigned char) 3131690993U);
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (~(4294967289U))));
        arr_12 [i_2] |= ((/* implicit */unsigned int) (+(arr_3 [i_2 - 1] [i_2 + 3])));
        arr_13 [i_2] [3U] = ((/* implicit */unsigned char) (+(arr_1 [i_2 - 1] [i_2])));
        var_19 += ((/* implicit */unsigned char) (+(-1683027014)));
    }
}
