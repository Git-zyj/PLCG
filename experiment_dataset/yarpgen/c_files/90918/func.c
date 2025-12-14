/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90918
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */short) (+(((int) max((var_17), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                var_19 = var_4;
                arr_4 [i_0] [(unsigned short)12] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_5)), (arr_1 [i_0]))), (arr_1 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(unsigned char)11] [i_3] [i_0] = var_10;
                            arr_12 [i_0] [i_1] [i_0] [i_3 + 1] [(short)5] [i_3 + 2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [0] [0])) || (((/* implicit */_Bool) max(((~(arr_2 [i_0]))), (((/* implicit */long long int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((((unsigned long long int) ((var_15) & (var_15)))), (var_14)));
}
