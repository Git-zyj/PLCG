/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7758
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 3555149624U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (739817672U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0]) != (var_2))) ? (((unsigned int) arr_0 [i_0])) : (1952596660U));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) (~(arr_1 [i_1 + 1])));
            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [6U]))));
        }
        var_21 = ((unsigned int) ((2475822544U) >> (((1819144781U) - (1819144772U)))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) min((max((min((((/* implicit */unsigned int) arr_6 [i_2] [i_2])), (arr_1 [11U]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) >= (((/* implicit */int) (signed char)49))))))), (min((var_2), (((/* implicit */unsigned int) ((signed char) (signed char)9)))))));
        var_23 = ((/* implicit */signed char) 0U);
    }
}
