/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74072
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_0] [i_1] [i_1]) : (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_10))))))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (117440512U)))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) arr_3 [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [8ULL] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_4 [i_0] [i_1] [11ULL]) != (var_5)))) >> (((((((/* implicit */int) var_11)) + (((/* implicit */int) var_2)))) - (36224)))));
                            var_18 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))))) : (((unsigned int) var_5)))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_3] [i_3] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((int) ((long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_11)))));
}
