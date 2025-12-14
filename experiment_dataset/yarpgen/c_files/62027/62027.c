/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (((((arr_1 [i_0] [i_0]) & (arr_1 [1] [i_0]))) >> (-6313245333686521905 + 53)));
        var_22 |= ((~((~(arr_1 [12] [8])))));
        var_23 &= (arr_1 [i_0] [2]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 = (max(var_24, ((((arr_2 [i_1] [i_1]) + (((-(arr_3 [i_1] [i_1])))))))));
        arr_4 [i_1] [i_1] = 1;
    }
    var_25 = var_7;
    var_26 = 9498665082456990399;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_27 = (((-(((arr_12 [i_2] [i_2] [i_3]) * 8948078991252561216)))) >= ((((arr_5 [i_2]) + (arr_5 [i_2])))));
                arr_13 [i_2] [i_2] = 2620183664;
                var_28 += 3996587982;
            }
        }
    }
    #pragma endscop
}
