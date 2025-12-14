/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (~var_9);
    var_20 ^= 423246746;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [20] |= var_9;
        arr_3 [i_0] [i_0] = ((((max(((var_17 ? var_14 : var_3)), (arr_0 [i_0] [i_0])))) ? ((~(arr_1 [i_0]))) : (((var_5 || (var_0 && -1884966137))))));
        var_21 = (~71);
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = var_10;
        var_22 = (-(((((((((arr_5 [i_1]) + 2147483647)) << (71 - 71)))) || (((var_10 ? (arr_4 [1]) : var_12)))))));
    }
    #pragma endscop
}
