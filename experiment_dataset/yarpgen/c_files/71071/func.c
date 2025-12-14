/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71071
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
    var_12 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (-(min((4611685880988434432LL), (((/* implicit */long long int) (short)-32767)))));
        var_13 = ((/* implicit */unsigned int) ((2451928241U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
    }
}
