/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59594
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_0]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0]);
                    var_13 |= ((/* implicit */_Bool) arr_0 [i_2]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [2] [i_1 - 3] [i_0] [2] = ((/* implicit */signed char) min(((~((+(arr_9 [i_0] [i_1] [i_0] [i_3]))))), ((~((~(((/* implicit */int) arr_0 [i_3]))))))));
                    arr_14 [i_0] [i_1] [6U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (8412958417339737644ULL) : (((/* implicit */unsigned long long int) -1420415214))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) : ((-(min((arr_2 [i_3] [i_0]), (((/* implicit */long long int) arr_12 [(_Bool)1] [i_1] [i_3]))))))));
                }
            }
        } 
    } 
    var_14 = min((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_3)))), (var_9))))));
}
