/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88810
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */short) var_14);
                    arr_6 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((182689646), (-182689646)))), (arr_4 [i_0] [i_2 - 1] [i_0])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_12);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)235)), (182689646)));
    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_15)) : (max((((/* implicit */unsigned long long int) var_17)), (var_3))))), (min((var_3), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_4 + 1])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3 - 1])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)-13)) ? (-2031337616) : (-2031337616)))));
                var_23 = ((/* implicit */short) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) 182689645)) ? (-182689633) : (((/* implicit */int) (signed char)-33))))));
                arr_12 [i_3] [i_4] = ((/* implicit */_Bool) var_14);
                arr_13 [i_3] [i_4] = min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7))))) : (((((/* implicit */_Bool) arr_8 [(short)6])) ? (((/* implicit */unsigned long long int) arr_1 [i_4])) : (var_3))))), (((/* implicit */unsigned long long int) var_0)));
            }
        } 
    } 
}
