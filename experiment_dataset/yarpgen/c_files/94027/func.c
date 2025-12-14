/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94027
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((arr_0 [i_0 - 3] [i_0 - 1]) < (((int) arr_0 [i_0 - 2] [i_0 + 2]))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) arr_1 [i_0 - 3]))))), (((((((/* implicit */_Bool) arr_1 [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [18] [19U])))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (arr_0 [i_0 - 2] [i_0 + 2])))));
    }
    var_14 &= ((/* implicit */unsigned long long int) var_2);
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */_Bool) (short)25041);
}
