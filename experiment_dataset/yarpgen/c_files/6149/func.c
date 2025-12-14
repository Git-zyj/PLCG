/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6149
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
    var_19 = ((/* implicit */int) ((((((/* implicit */long long int) (-(var_7)))) % (var_10))) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    var_20 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)24093)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)25960)))), (arr_1 [i_0])));
        arr_5 [i_0] = ((/* implicit */signed char) (short)1023);
    }
}
