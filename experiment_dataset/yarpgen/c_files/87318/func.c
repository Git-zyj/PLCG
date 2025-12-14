/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87318
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
    var_17 += ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (var_12)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */long long int) max((((int) arr_0 [i_0])), (((/* implicit */int) arr_8 [i_3 + 4] [i_3] [i_0 - 1]))));
                        var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned int) 1767203358)) : (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 + 1]))) ? (((unsigned long long int) arr_6 [i_0 - 1] [i_1] [i_0] [i_3 - 2])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) -1767203361))));
                        var_21 = ((((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 3] [i_0 + 3] [i_3])) > (((/* implicit */int) ((short) -1767203374))));
                    }
                } 
            } 
        } 
        var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((((/* implicit */long long int) 1767203358)), (-7650531609797138252LL))))) ? (max(((~(-1767203376))), (((/* implicit */int) (short)14050)))) : (((/* implicit */int) (short)-14051))));
        arr_11 [i_0] [i_0 + 3] = ((/* implicit */signed char) ((var_12) / (1767203345)));
    }
}
