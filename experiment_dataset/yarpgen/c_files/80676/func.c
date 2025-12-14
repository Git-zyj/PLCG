/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80676
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
    var_14 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)127)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (short)21347)) ? (4503597479886848LL) : (((/* implicit */long long int) 2370396331U))))))));
    var_15 = ((/* implicit */unsigned int) (((+(((int) var_3)))) & (min((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)44343))))), (((((/* implicit */int) var_9)) >> (((var_3) - (476672042U)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) max((min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) 3757679800U))));
                    arr_10 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((signed char)127), ((signed char)127)))), (((((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) var_9))))) ? (min((14874128809327888210ULL), (((/* implicit */unsigned long long int) var_0)))) : (var_6)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
}
