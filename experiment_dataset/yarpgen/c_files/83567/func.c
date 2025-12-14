/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83567
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((short) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) -1642428300))))));
        var_15 = ((/* implicit */signed char) (+(((((unsigned long long int) arr_1 [i_0])) / (((/* implicit */unsigned long long int) min((3900978350702339318LL), (var_5))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(-1642428303)))), (arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((short) var_0))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (arr_4 [i_1]))))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    var_18 -= ((/* implicit */short) min((var_13), ((!(((/* implicit */_Bool) min(((unsigned short)48897), (((/* implicit */unsigned short) (short)25780)))))))));
}
