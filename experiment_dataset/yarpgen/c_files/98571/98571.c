/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((~var_9), var_10)));
    var_14 = (min((~var_4), ((((4294967290 ? var_4 : var_4))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1 + 1] [i_0] = ((arr_3 [i_1 + 2] [i_1 - 2]) / (arr_3 [i_1 + 2] [i_1 - 2]));
            arr_7 [i_0] [11] [i_1] = 97;
        }
        arr_8 [i_0] = (((((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))) | ((4294967274 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] [i_2 + 3] = (max((arr_3 [i_2] [i_2]), (max((arr_9 [i_2 + 3]), (arr_1 [i_2 - 3])))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4 - 1] [i_5] = (!17494095789014330390);
                        arr_21 [i_2 + 2] [5] [i_4] [i_5] = ((1 >> (((arr_14 [i_4] [i_3] [i_3 + 2]) - 1317990779922417214))));
                        arr_22 [i_5] [i_4] = (arr_13 [i_2 + 3]);
                    }
                }
            }
        }
    }
    var_15 = ((~952648284695221221) ? (((min(4294967273, var_11)))) : (min(((min(var_8, 3447910142))), var_5)));
    var_16 = (max((((-34359738367 ? var_4 : (min(var_7, 5))))), var_6));
    #pragma endscop
}
