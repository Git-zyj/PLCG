/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6513
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 3] [(signed char)20] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 3] [i_1])) : (((/* implicit */int) arr_4 [i_2 - 3] [i_0]))))) ? (((/* implicit */int) arr_4 [i_2 - 3] [i_0])) : (((/* implicit */int) ((unsigned char) arr_1 [i_2 - 3] [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned char)22] [i_1] [i_1 + 2] [i_1] [0ULL] &= ((/* implicit */unsigned int) ((signed char) min((arr_1 [i_0] [i_1 + 2]), (arr_1 [23U] [i_1 - 1]))));
                                arr_15 [i_2] = ((/* implicit */unsigned char) arr_4 [14ULL] [i_1 - 3]);
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_8 [5U] [i_1 - 1] [i_2 + 3] [i_2 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-2147483647 - 1)))))))) - (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */int) ((unsigned short) var_5));
    var_16 = ((/* implicit */signed char) var_5);
}
