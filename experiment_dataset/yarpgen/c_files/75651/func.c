/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75651
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((((((/* implicit */_Bool) 0ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (max((((/* implicit */unsigned long long int) -7346566420307953301LL)), (var_4)))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) 1ULL))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-28)), (-7346566420307953301LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-7346566420307953301LL))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2512097736U)), (7346566420307953284LL)))), (var_6))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_2])) << (((var_5) - (7785432695317928730ULL)))))), (max((var_5), (((/* implicit */unsigned long long int) -7167382808663063800LL))))))));
                        var_19 = ((/* implicit */signed char) var_10);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) (~(7346566420307953325LL)));
                            var_21 ^= ((/* implicit */short) ((unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3] [3LL]));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) 7346566420307953301LL)))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7346566420307953304LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) (~(arr_1 [i_0])));
    }
    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))));
}
