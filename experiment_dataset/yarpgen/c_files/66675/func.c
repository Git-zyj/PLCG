/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66675
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
    var_15 = (-((((-(((/* implicit */int) var_3)))) & ((~(((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_11));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */signed char) ((unsigned short) ((1879048192) >> (((5183501397450225838ULL) - (5183501397450225826ULL))))));
                            var_18 = ((/* implicit */_Bool) min((max((arr_1 [i_0 + 2] [i_0 + 4]), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (short)-16388))));
                            arr_12 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((int) var_6));
                        }
                    } 
                } 
                arr_13 [i_0 + 1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_2)))), (((((/* implicit */int) var_10)) | (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) arr_7 [11ULL] [i_0 + 4] [i_0 + 3])) ? (max((13263242676259325774ULL), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_7 [i_1] [12U] [i_0 - 1]))))));
                arr_14 [i_1] [i_0] [i_0] = ((arr_4 [i_0 + 2]) * (((arr_0 [i_0 + 1] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388604U)) ? (((/* implicit */int) arr_2 [i_0])) : (var_6)))))));
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) arr_3 [18U])), (arr_1 [i_0] [i_0]))))) ? (min((((/* implicit */int) ((_Bool) var_11))), (var_6))) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_14))));
}
