/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (!40814);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_20 = (min(((min((-529854939 > -529854932), 1))), ((~(max(256, -529854946))))));
            var_21 *= (((((1931439318 >> (529854955 - 529854955)))) % 6938203423909339552));
            var_22 &= 529854931;
            var_23 -= ((529854938 || ((max(529854934, (((-529854978 + 2147483647) >> (529854927 - 529854905))))))));
        }
        var_24 = (-80 | (min(529854940, -97)));
        var_25 *= ((max(1787652333, -4541458114881062460)));
    }
    var_26 = var_1;
    var_27 = ((0 ^ ((min(54703, -529854955)))));
    #pragma endscop
}
