/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75868
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) (-(((unsigned long long int) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) ((var_18) >> ((((-(arr_0 [i_0 - 1] [i_0 - 1]))) + (1121018980)))));
        var_20 = ((/* implicit */unsigned short) min((((unsigned long long int) ((unsigned int) arr_1 [7LL] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) 67104768)), (var_12))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1597482424)))))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (((((/* implicit */_Bool) var_6)) ? (4435502981527519559LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        arr_9 [(_Bool)1] [3U] = max(((-(-210354031))), (max((((/* implicit */int) ((short) -210354050))), (max((((/* implicit */int) var_6)), (var_4))))));
    }
    var_21 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)12)) + (((int) var_11)))), ((+(((/* implicit */int) ((unsigned short) var_10)))))));
}
