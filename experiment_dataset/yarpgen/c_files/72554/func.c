/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72554
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 299038211U)) ? (14681139149008965656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */unsigned long long int) -4652410374134877242LL)) : ((+(arr_1 [i_0]))))) > (18446744073709551615ULL)));
                            arr_11 [i_2] [i_2] = var_9;
                            arr_12 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (min((((/* implicit */long long int) arr_10 [i_3] [i_2] [i_2] [i_0])), (arr_9 [i_0] [i_2] [i_2] [i_2])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) arr_3 [i_0])) : ((-9223372036854775807LL - 1LL))))) ? (1046641117382108440LL) : (arr_7 [i_0])));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28906))) : (arr_1 [15LL])))))))));
                                arr_21 [i_4] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -5652524488484879248LL)) ? (((/* implicit */unsigned long long int) -9223372036854775802LL)) : (0ULL)));
                                var_18 = min((((/* implicit */unsigned long long int) ((-9223372036854775807LL) + (((/* implicit */long long int) 2236974324U))))), (((((/* implicit */unsigned long long int) arr_7 [i_4])) / (arr_2 [i_6]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3096))) >= (var_8)))), (1125899906834432LL))), ((-9223372036854775807LL - 1LL))));
}
