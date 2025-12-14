/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72377
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
    var_13 = ((/* implicit */unsigned short) ((var_12) < (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((signed char) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((4074503451U) | (((unsigned int) arr_0 [i_0 + 3]))))) : (7ULL)));
        var_14 |= ((max((arr_2 [i_0 + 3] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 3]))) / (((/* implicit */int) var_10)));
    }
    for (int i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) (unsigned short)62648);
        var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_3 [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1759008094)) * (3451443355U)));
        var_17 |= ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
    }
}
