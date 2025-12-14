/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61274
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = arr_4 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)127))) ? (arr_10 [i_0] [i_1] [1LL] [i_0] [i_0] [i_0] [1LL]) : (((/* implicit */int) ((arr_10 [7] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0]) == (-391957959))))));
                                var_16 = ((/* implicit */int) ((_Bool) (short)32767));
                                arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((max((9223372036854775807LL), (((/* implicit */long long int) 31U)))) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                                var_17 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((arr_4 [i_2] [i_2] [i_2]) && (((/* implicit */_Bool) 3932531538U))))), (max((arr_10 [i_0] [i_1] [i_0] [i_0] [(short)7] [i_0] [2ULL]), (((/* implicit */int) var_2)))))), (((/* implicit */int) ((arr_8 [0U] [0U] [0U] [i_2]) < (((/* implicit */long long int) 3932531538U)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]);
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [2ULL] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_0 [i_5])))))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_8) + (((/* implicit */int) var_2)))) + (arr_9 [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_20 ^= (~(((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (724176241379318478LL))) | (((/* implicit */long long int) ((/* implicit */int) (short)32767))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) 1568926514);
}
