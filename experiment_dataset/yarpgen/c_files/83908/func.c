/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83908
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 |= ((/* implicit */long long int) (+(max((((/* implicit */int) var_5)), (506722418)))));
        var_20 |= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_2 [i_0])), (var_11))) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) ? (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */int) (unsigned char)57))))))) : (((/* implicit */int) ((unsigned char) (+(var_11)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) 3037930953U);
        arr_7 [i_1] |= ((/* implicit */signed char) max(((-(var_11))), (((/* implicit */long long int) var_5))));
    }
    var_23 = ((/* implicit */short) (signed char)119);
}
