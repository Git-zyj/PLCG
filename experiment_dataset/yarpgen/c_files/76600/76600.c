/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 12194981836282859779;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, 6251762237426691837));
        arr_2 [i_0] = (var_4 >= 12194981836282859778);
        var_12 = ((56 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_13 = (max(var_13, ((~(arr_4 [i_1 + 2])))));
        var_14 = (12194981836282859779 | 2205613516);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_2] = ((1828298865 ? 193 : (arr_6 [i_1 - 2])));
            var_15 = ((-var_7 ? (arr_5 [i_1] [i_2]) : (arr_4 [i_1 + 1])));
            arr_9 [i_2] = var_1;
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_3] [i_3] [i_4] = (-2002701195 < 230);

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_16 &= (var_3 * 12194981836282859778);
                    var_17 ^= (~1493099307);
                    arr_18 [i_5] [12] [17] [1] [i_1 + 2] = ((-(arr_14 [i_1] [7] [i_4] [i_4 + 2])));
                    var_18 += (238 & 6251762237426691837);
                }
                arr_19 [i_4] = ((!(arr_4 [i_1])));
                arr_20 [14] [i_3] [i_3] = ((3981740492 ? 0 : (!3981740492)));
            }
            arr_21 [i_3] = var_3;
            var_19 += 1828298865;
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_26 [i_6] [12] [i_1] = (~1);
            arr_27 [i_1] = var_4;
            var_20 &= ((!(arr_22 [i_1 + 3] [i_1 + 3] [i_6 - 2])));
        }
        var_21 += (~-117);
    }
    #pragma endscop
}
