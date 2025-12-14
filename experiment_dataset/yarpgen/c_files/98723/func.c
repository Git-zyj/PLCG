/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98723
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_5) + (1397383420)))))) - ((-(((((/* implicit */_Bool) 20ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28909)))))))));
    var_12 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((short) 13179788432746468378ULL)), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (var_8))))))), (min((2997042163U), (((/* implicit */unsigned int) var_7))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((arr_1 [i_1]) - (arr_5 [i_0] [i_1]))) - (((-1387432693) - (arr_3 [i_1] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned int) arr_7 [i_4] [i_3] [i_2] [i_0])), (arr_4 [i_1] [i_2] [i_1]))));
                                arr_12 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+((+(arr_9 [(unsigned short)0] [i_2] [i_4])))))), ((-(((arr_6 [i_0] [(unsigned char)15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
