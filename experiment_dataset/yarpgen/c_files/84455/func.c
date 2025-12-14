/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84455
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (min((arr_0 [i_0]), (4251316197U))));
        var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1402003096U)) || (((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_2 [i_0]))))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((unsigned int) (((+(var_7))) / (min((1722786914U), (arr_1 [i_0]))))))));
        var_13 ^= ((((/* implicit */_Bool) min((43651125U), (4225294023U)))) ? (max((((((/* implicit */_Bool) 3311804020U)) ? (arr_2 [i_0]) : (2224540735U))), (((unsigned int) var_0)))) : (var_8));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_14 ^= ((((/* implicit */_Bool) 2347476491U)) ? (3194943504U) : (((/* implicit */unsigned int) ((/* implicit */int) ((4225294023U) == (4251316218U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_4] [i_5] [i_4] = (-(((arr_15 [i_1 + 4] [i_1 + 1] [i_1 + 4] [i_4 - 1]) + (arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_4 + 1] [i_5 - 4] [i_5 - 4] [i_5 - 2]))));
                                arr_17 [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) 2070426557U)) ? (((((/* implicit */_Bool) var_9)) ? (arr_12 [i_3] [i_3] [i_3] [i_4]) : ((~(3662618374U))))) : (max((arr_9 [i_1 + 4] [i_4 + 1]), ((+(var_5))))));
                                var_15 |= min((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_5 - 3] [i_3] [i_2] [i_1 + 1]) : (arr_10 [i_1 + 4] [i_2] [i_1 + 4] [i_4]))), (((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (3194943504U) : (arr_13 [i_1] [i_3] [i_4] [i_5]))) : (arr_14 [i_4] [i_4 + 1] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
                arr_18 [i_2] [i_1] = ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 69673285U)) || (((/* implicit */_Bool) 3194943504U)))))))) * (min((((arr_0 [i_2]) - (arr_13 [i_2] [i_2] [i_2] [i_1]))), (var_1))));
            }
        } 
    } 
}
