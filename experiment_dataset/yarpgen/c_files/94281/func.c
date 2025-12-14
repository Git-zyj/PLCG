/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94281
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
    var_12 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */long long int) arr_1 [(short)6]);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned char)20))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34942))) % (arr_9 [i_0] [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) ^ (1581807497U))))));
                            var_16 = ((/* implicit */_Bool) max((arr_10 [i_0 - 1]), (arr_10 [i_0 - 1])));
                            var_17 -= ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((arr_1 [(short)0]), (((/* implicit */signed char) ((_Bool) 0ULL))))))));
                var_19 *= ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2713159798U)) ? (942182691117328674LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (var_9))))))));
            }
        } 
    } 
}
