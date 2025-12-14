/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86345
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
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 *= arr_3 [i_4];
                                var_19 ^= ((/* implicit */_Bool) arr_5 [i_3]);
                                var_20 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)0)) < (((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) || (arr_3 [14U])))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (arr_10 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                                arr_11 [i_0] [(signed char)5] [(signed char)5] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 2147483631)) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (arr_2 [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    var_21 = min((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38870))) - (3577030500U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_2))))))), (((/* implicit */unsigned int) (signed char)69)));
}
