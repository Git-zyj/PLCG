/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(((((((873564134 ? 873564163 : var_12))) || 4294967280))), (max(5860700, ((max(var_5, 1)))))));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_15 = (min(var_15, (((!(!75))))));
                    var_16 = (min(var_16, var_11));
                    var_17 = (~175);
                    arr_7 [i_0 + 1] [i_0] = (i_0 % 2 == zero) ? ((min(((~((var_5 << (((arr_4 [i_0] [i_1]) - 10658)))))), 1))) : ((min(((~((var_5 << (((((arr_4 [i_0] [i_1]) - 10658)) - 10825)))))), 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = max(96, 1);
                                arr_14 [5] [i_0] [1] [i_3] [14] = (((14120 + var_0) ? var_12 : (max(-38, ((160 ? var_9 : (arr_12 [i_4] [i_0] [i_0] [2])))))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    var_18 *= (((arr_0 [i_0 + 1]) ? (((arr_1 [6]) ^ 873564177)) : ((var_11 ? (((arr_15 [i_5] [10]) << (((arr_2 [i_0] [i_1] [i_5 - 1]) - 7492134746261369114)))) : (((arr_9 [i_0] [i_0] [i_1] [i_5] [i_5]) ? -6517 : (arr_15 [i_0 + 1] [18])))))));
                    var_19 = ((-(arr_8 [i_0 + 1] [i_5 - 3])));
                    arr_17 [0] &= (min(((((((arr_10 [i_0] [i_0 + 1] [12] [i_0 + 1] [2]) ? 255 : 180))) ? 144 : 37)), -var_12));
                }
                var_20 = (min(var_20, (((!(arr_9 [8] [i_0 + 1] [i_0 + 1] [12] [3]))))));
            }
        }
    }

    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            arr_24 [i_6 - 2] = max(((((-26148 + var_10) - (arr_11 [i_7] [i_7] [i_7 - 1] [i_7] [18])))), var_11);
            arr_25 [i_6] [i_7 + 1] [i_7] = (max(219, (max(((max((arr_16 [i_7] [2] [i_7]), var_3))), (max((arr_2 [i_6] [i_6] [4]), var_10))))));
            arr_26 [i_7] &= -var_4;
        }
        arr_27 [i_6] = ((+((((arr_11 [i_6] [6] [i_6] [i_6 - 3] [i_6 - 1]) >= var_1)))));
        arr_28 [i_6 + 2] [i_6] = (((~(arr_8 [i_6 + 2] [i_6]))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_21 = (max(var_21, (arr_29 [i_8])));
        arr_31 [i_8] = 3254887605;
        arr_32 [i_8] = (min(137, -3791188196));
        arr_33 [i_8] = var_13;
    }
    for (int i_9 = 4; i_9 < 18;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = var_0;
        var_22 = ((var_3 ? (((!((!(arr_37 [i_9])))))) : 1));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_49 [i_9] [4] [i_10] [7] [i_12] [9] = (min((min((((arr_39 [16] [16] [16]) ^ var_3)), (((!(arr_43 [i_9] [i_10] [i_9] [i_11] [i_9] [i_13])))))), ((max((arr_42 [i_9] [i_9]), var_4)))));
                                var_23 ^= (max(((((arr_42 [i_9 + 2] [i_9 + 2]) || ((min(1, 17)))))), var_12));
                                var_24 = (min(var_24, (((~((~(min(5860700, 0)))))))));
                                arr_50 [i_9] [i_10 - 1] [i_11] [i_10 - 1] [20] [i_13 - 1] [17] = ((((min(((max(var_7, var_5))), (arr_36 [i_13] [i_11 + 4])))) / ((-((max(180, 17)))))));
                            }
                        }
                    }
                    var_25 -= (max(150, var_6));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_26 -= var_2;
        var_27 = ((!(arr_36 [i_14] [i_14])));
        arr_54 [9] [i_14] = ((((min((arr_12 [i_14] [i_14] [i_14] [16]), var_6))) ? -21084 : (((54 | var_12) ? ((min(var_2, var_10))) : (min(873564139, (-127 - 1)))))));
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 9;i_16 += 1)
        {
            {
                arr_61 [i_15] = ((!(arr_45 [i_15] [i_15] [i_15 + 1] [i_15] [1] [10])));
                var_28 -= ((249876487 ? -18279 : (max(-6094972582984436786, ((min(var_11, 1668031618)))))));
            }
        }
    }
    var_29 = (min(var_29, (((((((max(4294967268, var_3)) <= var_10))) + var_9)))));
    #pragma endscop
}
