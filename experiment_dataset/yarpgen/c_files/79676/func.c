/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79676
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) (~(((long long int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) var_4)), (0LL)))));
                            arr_11 [i_0] [i_3] [i_3] [(_Bool)1] = ((/* implicit */short) ((unsigned int) max((arr_8 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 - 1]), (-1LL))));
                            var_16 ^= ((/* implicit */short) arr_3 [i_0]);
                            arr_12 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max((0LL), (max((((/* implicit */long long int) var_10)), (0LL)))))) ? (((/* implicit */int) max((arr_4 [i_3 + 1] [i_3 - 1] [i_2]), (arr_4 [i_3 - 1] [i_3 - 1] [i_1])))) : (((/* implicit */int) arr_2 [i_0])));
                            var_17 = ((/* implicit */unsigned short) 495354701U);
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [10] [i_1])), (((((/* implicit */_Bool) 348462539)) ? (-279695196342604525LL) : (((/* implicit */long long int) 495354701U))))))) ? (max((max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1])), (-16LL))), (((/* implicit */long long int) ((unsigned char) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3316271119847319862LL)) ? (668379962U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (-19LL)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12)))))) : (((var_9) ? ((-(18U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
