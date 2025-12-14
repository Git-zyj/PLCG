/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96612
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_16 |= (~(arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_10)) + ((~(((/* implicit */int) var_1))))))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned short) ((unsigned int) 67108863U));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (259473669U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)255)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_14))))) : (var_11))))));
    var_20 = ((int) (~(((/* implicit */int) var_1))));
    var_21 = ((/* implicit */unsigned short) ((min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (-3124844423857932409LL)))))) - (((/* implicit */unsigned long long int) var_6))));
}
