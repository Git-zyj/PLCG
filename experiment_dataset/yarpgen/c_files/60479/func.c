/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60479
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (unsigned char)79);
        var_20 = (-(((((((/* implicit */int) (signed char)-95)) + (2147483647))) << (((((-1944464839) + (1944464851))) - (12))))));
    }
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) var_18);
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -5804852163842821546LL))))), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [21LL]))))), (arr_0 [i_1] [i_1 - 3])))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_5), (var_8)));
    var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) 2989564862U)) : (min((((/* implicit */long long int) (short)-4575)), (var_8))))), (((/* implicit */long long int) var_14))));
    var_25 = ((/* implicit */unsigned char) min((5804852163842821546LL), (((/* implicit */long long int) (short)-4574))));
}
