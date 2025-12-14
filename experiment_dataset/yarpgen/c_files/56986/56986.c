/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = var_7;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 1]);
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
        var_15 = ((((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? (arr_0 [i_0 + 1]) : (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (~var_7);
        var_16 = (((((((max((arr_1 [i_1]), var_5))) % ((1 ? 1 : (arr_1 [i_1])))))) * ((((max(var_10, var_9))) ^ (arr_0 [i_1])))));
        arr_7 [8] [i_1] = (var_1 <= -var_6);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_3] = var_6;
                        var_17 = (arr_15 [i_2] [17] [i_4]);
                    }
                }
            }
        }
        var_18 *= (max((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) * var_4)), var_4));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = ((var_9 || ((((arr_1 [i_6]) ? (((((arr_15 [i_6] [6] [i_6]) > (arr_9 [14] [14]))))) : (((arr_0 [i_6]) - 5331295443120462681)))))));
        var_19 = (arr_12 [i_6] [i_6]);
    }
    var_20 = ((var_4 + ((max((((-127 - 1) ? var_11 : var_9)), var_7)))));
    #pragma endscop
}
