/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_7 << (((((min(-744408128254087945, var_2)))) - 239))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_14 = ((max(3876, 1046069486314650595)) + (arr_1 [i_0] [i_0]));
        arr_4 [i_0] = (-3875 < (~0));
    }
    var_15 = ((var_7 >= (min((65527 * 3875), 138))));
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] [i_1] = (arr_8 [i_1] [i_2]);
                var_17 = (min(var_10, (arr_8 [i_1] [10])));
                var_18 = 4294967295;
            }
        }
    }
    #pragma endscop
}
