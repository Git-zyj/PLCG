/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60320
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
    var_10 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) arr_5 [(unsigned char)6] [i_2] [8]);
                                var_12 = ((/* implicit */short) (+(((max((arr_10 [i_2]), (5654125517533120704ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_2] [(unsigned short)8] [(signed char)11] [i_3] [i_4] [i_4]), (arr_11 [i_2] [i_4])))))))));
                            }
                        } 
                    } 
                    arr_12 [(_Bool)1] [12] |= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (signed char)33);
}
