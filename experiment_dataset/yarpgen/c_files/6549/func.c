/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6549
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((454838949), (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) var_7))))) : ((~(var_8))))) : (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 454838951)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)0)))), ((~(((/* implicit */int) (signed char)-10)))))))));
                var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))))))));
                var_13 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) != (((/* implicit */int) arr_3 [i_0 - 2]))))) / (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 2] [i_3 + 4] [i_0] [i_3 + 1] &= arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_3];
                            var_14 = ((/* implicit */signed char) arr_5 [i_0] [3] [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
    {
        for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            {
                arr_16 [i_4 + 1] [i_5 - 1] [6ULL] &= ((/* implicit */signed char) arr_11 [i_4 - 1]);
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((454838974) - (((/* implicit */int) (signed char)0)))))));
                var_16 += ((/* implicit */unsigned long long int) arr_15 [i_4 - 2] [i_5] [i_4]);
            }
        } 
    } 
}
