/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78052
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
    var_17 ^= ((/* implicit */long long int) ((((unsigned int) (!(((/* implicit */_Bool) var_7))))) << (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) && (((/* implicit */_Bool) (unsigned short)56978))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) && (((/* implicit */_Bool) var_0))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [13])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */short) arr_8 [i_1] [i_1] [i_2]);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~(arr_4 [i_0] [i_0] [i_0])))));
                    arr_11 [(short)17] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((long long int) var_16)));
                }
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-16823)), (-4137646462241947957LL)))) <= (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
