/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6652
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
    var_19 |= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_14)))), (((long long int) var_11)))), (min((-7012938976487442262LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31471)) != (((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((unsigned long long int) (-(arr_2 [i_0 + 2] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 4])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 + 2])))), ((-(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 1]))))));
                                arr_12 [i_0 - 3] [i_1] [i_2] [i_2] [i_0 - 3] = ((/* implicit */unsigned long long int) (+(((((-7012938976487442246LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1118868398U)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])) : (((/* implicit */int) (short)-277)))))))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) (unsigned short)38927))))) ? (((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_5 [0ULL])))) : (((/* implicit */int) (((-(((/* implicit */int) (short)-277)))) > ((+(((/* implicit */int) arr_3 [i_1]))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((max((1047869114U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_12)), (var_16)))))), (((/* implicit */unsigned int) arr_6 [i_1]))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (min((((/* implicit */unsigned int) var_6)), (var_13))))));
}
