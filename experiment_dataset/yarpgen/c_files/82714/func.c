/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82714
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
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_0 + 2] [i_0])), (1326630097)))) * (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_14)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1678317122U)))))) <= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1]))) : (arr_3 [i_1 - 1] [i_0] [i_4])))))))));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)6)))))) + (max((((((/* implicit */_Bool) -1265146389392406651LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((16264520058586675202ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
}
