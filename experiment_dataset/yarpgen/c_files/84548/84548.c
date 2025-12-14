/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (-((min((arr_3 [i_0]), var_9))));
            var_21 = (max(var_21, var_9));
        }

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [8] = -2147483637;
            var_22 = (min(var_22, var_3));
            arr_8 [i_0] [i_2] = ((max((arr_2 [i_0] [i_0]), (min((arr_6 [i_0] [5] [i_2 + 1]), (arr_0 [8] [i_2]))))));
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = var_16;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_23 += ((-((max((arr_17 [i_4 - 2]), (arr_17 [i_4 + 1]))))));
                    var_24 *= -1354347399;
                    arr_21 [i_5] [i_5] |= (((~(34945 | 127))));
                }
            }
        }
        arr_22 [i_3] = ((+((((arr_14 [5]) && (arr_2 [i_3] [i_3]))))));
        var_25 = ((var_4 ? (max(4294967295, (arr_9 [i_3]))) : (var_7 ^ -127)));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_26 = (((max(var_13, (var_15 != 3729006168)))) ? (arr_17 [8]) : (((((var_5 ? var_11 : var_17))) / (arr_24 [i_6]))));

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {
            var_27 = (max(var_27, 4124613679));
            arr_28 [i_6] = var_11;
            var_28 = (min(var_28, ((((((-(arr_0 [i_7] [i_7 - 2])))) ? var_8 : (((arr_6 [i_7 + 2] [i_7 - 3] [i_7]) + var_16)))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 6;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_29 = (min(var_29, (((var_1 - (min((max((arr_17 [i_6]), (arr_32 [2]))), ((((arr_36 [2] [i_8] [i_9]) ? -543153467 : var_14))))))))));
                    arr_37 [i_6] [i_6] [i_6] [i_6] = (max(var_18, (((var_19 | 5892231952536339467) & var_15))));
                    var_30 += var_1;
                    var_31 = ((-var_9 ? 225461323 : 4124613679));
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        arr_40 [i_10 + 1] [i_10 + 1] = var_4;
        var_32 = min((1783772489609152672 || 15086496772722579405), var_4);
        var_33 = (min(var_33, -var_18));
        arr_41 [i_10 - 1] = (max(((((((-32767 - 1) + 2147483647)) << (((arr_38 [i_10 - 1] [19]) - 2501183972))))), (max(var_2, var_1))));
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = (arr_16 [i_11 + 1]);
        arr_47 [i_11] [i_11] = (arr_20 [i_11] [i_11] [1]);
    }
    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = max(-9504, (arr_20 [i_12 + 1] [i_12 + 1] [11]));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    var_34 = 1883788139;
                    arr_56 [i_12] = ((((min(var_15, (arr_10 [i_12 - 1])))) ? (-104 & 2735917720612946256) : (((max(var_18, var_12))))));
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        arr_59 [i_15 + 3] [i_15] = (((-(max((arr_17 [i_15]), var_8)))));
        var_35 = var_11;
        var_36 = (max(var_36, ((((4124613679 * (arr_10 [i_15 - 1])))))));
        arr_60 [5] [i_15] = var_7;
    }
    var_37 = var_8;
    #pragma endscop
}
