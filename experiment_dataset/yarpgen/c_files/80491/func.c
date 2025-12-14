/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80491
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
    var_11 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_2)), (((var_7) & (596219749515357866ULL))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min((240977410), (((/* implicit */int) (signed char)27))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_12 |= ((/* implicit */long long int) 3887599025963290847ULL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 |= (+(((/* implicit */int) arr_11 [i_4 - 1] [i_3 - 1] [i_2 - 2] [i_2 + 1])));
                                var_14 = (!(((/* implicit */_Bool) 1064980051U)));
                                var_15 *= ((/* implicit */int) arr_16 [i_1]);
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */signed char) (((~(min((17850524324194193753ULL), (((/* implicit */unsigned long long int) var_10)))))) >= (((/* implicit */unsigned long long int) 1064980067U))));
            }
        } 
    } 
}
