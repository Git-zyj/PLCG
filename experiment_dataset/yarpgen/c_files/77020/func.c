/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77020
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
    var_17 &= ((/* implicit */long long int) max((var_16), (var_16)));
    var_18 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) (+(arr_3 [i_0] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) max((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) << (((((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) - (9412))))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_3] [i_2] [i_0 - 1]))) < (var_6)))), (min((arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0 - 1]), (arr_13 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (arr_5 [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_0 - 1])))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1])))))));
                    var_21 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) var_12)));
                    var_22 |= ((/* implicit */signed char) arr_5 [10ULL]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */int) min(((+(arr_23 [i_5]))), (((/* implicit */long long int) (signed char)78))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-78)), (arr_19 [i_5])))) ? (((/* implicit */int) (signed char)78)) : (((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_5])) ? (((/* implicit */int) arr_22 [i_5] [i_6] [i_6])) : (((/* implicit */int) arr_22 [i_5] [i_6] [i_6]))))));
                var_26 = ((/* implicit */unsigned long long int) ((signed char) var_7));
            }
        } 
    } 
}
