/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76498
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (short)13344))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13344)) >= (max((((/* implicit */int) max(((short)23237), ((short)60)))), ((~(((/* implicit */int) (short)-13344))))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8990))))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (short)-13750)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_0] [i_1 + 1]))) & (18446744073709551600ULL))));
                arr_5 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) 18446744073709551615ULL))))) ? (max((max((var_7), (var_7))), (((((/* implicit */_Bool) 5967423517095600509ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_11))))) : ((+(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [(short)9] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_22 = (short)20161;
                    var_23 = (~(arr_1 [i_0]));
                }
                var_24 = ((/* implicit */short) arr_8 [i_0] [i_1 - 2]);
                var_25 = max(((short)2047), ((short)-22135));
            }
        } 
    } 
    var_26 = ((/* implicit */short) var_5);
}
