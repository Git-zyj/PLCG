/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 | ((((!(((65024 ? 65024 : 1073741312)))))))));
    var_15 = (min(((((var_3 < 64) || 65024))), 1726));
    var_16 = (max(var_16, ((((((~var_6) ? ((min(64, var_3))) : ((var_11 ? 1108307720798208 : 564729101)))) * ((((!((min(-2048, -2043))))))))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 += (min(2229197033, (max(512, 1))));
        var_18 = (~1073741312);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 -= 141;
        var_20 = (((min(46, (72057594029539328 / -13258)))) ? ((-1420977034 ? var_2 : (min(1240291370, 8192)))) : 1);
    }
    #pragma endscop
}
