/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79871
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
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = var_8;
                arr_4 [i_0] [i_0] [i_1] |= var_3;
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_18 = ((/* implicit */long long int) max((var_18), ((-(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (arr_0 [i_1])))))));
                    var_19 = ((/* implicit */int) (!((_Bool)1)));
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_15), (((/* implicit */signed char) (_Bool)1)))))) * (max((((/* implicit */long long int) (!(var_14)))), ((-(arr_6 [i_0] [i_0] [i_1 + 1] [i_0])))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_5 [i_0]))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((1229424741) + (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 2] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
                    arr_12 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) max((min((519726955022219754LL), (((/* implicit */long long int) arr_10 [i_0] [i_0 + 1] [i_3] [i_0])))), (((/* implicit */long long int) ((var_6) ? (arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_3]) : (arr_10 [8LL] [i_0 + 1] [i_3] [1LL]))))));
                }
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [i_0 + 1] [14] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 355607618)) ? (-1610065227882085842LL) : (-1685041044105580725LL)))) ? (min((arr_0 [i_5]), (arr_0 [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 265322049)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)82)))))));
                            arr_18 [i_5] = ((/* implicit */signed char) (+(arr_7 [i_0] [i_1] [i_0] [i_5])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1 + 1])) ? (((/* implicit */int) var_1)) : (arr_10 [i_1 - 1] [i_1 - 1] [22] [i_1 + 2]))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 2] [14] [i_1 + 2])) || (((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_1);
}
