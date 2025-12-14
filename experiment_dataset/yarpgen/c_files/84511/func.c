/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84511
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? ((~(var_8))) : (var_8)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_9))))));
        arr_3 [i_0] [i_0] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (var_4))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (65504) : (((/* implicit */int) arr_0 [15] [i_0])))), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_12 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
            arr_11 [(signed char)9] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1955464757U)) > (-8273209077483587535LL)));
            var_13 = ((/* implicit */signed char) -5820741313884804200LL);
        }
        var_14 = ((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))) >> (((((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) - (1210506451U))));
        var_15 -= ((/* implicit */unsigned int) (+((~(max((((/* implicit */long long int) var_4)), (arr_8 [i_1])))))));
        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) (signed char)-115))))))));
    }
    var_16 = ((/* implicit */_Bool) max((((((var_6) + (9223372036854775807LL))) << (((((max((var_6), (var_3))) + (259723530406744225LL))) - (52LL))))), (((var_6) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_1)))))))));
}
