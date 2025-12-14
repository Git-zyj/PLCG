/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7472
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
    var_11 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_0)), ((~(4294967273U))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_0]);
                    var_12 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (1))), (((/* implicit */int) arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483635) : ((-2147483647 - 1)));
                                var_14 -= ((/* implicit */_Bool) -2147483639);
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(signed char)14])) ? (max((((/* implicit */unsigned int) (-(2147483639)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) : (4294967295U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
