/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58578
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) == (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (var_3)))), (((var_2) + (var_2)))))))));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_13)))), (min((((/* implicit */unsigned int) var_14)), (var_3)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((int) var_7))) : (max((((/* implicit */long long int) var_14)), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) arr_2 [i_0] [4LL]))))) == (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_1]))))) ? (max((max((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_1] [0])) : (arr_3 [i_0] [(short)2])))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0] [(unsigned char)8])), (max((arr_1 [i_0]), (arr_3 [i_0] [i_0])))))))))));
                var_21 = arr_3 [i_0] [i_1];
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1] [4LL] [i_4]);
                                var_23 -= ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)4])) == (((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])))) - (((/* implicit */int) ((unsigned char) arr_6 [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)42507)), (2147483642))) >> (((((/* implicit */_Bool) ((arr_7 [i_0]) ? (arr_1 [i_1]) : (arr_8 [10] [10] [i_0])))) ? (((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) arr_2 [i_0] [16LL])))) : (arr_1 [i_1]))))))));
                var_25 = ((/* implicit */short) ((int) ((_Bool) arr_9 [i_0] [i_1] [i_0])));
            }
        } 
    } 
}
