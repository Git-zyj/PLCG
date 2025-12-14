/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66219
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) ((var_0) < (arr_1 [i_0] [i_0]))))));
        var_21 |= ((/* implicit */long long int) (~((~(var_11)))));
        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)57346))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [(signed char)17] [(short)4]));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(arr_1 [i_1] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((signed char) var_7)))))) : (((/* implicit */int) min((((short) var_5)), (((/* implicit */short) (!(var_1)))))))));
        arr_6 [4ULL] = ((/* implicit */short) var_13);
        var_24 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_4 [i_1])), (var_16))), (((/* implicit */unsigned int) var_9))));
    }
    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
    var_26 = ((/* implicit */_Bool) max((((unsigned int) var_14)), (((/* implicit */unsigned int) (~((+(var_0))))))));
}
