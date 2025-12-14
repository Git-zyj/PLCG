/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93258
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
    var_10 &= ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_6)) ? (1220012450U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_11 ^= ((5U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((signed char) (signed char)127)))));
                    var_13 = ((/* implicit */unsigned int) var_2);
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4204)) || (((/* implicit */_Bool) (signed char)-109)))))));
                }
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] = var_1;
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))))))) & (((unsigned int) (short)-4204)))))));
                                arr_17 [i_3] [(signed char)14] [(signed char)13] [i_5 + 3] = ((/* implicit */signed char) min((((unsigned int) arr_6 [i_4] [i_5 + 3])), (((unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0])))))));
                                var_16 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1 + 1] [i_5 + 3]))))), (((4294967295U) << (((((/* implicit */int) arr_6 [i_1 - 1] [i_5 - 1])) - (26411)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1109727598U)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_8)))))) : (max((min((2580199019U), (((/* implicit */unsigned int) (short)32767)))), (((unsigned int) var_6))))));
}
