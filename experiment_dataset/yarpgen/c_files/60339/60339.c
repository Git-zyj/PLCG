/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_4 ? var_12 : 18446744073709551595)) <= (((max(1, 1)))))) || ((min((970718786 % var_0), (!var_16))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 ^= ((((((~var_16) * (-6730 * -12106)))) ? (((((27375 << (705548346 - 705548342))) < ((var_5 ? 198 : var_16))))) : (((!(13584 * var_3))))));
        var_19 = ((((~(116 ^ 1781966662269143752)))) ? (((var_0 || var_7) | (var_15 % 4294967288))) : ((((((max(var_14, 35729))) || ((min(var_12, 27269))))))));
        var_20 = (((max(var_15, -var_7)) & var_11));
    }
    var_21 = -485109692;
    var_22 = ((((((~2888242521015161079) ? (((max(var_0, var_8)))) : (var_15 / 2769190991723010654)))) / ((((max(var_15, var_9))) ? (13789922170841512409 < -29819) : 4))));
    #pragma endscop
}
