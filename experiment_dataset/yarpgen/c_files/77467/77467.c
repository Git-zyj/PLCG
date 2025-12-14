/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max(-1480854517580614840, 1455289393));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [10] = ((2839677903 <= (((((((arr_1 [i_0]) & (arr_1 [i_0]))) == (-6974477635160058630 != var_2)))))));
        var_12 = (max((min(-115, (arr_0 [i_0] [i_0]))), (((var_8 < (arr_0 [i_0] [i_0]))))));
        var_13 = ((((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) + 2147483647)) << (((min(1455289393, 2591919606)) - 1455289393))));
        var_14 = (~2571178645);
    }
    #pragma endscop
}
