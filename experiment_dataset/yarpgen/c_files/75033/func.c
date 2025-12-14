/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75033
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
    var_20 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0 - 1] [i_2] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [6]);
                    var_21 &= ((/* implicit */unsigned int) max((max((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (_Bool)1))));
                    var_22 &= ((/* implicit */unsigned long long int) arr_7 [i_2] [i_1 - 2] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                arr_18 [i_3] [i_4 - 1] [i_4] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */signed char) (_Bool)1);
                arr_19 [i_3] [i_3] = ((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)31949))))))))));
                arr_20 [i_3] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_3 [i_3])))))), ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
