/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71807
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) (unsigned char)156))))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)100))));
        arr_4 [(unsigned char)2] [8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    }
    var_18 = ((/* implicit */signed char) 878697677);
    var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
}
