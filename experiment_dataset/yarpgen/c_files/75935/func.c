/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75935
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
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_16 = ((unsigned int) ((unsigned int) arr_11 [i_0] [i_0] [7U] [i_2] [i_3]));
                            arr_13 [i_0] [i_1] [i_0] = var_1;
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4194303U)))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_1))) : (var_4)))) ? (arr_2 [i_0]) : (4294967292U));
                            arr_14 [i_0] = 3394687749U;
                            var_18 += min((((((/* implicit */_Bool) (~(2748820217U)))) ? ((-(1944907943U))) : (arr_12 [10U]))), (((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 - 4] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1944907943U) >= (4009770534U))))) : ((-(var_8))))));
                        }
                    } 
                } 
                var_19 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (var_5)))) ? (var_9) : (max((arr_5 [i_0] [9U]), (var_11))))), (((((/* implicit */_Bool) var_10)) ? (((arr_10 [i_0 - 4] [i_0 - 4]) - (var_11))) : (var_2))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((2903011831U), (285196761U))))));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ^ (var_1)))) ? (max((4294967293U), (var_6))) : (((var_5) ^ (var_12)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3303433542U) >= (var_3))))) : (((3478294664U) & (1746798610U))))) : (((unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (var_14)))));
    var_22 = var_10;
}
