/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63790
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((int) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) - (0)))), (-4129154322937120190LL)))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-((~(((((((/* implicit */int) var_12)) + (2147483647))) << (((((((/* implicit */int) var_11)) + (4797))) - (7))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_4 [i_0]);
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) 4254750346U)) | (arr_3 [i_2] [i_2 - 2] [i_2]))))));
                            }
                            var_17 -= arr_7 [i_0] [i_1] [i_2] [7ULL];
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) min((arr_7 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_1]))))) | (2)))) | (((((var_9) ^ (4129154322937120190LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_0);
    var_19 |= max((((/* implicit */short) ((unsigned char) (short)20288))), (min((((/* implicit */short) var_13)), (max((var_11), (((/* implicit */short) var_6)))))));
}
