/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71690
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
    var_13 -= min((((((/* implicit */unsigned long long int) -8651874590648329155LL)) + (var_2))), (((/* implicit */unsigned long long int) min(((~(1733581235244405825LL))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)57)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_4);
                arr_7 [i_0] [(signed char)9] [7LL] = ((/* implicit */signed char) arr_2 [i_1] [i_0]);
                var_15 *= ((/* implicit */signed char) ((((var_1) + (9223372036854775807LL))) << (((max((1631714794269426870ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (var_10)))))) - (1631714794269426870ULL)))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) (short)5694);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_9)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (-1LL)))))))) >= (((max((-1962649374261992020LL), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
}
