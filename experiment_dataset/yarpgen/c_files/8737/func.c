/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8737
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)30723)) <= (2147483641)));
        var_19 = ((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_9))))));
        var_20 = ((/* implicit */short) ((unsigned long long int) var_2));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) var_9)) - (((long long int) max((((/* implicit */long long int) arr_6 [i_0] [i_0])), (var_3))))));
                    arr_11 [i_1] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0])))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (max(((+(arr_12 [i_3]))), (((var_12) ? (arr_14 [i_4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15642)))))))));
                var_23 = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3]);
            }
        } 
    } 
}
