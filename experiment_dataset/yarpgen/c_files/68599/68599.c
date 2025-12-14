/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_7);
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 = (arr_2 [11] [i_0] [19]);
            arr_6 [i_1] [i_0] = var_6;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = var_3;
            var_23 = var_11;
        }
        var_24 -= var_14;
        var_25 = (max(var_25, (arr_0 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_26 = ((-27810 || (((~(var_2 <= var_3))))));
        var_27 = (max(var_4, (((((((arr_2 [i_3] [0] [i_3]) >> (var_3 - 7957748458939494213)))) != (arr_9 [i_3] [i_3]))))));
    }
    var_28 = var_8;
    #pragma endscop
}
