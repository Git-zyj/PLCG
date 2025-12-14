/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55686
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
    var_14 = ((/* implicit */unsigned int) min((var_14), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (2129079169U)))));
    var_15 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2129079164U) : (4294967295U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))));
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [1U] [i_0 - 1] [i_1 + 1])))) == (((arr_3 [i_0 - 1] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [11U] [(signed char)17] [i_1 + 1]))))));
                            var_18 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_1 [(signed char)2])) && (((/* implicit */_Bool) 4294967278U)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)0] [6U] [(_Bool)1] [(unsigned short)11]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2165888129U)))))))), (((((/* implicit */_Bool) 702213520U)) ? (2424634037U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))));
                        }
                    } 
                } 
                var_19 |= ((/* implicit */unsigned int) ((_Bool) 1U));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((_Bool) max((((/* implicit */unsigned int) arr_3 [(signed char)15] [i_1 + 1] [i_0 - 1])), (var_10)))) ? (((((/* implicit */_Bool) ((unsigned int) arr_2 [10U] [i_1 + 1] [i_1 + 1]))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [6U])) && (var_2)))))) : (((/* implicit */int) ((_Bool) arr_3 [i_0 - 1] [i_1 + 1] [i_1 + 1]))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) & (var_9))))) | (((/* implicit */int) ((unsigned short) arr_3 [i_0 - 1] [6U] [i_1 + 1])))));
            }
        } 
    } 
}
