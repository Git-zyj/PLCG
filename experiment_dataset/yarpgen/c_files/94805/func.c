/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94805
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_19 -= max((var_15), (((/* implicit */long long int) var_10)));
        var_20 = ((/* implicit */unsigned short) max((max((1314807365), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (arr_4 [i_1] [i_1])))))));
    }
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
}
