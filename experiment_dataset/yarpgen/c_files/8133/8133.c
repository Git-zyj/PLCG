/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_2;
        var_14 = 401461040;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 = (max((-7471857503214948600 && -8735), (4728763913938516849 == 8)));
        var_16 = (max((min(1, 1174175599)), var_7));
    }
    var_17 = var_2;
    var_18 = (max((-127 - 1), var_7));

    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_19 = (min(var_19, (((-116 | (min(1069390886, 2065)))))));
        arr_10 [i_2] = var_3;
        arr_11 [i_2] = ((var_8 && 5371178554502972292) + (1069390886 != 8014305408323310467));
    }
    #pragma endscop
}
