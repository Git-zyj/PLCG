/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59833
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((long long int) var_9));
                    arr_8 [i_0] [(unsigned short)18] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) arr_4 [i_1])), (arr_6 [i_1] [i_1] [i_1 - 1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min(((~(arr_0 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 - 2] [i_4 - 1])))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((unsigned short) (short)0))), (var_5))))))));
                                arr_15 [i_0] [i_1] [10U] [i_3 + 2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)24014)), (0LL)));
                                arr_16 [i_0] [i_1] [i_1 - 1] [i_1] [i_3] [10U] [i_1] = min((((/* implicit */unsigned long long int) var_3)), ((~(max((((/* implicit */unsigned long long int) -1821138461)), (var_1))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((long long int) min((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)20933)), (min((var_1), (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (short)-21404)))))))));
    var_21 = ((/* implicit */unsigned int) (~(-606464335)));
    var_22 = var_1;
}
