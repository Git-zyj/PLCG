/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78295
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [3LL] [i_0] [i_0] [3LL] = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((((/* implicit */int) var_0)), (arr_12 [i_1] [i_3] [i_1] [i_1] [i_0])))), ((+(-5561458282229192783LL))))), (((/* implicit */long long int) max((min((var_12), (var_12))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) arr_7 [(signed char)1] [(signed char)1] [1])))))))));
                                var_16 &= ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_4))))))));
                                arr_15 [i_1 - 2] [i_1 - 2] = ((/* implicit */signed char) min((min((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) * (((/* implicit */unsigned int) arr_4 [i_4] [i_3])))), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_3 [i_0] [(_Bool)1] [i_2]))) <= (((/* implicit */int) var_15)))))));
                                var_17 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */int) var_11)), ((+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */int) var_8);
                                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (-1467922660) : (((/* implicit */int) (signed char)93)))) * (((((/* implicit */int) arr_7 [i_1] [i_1] [(signed char)8])) >> (((arr_20 [i_0] [i_0] [0LL] [i_0] [i_0] [i_0]) + (464539666))))))))));
                                var_20 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(arr_11 [9] [1] [i_2] [i_2] [2U] [1]))))))));
                                var_21 = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_5] [i_2]);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((min((var_9), (min((arr_20 [i_6] [i_6 + 2] [i_5] [2LL] [i_1] [i_0 - 1]), (-21))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_2) - (8804596609395048468LL))))))) : (var_13)));
}
