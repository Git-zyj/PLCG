/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92087
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = (~(arr_1 [i_0 - 2]));
        arr_3 [i_0] = (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_0)))));
    }
    var_12 = ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_7)))) >= (((((/* implicit */_Bool) 2857963455U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))), (((long long int) min((((/* implicit */unsigned long long int) 2857963465U)), (8478648174786024834ULL))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) <= (((long long int) -220089960)))))));
}
