/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94478
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
    var_16 = ((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (short)32264)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))))) >= ((~(var_12))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_15))))) ? (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [(signed char)4] [(signed char)7])))) : ((+(((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2]))))))));
                    var_17 = ((/* implicit */short) (-((~(((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) ((var_1) >> (((((((/* implicit */_Bool) (short)26117)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-26118)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) min((arr_4 [i_1] [i_1]), (var_10)))))) + (26127)))));
                                arr_13 [i_0] [i_1] [(signed char)7] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-25058)) ? ((~(((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (short)-26113)) : (((/* implicit */int) arr_7 [(short)7] [i_2] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (short)-26125))))))));
                                arr_14 [i_3] = ((/* implicit */_Bool) arr_10 [(short)3] [i_1] [(unsigned short)0] [i_1] [i_1]);
                            }
                        } 
                    } 
                    arr_15 [(signed char)6] [(signed char)6] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) (short)-32265))))));
                }
            } 
        } 
    } 
}
