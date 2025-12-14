/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67160
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
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((_Bool) (signed char)28));
                var_12 = ((/* implicit */unsigned char) ((unsigned int) (signed char)56));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
                    var_14 += ((long long int) ((_Bool) arr_7 [i_0] [i_0 - 2] [i_2 - 1] [i_1 + 1]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) arr_0 [i_2 - 1]);
                                var_16 = arr_1 [i_0];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) ((unsigned char) -146822787));
    var_18 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((signed char) (_Bool)1))), (((long long int) var_0)))));
}
