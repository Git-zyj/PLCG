/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88616
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
    var_12 = ((/* implicit */unsigned char) ((var_7) * (((((/* implicit */_Bool) (-(7327220105651724061ULL)))) ? (((/* implicit */unsigned long long int) var_1)) : (7327220105651724060ULL)))));
    var_13 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    var_14 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_6 [i_1] [i_2] [i_2]))), (((arr_4 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) -556526115)))))));
                            var_16 = ((/* implicit */short) 18446744073709551615ULL);
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((2839678599932110112ULL) - (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_11)) ^ (778302732))))), (((long long int) ((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
