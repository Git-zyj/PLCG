/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71430
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) * (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (var_5)))) || (((/* implicit */_Bool) ((((161176308U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ^ (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_2) : (var_9))))))));
        var_17 &= ((/* implicit */signed char) max((2015976896U), (max(((+(arr_0 [20U]))), (max((var_11), (var_0)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), ((~(arr_0 [i_1])))));
        var_19 = var_14;
        var_20 = 979024906U;
        var_21 = ((/* implicit */signed char) 2970159072U);
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        var_22 = (~((~(max((0U), (arr_2 [20U] [i_2]))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] [i_3] = (+(max((min((2278990399U), (((/* implicit */unsigned int) arr_1 [i_3])))), ((~(2400316142U))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (min((((((/* implicit */_Bool) arr_15 [16U] [i_2 - 2] [4U])) ? (arr_15 [6U] [i_2 - 3] [18U]) : (arr_15 [14U] [i_2 + 1] [14U]))), ((~(var_7)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (signed char i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2])) || (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_13 [i_3] [i_3] [i_3]) : (var_0))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                                var_24 -= ((arr_12 [i_5 + 1] [i_2 - 1]) * (((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_2 - 2])) ? (arr_12 [i_5 + 1] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                                arr_25 [i_4] [10U] [18U] &= ((/* implicit */signed char) var_13);
                                arr_26 [i_2] [i_3] [i_3] [i_3] [i_5] [i_3] [i_6] = ((/* implicit */signed char) (~(var_7)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((max((arr_0 [(signed char)6]), (arr_16 [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [4U]))));
    }
    var_26 = ((/* implicit */unsigned int) min((var_26), (((var_11) % (max((((var_3) << (((var_11) - (4028345564U))))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
}
