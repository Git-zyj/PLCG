/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81864
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [12] [(_Bool)1])) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)53)))) - (138)))));
        var_18 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) ((signed char) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)10])) % (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_8))));
}
