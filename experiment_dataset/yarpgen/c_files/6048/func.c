/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6048
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 = 8589934560ULL;
                    var_11 = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) 268434944U)))));
                                arr_14 [i_0 - 3] [i_1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1] [i_0 + 2] [i_3])) ? (arr_10 [i_0 - 2] [i_1] [i_0] [i_3] [i_1 + 1] [i_1 + 1] [i_0]) : (arr_10 [i_0 + 1] [0U] [i_0] [i_3] [i_1 - 1] [i_3] [i_4])))));
                                var_13 = ((/* implicit */unsigned long long int) var_6);
                                var_14 = ((268434944U) + (arr_10 [i_0 - 1] [i_1] [i_0] [7ULL] [i_3] [i_0] [5U]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) (+(var_7)));
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-6))));
}
