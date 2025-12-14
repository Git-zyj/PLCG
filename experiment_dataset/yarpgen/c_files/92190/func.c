/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92190
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
    var_18 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) 1016582926)) & (((((/* implicit */_Bool) 1016582929)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (1688870414221654918LL))))));
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(var_8)))) ? ((~(6LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) min((((long long int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1])), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) max((6638350728652152329LL), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]))))) : (((((/* implicit */_Bool) 6638350728652152335LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (6128810321086587167ULL)))))) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                var_22 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */unsigned int) var_8)) * (var_13))), (max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_15)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (~((-(var_9)))))))))));
                    var_24 -= ((/* implicit */_Bool) (~((-(var_17)))));
                    var_25 += min((((long long int) ((((/* implicit */_Bool) 6128810321086587167ULL)) ? (((/* implicit */int) (unsigned short)58991)) : (((/* implicit */int) (unsigned char)220))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_3] [i_4]))))) ? (((long long int) (signed char)-79)) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)58991), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (unsigned short)43168))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (1566149786846007455LL)));
}
