/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88215
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_11 [i_3] [i_3] [i_1 + 1] [i_3]))), (min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_3] [i_3] [i_1 - 1] [i_4])))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((var_8) - (((/* implicit */int) var_6)))), (min((-21), (var_8)))))), ((-((-(arr_10 [i_0] [i_2] [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */signed char) (short)13);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */int) var_6))))))) != (var_2))))));
}
