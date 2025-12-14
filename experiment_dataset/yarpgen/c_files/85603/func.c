/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85603
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
    var_12 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) 1922893397U)), (608790604128571993ULL)))));
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */int) var_1)) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (1049669688U) : (var_5))) - (1049669678U))))) : (((/* implicit */int) var_10))));
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) 369466422U));
    var_15 = ((/* implicit */short) ((((((((/* implicit */int) var_11)) + (2147483647))) << (((((unsigned int) var_3)) - (1U))))) >> (((((/* implicit */int) var_0)) - (32238)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0]))))) ? (arr_8 [i_2] [i_0] [i_0] [(signed char)4]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [(short)10])))))));
                    arr_11 [i_0] [2U] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_2]);
                    var_17 = 1049669698U;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned int) ((short) (short)12));
                                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_13 [i_0] [(short)14] [i_0] [i_0])), (702098215399534108ULL)))));
                                var_20 |= ((/* implicit */signed char) (short)0);
                            }
                        } 
                    } 
                    arr_18 [(signed char)20] |= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [14U])) == (((/* implicit */int) max(((short)-28955), (var_10))))));
                }
            } 
        } 
    } 
}
