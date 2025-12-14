/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70662
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
    var_19 = ((/* implicit */unsigned int) 1769546980802598106ULL);
    var_20 = ((unsigned short) 1151076999U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        var_21 = ((((/* implicit */_Bool) 16677197092906953510ULL)) ? (((/* implicit */int) (unsigned short)18381)) : (((/* implicit */int) (short)-19057)));
        var_22 -= ((/* implicit */unsigned short) arr_1 [(signed char)2]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) max((var_23), (var_7)));
        arr_7 [0LL] [0LL] = min((((/* implicit */unsigned long long int) var_5)), ((((-(16677197092906953510ULL))) * (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))));
    }
}
