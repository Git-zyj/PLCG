/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75323
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) 666511778)) ? (((/* implicit */unsigned long long int) 1608618745)) : (4194303ULL)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) var_10)) : ((-(arr_3 [i_0]))))))));
            var_12 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_5)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                var_13 ^= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2]))) - (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (14678056121763394238ULL)))))));
                var_14 = ((/* implicit */unsigned long long int) (signed char)63);
                var_15 = ((/* implicit */short) max((((6204699909732223567LL) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [5LL] [i_1] [5LL]))))), (((/* implicit */long long int) max((arr_7 [i_2 - 1]), (arr_7 [i_2 + 1]))))));
            }
            var_16 = ((/* implicit */unsigned long long int) max(((+(arr_6 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))), (((/* implicit */long long int) (_Bool)1))));
            arr_8 [i_1] [i_1] [i_1] = ((long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (short)-1)))));
        }
    }
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = var_0;
    var_20 = ((/* implicit */int) var_8);
}
