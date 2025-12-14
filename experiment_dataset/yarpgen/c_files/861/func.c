/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/861
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max((((arr_4 [i_0] [i_2 - 1] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 - 1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_10 += max((((/* implicit */long long int) ((signed char) min((var_8), (((/* implicit */unsigned short) var_9)))))), ((-(max((((/* implicit */long long int) var_2)), (6238169180229864123LL))))));
                                var_11 += ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) arr_11 [i_3] [i_3] [i_3] [(_Bool)1] [i_3 - 1] [i_3]))), (min((arr_11 [i_1] [i_1] [i_1] [i_3] [i_3 + 1] [i_3 - 1]), (((/* implicit */long long int) var_3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) 3834354062U);
}
