/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95706
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(-594878955)))));
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 5757657374113236511LL)) ? (-1880182441) : (-1))), (((int) -20)))))));
    var_17 |= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_13 [2] [i_2] [(unsigned short)9] [1U] = arr_0 [i_0];
                            arr_14 [i_0] [14] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((unsigned int) (unsigned short)3260))))), (max((((/* implicit */long long int) (~(-19)))), (((long long int) arr_9 [i_0] [i_0] [i_2] [(unsigned short)13]))))));
                            var_18 = ((/* implicit */long long int) (~((~(max((arr_6 [i_1] [i_3]), (((/* implicit */unsigned int) 33))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) 4609434218613702656LL);
                arr_15 [i_1] = ((/* implicit */unsigned long long int) (-(min(((+(9223372036854775793LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3248)) ? (-25) : (((/* implicit */int) (unsigned short)0)))))))));
            }
        } 
    } 
}
