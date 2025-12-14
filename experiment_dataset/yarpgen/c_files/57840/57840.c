/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 += min(var_1, (max(var_16, (((65532 ? var_0 : 1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_22 = (((var_15 || (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((~0) ? (max(-793644285464804238, 3058311792)) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = 46;
        arr_6 [11] = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [3] = ((1 ? 1 : 1));
        var_24 = (var_8 <= ((max(1, 0))));
        arr_10 [i_2] = (((arr_8 [1] [i_2]) != (((((max(var_13, var_7))) < ((1 ? 134217664 : var_14)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_16 [i_2] [i_3] [0] = (max((!255), ((var_10 ? (1 + var_13) : -8343834521963846064))));

                /* vectorizable */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_2] [i_3] [0] [i_5] = (arr_13 [i_5 + 1]);
                    var_25 = ((arr_11 [i_2] [i_3]) ? -1 : -134217664);
                    arr_20 [i_2] [i_2] [i_3] [i_4] [i_4] = (((arr_14 [i_5 + 2] [i_5 - 2]) ? (arr_14 [i_5 + 2] [i_5 + 1]) : var_17));
                    arr_21 [i_2] [0] [i_2] [i_2] = (arr_7 [i_5] [i_5 + 2]);
                    arr_22 [i_5 - 3] [i_3] [i_4] [i_5 - 3] = ((arr_7 [i_5 - 1] [i_3]) < (arr_13 [i_5 - 3]));
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 = ((+(((arr_7 [i_2] [i_6]) ? (arr_7 [i_2] [i_2]) : var_4))));
                var_27 = var_5;
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                var_28 = (!((min((arr_24 [i_2]), var_15))));
                arr_29 [i_7] = (((arr_26 [i_7 - 1] [i_3] [4]) * ((216 ? ((205 ? 41 : 1)) : (48 % 214)))));
            }
            var_29 = max(18446744073575333955, 255);
            var_30 = (max(43, 131));
        }
    }

    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_32 [i_8] = (arr_1 [i_8]);
        arr_33 [14] = 217;
        arr_34 [1] [i_8] = ((4118113146413747841 ? 65535 : 0));
        arr_35 [i_8] = ((-((var_17 ? 8546038592797907157 : 1))));
    }
    #pragma endscop
}
