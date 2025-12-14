/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78348
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
    var_12 = ((/* implicit */short) ((unsigned int) ((_Bool) ((_Bool) (_Bool)0))));
    var_13 |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)0));
        var_15 = ((/* implicit */short) ((long long int) ((unsigned char) 1986315841703960982LL)));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((int) ((unsigned int) var_6))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (short)255))))))));
        var_18 = ((/* implicit */_Bool) ((signed char) ((signed char) (short)2772)));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_2))))))));
        var_20 += ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])))));
    }
    var_21 = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
}
