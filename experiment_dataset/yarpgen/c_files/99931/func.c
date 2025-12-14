/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99931
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
    var_18 &= ((/* implicit */signed char) max((var_3), (((((/* implicit */_Bool) (short)16352)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) max((((/* implicit */short) var_4)), (var_11))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((int) max((min((((/* implicit */int) var_8)), (arr_1 [i_0] [i_0]))), (((/* implicit */int) var_6)))));
        var_20 *= ((/* implicit */short) min((((arr_0 [i_0] [i_0]) & (arr_0 [(unsigned char)17] [i_0]))), (((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [(unsigned short)4])))))));
        arr_3 [i_0] [i_0] &= var_14;
    }
}
