/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87605
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_7))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */signed char) var_4);
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+(((((/* implicit */_Bool) -3148793748974060393LL)) ? (-3148793748974060393LL) : (((/* implicit */long long int) 330765874)))))) | (((/* implicit */long long int) min((((111128013) % (-330765875))), ((~(((/* implicit */int) var_3)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_15 -= ((/* implicit */unsigned int) arr_3 [i_1]);
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3148793748974060386LL))));
        }
        var_17 = var_11;
    }
}
