/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82561
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
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) (short)-22196))), (((unsigned long long int) (_Bool)1))));
                var_21 = arr_6 [i_0];
                arr_7 [3] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1)))) >= (((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_22 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -8711293624249068354LL)))) <= (min((((/* implicit */unsigned long long int) var_7)), (137438953471ULL))))))) % (-8711293624249068354LL));
    var_23 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) 609828101U)), (18446744073709551615ULL))));
    var_24 = ((/* implicit */signed char) (-(var_17)));
}
