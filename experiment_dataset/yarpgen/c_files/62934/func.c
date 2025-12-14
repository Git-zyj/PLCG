/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62934
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2] [(unsigned short)1])), (arr_13 [i_2 - 1] [i_2 - 4] [i_2 - 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2] [i_2 - 3] [i_2 - 2] [(unsigned char)8] [i_2 - 2]))))))));
                                var_15 = ((/* implicit */_Bool) ((177945407657120872LL) - (((/* implicit */long long int) ((arr_2 [i_0]) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0])))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [i_3]))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_8)), (arr_13 [i_0] [i_1 + 1] [i_2 - 3]))), (((((/* implicit */unsigned long long int) -177945407657120873LL)) % (arr_13 [i_1] [i_1 + 1] [i_2 - 4])))));
                    arr_15 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-177945407657120884LL)))) ? (min((arr_13 [i_0 + 1] [i_0 + 1] [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_0] [i_1] [i_1] [i_0] [i_0 - 2])))) : (min((arr_11 [i_0]), (((/* implicit */unsigned long long int) 177945407657120872LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)59727)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2 + 2] [i_2]))))) : (arr_7 [i_2 - 1] [i_2 + 1]))) : (var_2)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_6 + 1]) << (((((((/* implicit */_Bool) 177945407657120875LL)) ? (arr_17 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6 + 2] [i_6] [8LL] [i_5] [2LL]))))) - (2347138377396610335LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (((var_8) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_1))))) : (max((var_13), (var_7)))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (arr_7 [i_5] [i_5])))) ? (arr_11 [i_5]) : (((/* implicit */unsigned long long int) min((arr_7 [i_6 + 2] [i_5]), (((/* implicit */long long int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))) && (((/* implicit */_Bool) var_13))));
            }
        } 
    } 
}
