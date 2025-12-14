/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80208
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
    var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) << (((var_4) - (1384730087U)))))))))));
    var_19 = min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) 14929564767116268227ULL))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_11)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (((/* implicit */short) (_Bool)1)))))) : (((unsigned long long int) arr_1 [i_0]))))));
        var_22 = (-(((((/* implicit */int) arr_2 [7ULL])) << (((var_6) - (3373370946649209368ULL))))));
        var_23 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) ((short) (_Bool)0)))))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_24 = min((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 2]))), (min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2]))) / (357591428U)))) ? (1777231814971989609LL) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-30913)))))));
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (-(arr_3 [i_1 - 1])));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_25 = ((((/* implicit */long long int) min((3937375862U), (((/* implicit */unsigned int) arr_9 [i_3]))))) * (((long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3] [12LL]))))));
        var_26 = ((/* implicit */short) max((((unsigned short) 3937375853U)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 854153162U)))))));
        var_27 = ((/* implicit */unsigned long long int) var_14);
        arr_12 [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9595))))) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (short)-17314))));
        var_28 = ((/* implicit */short) -1777231814971989632LL);
    }
}
