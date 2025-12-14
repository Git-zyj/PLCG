/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 &= (arr_1 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] = ((~(arr_4 [i_1] [i_0 + 1] [i_0 + 1])));
            arr_6 [i_1] = var_7;
            var_21 = (arr_2 [i_0] [i_0 + 1]);
            var_22 = (arr_4 [i_0] [i_0 + 1] [i_1 + 3]);
        }
        arr_7 [i_0] = ((831604178 || (27 - var_13)));
        var_23 ^= (1076626855 ^ var_14);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 6;i_3 += 1)
        {
            {
                arr_16 [i_2] = ((((-2142 >= ((12 ? var_5 : 160)))) ? ((13730571304602632017 ? ((max(102, 69))) : (arr_1 [i_3 - 2] [i_2]))) : (((!(arr_1 [i_3] [i_3]))))));
                arr_17 [i_3] = 64;
                arr_18 [i_2] = ((var_17 < ((max((arr_10 [i_2]), 1)))));
                arr_19 [i_2] [i_2] = min((((-1060507611 && (!var_18)))), var_10);
                arr_20 [i_2] [i_2] [i_2] = ((((max(-1076626853, 7206612091307482275))) && (var_5 == 2080374784)));
            }
        }
    }
    var_24 = var_14;
    var_25 = var_12;
    #pragma endscop
}
