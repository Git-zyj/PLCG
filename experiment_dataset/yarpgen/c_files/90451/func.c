/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90451
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
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [4]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 16777215U))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_0])))) : (((/* implicit */int) max((var_7), (arr_5 [i_0] [i_0]))))))) ? (((/* implicit */int) var_2)) : (arr_9 [i_0] [i_1] [i_1] [i_0] [3LL])));
                                arr_17 [i_0] [i_0] [i_2] [i_2] [i_4 + 2] |= ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_14 [i_1] [i_3] [i_3] [i_4] [(signed char)18] [i_2]))));
                                var_22 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 + 2] [13U] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) min((arr_4 [i_1] [i_1] [(_Bool)1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [20LL] [i_4 - 1])) ? (arr_13 [14LL] [i_4 + 2] [i_4] [(unsigned char)11] [i_4] [i_4 + 2]) : (((/* implicit */unsigned int) arr_9 [i_4 - 1] [i_4] [(signed char)2] [(signed char)2] [i_4])))));
                                var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) (unsigned char)240)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) arr_9 [4LL] [(unsigned char)2] [i_2] [i_2] [i_2])) : (9223372036854775808ULL)))) ? (((/* implicit */int) arr_10 [i_1] [i_4 + 1] [i_4 + 1] [(unsigned char)6] [i_4 + 1] [i_2])) : (((/* implicit */int) (short)4252)))) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 11436790027998261175ULL))));
}
