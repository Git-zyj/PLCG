/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70378
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))) + (((((/* implicit */_Bool) 21U)) ? (11754553389971937645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) arr_2 [(short)11] [(short)11]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    var_17 = var_2;
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (short)-1024))));
}
