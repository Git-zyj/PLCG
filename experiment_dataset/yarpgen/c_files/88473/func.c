/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88473
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))) ? (((/* implicit */int) var_6)) : (var_1))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (var_4))))))) : (((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((var_6) ? (var_0) : (var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */short) arr_5 [(signed char)8] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) var_16)))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (var_0)))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((long long int) var_10)) : (arr_8 [i_3 - 2] [i_1] [3ULL] [(_Bool)1] [(signed char)8])))));
                                var_22 -= ((/* implicit */unsigned short) min((arr_9 [i_3 + 1] [(_Bool)1] [i_3 + 1] [i_3] [8]), (min((arr_9 [i_3 - 2] [(_Bool)1] [i_3 - 1] [i_3 - 2] [i_3 - 1]), (arr_9 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3])))));
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */long long int) var_16);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_2 [i_0])), (var_11))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))))));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_4))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_6 [i_0] [i_1])))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_14);
}
