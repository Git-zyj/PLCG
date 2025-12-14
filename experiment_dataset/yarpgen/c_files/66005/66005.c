/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!((max(var_17, var_18)))));
                var_20 = (max(var_20, (arr_2 [20] [20] [20])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_3] [i_4] = (((!(arr_10 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 *= (min(71, 52344));
                                var_22 = (max(var_22, (!37154)));
                                var_23 = ((!(arr_9 [i_4])));
                            }
                        }
                    }
                    var_24 = 1501713637;
                }
            }
        }
        var_25 = (min(var_25, (min((arr_7 [i_2] [i_2]), var_18))));
        var_26 = ((!(((max((arr_2 [i_2] [i_2] [i_2]), (arr_8 [i_2]))) <= (arr_16 [i_2])))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_27 = var_0;
        arr_21 [i_7] [i_7] = (!241298944);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_28 = -98;
                    arr_27 [i_9] [i_8] [i_9] = ((!(arr_20 [i_9])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_29 = ((!((max(-93, var_5)))));
                                var_30 *= ((!(!3450035838)));
                                arr_34 [i_7] [i_9] [i_9] [i_10] [i_7] = ((63915 ? 57758 : 89));
                            }
                        }
                    }
                    var_31 -= var_12;
                    var_32 = ((((min(var_18, (!100)))) >= (((max(25565, 33357))))));
                }
            }
        }

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_33 = ((!(!var_18)));
            arr_39 [i_12] [i_12] = 263968893;
            arr_40 [i_7] [i_12] = (-735399131 * 18);
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_34 &= 735399131;
            var_35 += ((-(arr_24 [i_7] [i_7] [i_13])));
            arr_45 [i_7] [i_13] [i_13] = (arr_38 [14] [i_7] [14]);
        }
    }
    for (int i_14 = 3; i_14 < 9;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 7;i_16 += 1)
            {
                {
                    var_36 = (min(var_36, -89));
                    arr_54 [i_15] [i_16] = ((+(((!((max((arr_44 [i_14] [1] [i_14 - 1]), 1426))))))));
                }
            }
        }
        var_37 = ((((var_19 * (arr_12 [i_14 - 2] [1] [i_14 + 2])))) ? (((-(arr_47 [i_14 + 1])))) : 1385962055);
        var_38 = (max(var_38, ((((-(arr_28 [i_14 - 1] [i_14 - 2])))))));
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                {
                    var_39 = (max(var_39, (((!(arr_2 [10] [10] [10]))))));
                    var_40 = ((((263968893 ? 3356085906 : 4412))));
                    var_41 = (min(var_41, (!60556)));
                }
            }
        }
    }
    #pragma endscop
}
