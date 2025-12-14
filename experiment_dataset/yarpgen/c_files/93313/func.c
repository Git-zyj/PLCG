/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93313
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
    var_17 ^= min((((/* implicit */unsigned long long int) var_15)), ((-(max((var_7), (((/* implicit */unsigned long long int) 15)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1]))))));
            var_19 = (-(arr_5 [i_1 + 1]));
            arr_7 [i_0] [i_1] = ((/* implicit */int) var_10);
            var_20 = ((/* implicit */unsigned short) arr_4 [i_1]);
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) (short)7926);
        }
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2995341472796093039LL)) ? (2147483647) : (((/* implicit */int) arr_9 [i_0] [18] [i_0])))))));
        var_23 = (~((-(((/* implicit */int) var_14)))));
    }
}
