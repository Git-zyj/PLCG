/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99277
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
    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_13)), (min((7146138372516946069ULL), (((/* implicit */unsigned long long int) -3321186459162205335LL)))))) - (18446744073709551518ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (min((min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)67))))), (-3854954377469186955LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [(short)8] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                var_21 ^= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(-3854954377469186958LL)));
                            var_22 = ((/* implicit */unsigned long long int) var_10);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3646836768928904286ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (arr_1 [i_0]))))) : (max((((/* implicit */long long int) arr_6 [i_3] [i_2] [(short)17] [i_0])), (var_10)))))) | (1ULL)));
                            arr_10 [i_2] [i_2] [i_2] [3LL] = 2211649220969473250ULL;
                            var_24 |= ((/* implicit */signed char) ((long long int) (signed char)19));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((1583112113289157373ULL), (((/* implicit */unsigned long long int) var_16)))) : (((((/* implicit */_Bool) var_15)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))));
}
