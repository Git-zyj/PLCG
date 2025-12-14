/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6841
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_3] [i_3 + 1]))) & (((unsigned long long int) arr_12 [i_4] [i_4] [i_4] [i_3] [i_3 - 2]))));
                                var_20 ^= (+(arr_11 [i_3 + 1] [i_2 + 2]));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28247))) * (arr_12 [i_0] [i_1] [i_2] [i_2] [i_0]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)28247)) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (var_1) : (-782582453)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (var_13)))), (((/* implicit */unsigned int) ((_Bool) (+(var_5))))))))));
}
