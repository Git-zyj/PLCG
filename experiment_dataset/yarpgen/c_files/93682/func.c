/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93682
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((9064632239157014948ULL) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), ((~(857303026U))))))));
        var_19 *= ((/* implicit */_Bool) (-(min((1073741808U), (((/* implicit */unsigned int) var_11))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((signed char) (unsigned short)34729));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
    }
}
