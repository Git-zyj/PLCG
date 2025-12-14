/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74058
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
    var_12 -= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_13 -= ((/* implicit */signed char) ((3200424209U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] &= ((/* implicit */long long int) (+((-(var_1)))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 + 1] [i_2] = var_5;
                }
                arr_16 [3LL] = ((/* implicit */unsigned long long int) min((min((4226503782U), (((/* implicit */unsigned int) arr_8 [i_1 + 1] [8LL] [i_1 + 2] [i_1 + 2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)82)) || ((_Bool)0))))));
                var_15 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]);
                arr_17 [i_0] = ((/* implicit */_Bool) 68463513U);
            }
        } 
    } 
}
