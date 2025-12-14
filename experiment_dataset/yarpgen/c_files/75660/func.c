/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75660
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (((long long int) var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) 2937840933U);
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
            var_18 = ((long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (arr_4 [i_0 + 2])));
        }
        for (short i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2]))));
            arr_10 [i_2 - 3] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -230914441)) ^ (arr_7 [i_0 + 3]))))));
            var_19 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 3])) ? (((/* implicit */long long int) var_10)) : (var_7))));
        }
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) var_12);
            var_21 = (unsigned short)65407;
            var_22 *= ((/* implicit */unsigned short) min((((long long int) arr_13 [i_3] [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (-2488260300423680802LL)))) ? (-9190646766059844152LL) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_3])))))))));
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) var_0);
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -312924007)) ? (((-8045892449624937150LL) ^ (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6LL))))))));
        arr_18 [4LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3778686731U))));
        var_24 = ((/* implicit */unsigned int) 0);
    }
}
