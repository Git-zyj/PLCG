/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 ^= 1;
                    var_16 = 1;
                    arr_9 [i_0] [i_0] [i_1] = ((+(min((arr_3 [i_0] [i_2 + 1]), var_2))));
                }
            }
        }
    }
    var_17 = ((((var_0 ? ((var_4 ? var_2 : var_7)) : ((min(var_5, var_0))))) > (max(((max(-7480613733801880340, 1))), var_6))));

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [21] = var_6;
        var_18 &= (max(((1 ? 1 : 10813)), ((((1 > 44391) > ((1054923177 ? 1 : var_5)))))));
        var_19 += (((((((((arr_12 [i_3] [8]) ? 50 : 5949570902031382731))) ? -1290125038 : (var_13 && var_10)))) && (((arr_13 [i_3] [i_3]) || -14))));
        var_20 = (max(var_20, ((((!1) < (arr_11 [i_3]))))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_21 -= (!(((min(var_12, var_11)))));
        var_22 -= ((1 ? (+-1) : var_13));
        arr_19 [i_4] = (1 > 54722);
        arr_20 [12] &= (~var_12);
    }
    var_23 = (min((1 < 1), var_8));
    var_24 = ((var_0 ? 5275263095129727507 : 1));
    #pragma endscop
}
