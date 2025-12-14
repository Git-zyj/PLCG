/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72846
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
    var_17 = 4095U;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (((+(arr_0 [i_0 + 1]))) ^ (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
                    var_19 = ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */int) arr_10 [i_3] [i_3]);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)2] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [(_Bool)0] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
