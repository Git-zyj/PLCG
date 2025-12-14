/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94253
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_12 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1] [2ULL] [i_4]))));
                            arr_11 [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2]))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) arr_8 [i_0] [i_5 - 2] [i_5] [i_3]);
                            var_14 += arr_12 [i_5 - 2] [i_5] [i_5] [i_5 - 2] [i_3];
                            var_15 = (~((~(arr_10 [i_0] [i_1] [i_5 - 2] [i_0] [i_5 - 2] [i_1] [i_0]))));
                        }
                        arr_16 [i_3] [i_3] [i_2] [i_1] [(short)1] [i_0] = (!(((/* implicit */_Bool) 3684124354847029485ULL)));
                        arr_17 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)8955))))));
                    }
                    var_16 *= ((/* implicit */unsigned short) arr_7 [i_0] [9ULL] [i_1] [5ULL]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
}
