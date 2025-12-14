/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76669
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
    var_15 -= ((/* implicit */unsigned long long int) 1293497414U);
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2 + 2] [i_0] [i_3 - 3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1] [i_3 + 1] [i_3 + 1]))) | (1293497414U))));
                            var_17 -= (-(max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_2 + 3] [i_3 - 3] [i_2 - 1]))));
                            var_18 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9638)) >= (((((/* implicit */int) arr_8 [i_0] [i_3] [i_3 - 4] [i_2 - 1])) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_3 + 1] [i_2 + 2]))))));
                            arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_13))))));
                            var_19 ^= ((/* implicit */unsigned short) min(((~(arr_6 [i_2 + 3] [i_3 - 2] [i_2]))), ((~(arr_6 [i_2 + 3] [i_3 - 2] [i_2 + 3])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) | (((/* implicit */int) arr_3 [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_2 [i_0])))))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) var_10);
}
