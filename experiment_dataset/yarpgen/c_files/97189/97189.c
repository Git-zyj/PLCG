/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_2 [i_0]) ? -56058 : (max((arr_1 [i_0]), (arr_2 [i_0])))));
        var_17 = ((((arr_2 [i_0]) ? (!2227886763960615528) : var_11)));
        var_18 = 3098369795;
        arr_3 [i_0] = 1196597493;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] |= max((var_0 && 13637), (min(var_9, (min(var_13, 9344)))));
        arr_8 [i_1] = (min((8335562577793049028 / 12471), (((var_5 ? var_13 : (min(28682, var_2)))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_19 ^= ((~(((arr_14 [i_4 + 3] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 2]) ? (arr_14 [i_4 + 2] [i_4 + 3] [i_4 + 3] [6] [i_4] [5]) : (arr_14 [i_4 + 3] [i_4 + 2] [i_4] [i_4 + 1] [2] [i_4])))));
                        var_20 = (max(var_20, (((((arr_0 [i_2 + 1] [i_4 - 1]) ? (arr_0 [i_2 - 1] [i_4 + 2]) : (arr_0 [i_2 - 1] [i_4 + 1])))))));
                        var_21 = (min(var_21, (((((max(((var_11 ? -39 : 65524)), -22260))) ? 15460618591722754018 : 29621)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_22 = var_5;
        var_23 -= ((-(min((((arr_16 [i_5]) ? 15460618591722754018 : var_8)), (arr_18 [i_5 + 1])))));
        var_24 &= var_8;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_25 = (min(var_25, ((-(arr_17 [i_5 + 2])))));
            var_26 = arr_17 [i_5];
            var_27 = (((((1549198379 % (arr_16 [i_6]))) - (arr_16 [i_6]))));
        }
        arr_21 [8] = (min((max((var_1 + var_2), ((min(-729064553, (arr_18 [i_5])))))), (((((min((arr_17 [i_5]), (arr_17 [0])))) ? (arr_18 [i_5 + 1]) : -116)))));
    }

    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_24 [i_7] = var_5;
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_28 ^= ((((min((min(15460618591722754018, 1196597512)), ((min(var_4, (arr_27 [i_10] [i_10] [4] [6]))))))) ? (max((arr_28 [i_7] [i_7 + 2]), var_6)) : (((-(-127 - 1))))));
                        var_29 += -57972;
                        var_30 = (arr_31 [i_7] [i_7 + 2] [i_7 - 1] [i_8 - 2] [i_10] [22]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_31 = (arr_28 [i_12 - 1] [i_12 + 1]);
                        var_32 = ((max(var_0, 97)));

                        for (int i_14 = 1; i_14 < 19;i_14 += 1)
                        {
                            arr_45 [i_7] [i_11] [i_12 - 1] [i_12] [i_14 - 1] [i_14] = (min(1196597500, 2986125481986797587));
                            arr_46 [i_12] [3] [13] [i_11] [i_12] = (min((((var_2 ? (12471 == var_7) : -86))), (min((~var_7), var_3))));
                            var_33 = (arr_27 [i_7] [8] [i_7] [i_7 + 1]);
                            var_34 = ((var_6 ? ((~(arr_27 [i_7] [i_7] [i_7] [i_7 - 1]))) : (arr_18 [i_7 - 1])));
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_35 &= var_0;
                            var_36 = (~var_4);
                            var_37 = (((81 ? 148 : 231)));
                            var_38 = min(((((!(arr_32 [i_7] [i_13]))) ? ((((arr_26 [13] [i_11] [i_11]) & 9361))) : (max((arr_36 [i_11]), 3098369795)))), var_9);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_54 [i_12] [22] [i_12 - 3] [i_11] [i_12] = (((((-var_13 + (arr_52 [i_7] [0])))) ? 115 : var_7));
                                var_39 += ((min(598129477, ((-75 ? 23240 : 29637)))) / (((~-49) ? var_12 : 63368)));
                            }
                        }
                    }
                    var_40 ^= 2167;

                    for (int i_18 = 1; i_18 < 20;i_18 += 1)
                    {
                        arr_58 [i_12] [i_11] = ((var_11 ? -798430833 : (arr_19 [i_12 + 1])));
                        arr_59 [i_7 - 1] [i_7 - 1] [i_7] [i_12] = (((arr_18 [i_18 + 1]) * (arr_51 [0] [i_11] [i_12] [i_12] [i_18])));
                    }
                    for (int i_19 = 3; i_19 < 20;i_19 += 1)
                    {
                        arr_63 [11] [i_12] [15] = -3707;

                        /* vectorizable */
                        for (int i_20 = 3; i_20 < 22;i_20 += 1)
                        {
                            arr_67 [20] [i_11] [i_11] [i_11] [i_12] [13] [i_11] = (~798430850);
                            var_41 = (arr_64 [i_20] [i_12] [i_12] [i_12] [i_7]);
                            var_42 = (!var_0);
                            var_43 = var_8;
                            var_44 = (max(var_44, (((3 || (((var_5 ? var_13 : var_3))))))));
                        }
                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            var_45 = ((((min(32766, var_1))) < var_11));
                            var_46 = -6151;
                        }
                        var_47 ^= -19371;
                    }
                    var_48 ^= ((~(min((arr_55 [i_7] [i_11] [i_12 - 2] [i_11] [i_11]), var_6))));
                }
            }
        }
    }
    var_49 = (min(20, var_13));
    #pragma endscop
}
