/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86828
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */short) -7460101885460248526LL);
        var_15 = arr_0 [i_0];
        arr_3 [12] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_2 [3ULL]));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) / (((/* implicit */unsigned int) -2147483634))))) ? ((~(arr_2 [i_1 + 1]))) : (((/* implicit */unsigned int) ((2147483634) / (-2147483634))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_9 [i_1] |= ((/* implicit */unsigned long long int) arr_2 [i_1 + 1]);
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                var_18 *= ((/* implicit */unsigned int) (unsigned short)65535);
                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((long long int) (unsigned short)65533));
            }
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) | (arr_2 [i_1]))));
            var_19 *= ((/* implicit */unsigned int) ((((_Bool) 8594670026215101456ULL)) ? ((((+(((/* implicit */int) arr_7 [i_2])))) >> (((arr_6 [i_1 + 1] [i_1 + 1]) - (7187120856331479247ULL))))) : (-1280044998)));
            arr_14 [i_2] = ((/* implicit */unsigned short) ((((-2147483634) + (2147483647))) << (((((long long int) arr_2 [i_1])) - (2023507261LL)))));
        }
    }
    var_20 = ((/* implicit */_Bool) min((((((((/* implicit */int) (unsigned short)20933)) & (2147483633))) - (((int) 2147483624)))), (((int) var_9))));
    var_21 = ((/* implicit */_Bool) var_10);
    var_22 = var_5;
}
