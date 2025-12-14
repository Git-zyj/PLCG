/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89946
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
    var_12 = ((/* implicit */signed char) ((int) 18282493107169170008ULL));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_2 + 1] = ((/* implicit */signed char) 1773430238U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)110)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1105845763U)))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))) == (((var_2) >> (((var_10) - (4885272051306007172ULL))))))))));
                                arr_17 [i_0] [i_2] [i_4] [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)37775)), (-9223372036854775804LL)))), (var_9)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((arr_11 [i_0 + 1] [i_1] [i_1] [i_2]) / (661529101))))));
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */signed char) min(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((int) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) ^ ((~(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_0))))))));
}
