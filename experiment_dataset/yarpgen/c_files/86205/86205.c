/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((3620267688033485719 ? ((((!(arr_3 [i_0]))))) : (~1429079137)))) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0])));
        var_16 = ((((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] = (((arr_2 [i_0] [i_0]) <= (0 ^ var_13)));
        var_17 = (min(var_17, 0));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 = (max(((min((arr_6 [i_1 - 1]), (arr_11 [i_1] [i_1] [i_1 - 1] [i_3])))), 4294967294));
                    arr_13 [i_3] = (((((arr_9 [i_1] [i_2]) << (var_14 - 18510))) >> (((!((min(5997991507262096008, var_9))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    var_19 = ((((-14 % -14) + 13)));
                    var_20 = (max(var_20, ((~((max((arr_17 [22] [i_4] [i_5 - 1] [i_5]), var_1)))))));
                    arr_19 [i_1] [i_1] [i_4] [i_1] = ((((255 + (arr_8 [i_5 - 3] [i_4 - 1]))) < (arr_8 [i_5 + 1] [i_4 - 1])));
                    var_21 = ((max(822960243198204254, (arr_9 [i_1] [i_4 - 1]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_22 = var_8;
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_23 = 465797144;
                            arr_33 [i_6 - 2] [i_6 - 2] [i_8] [i_6] [i_10] = (arr_20 [i_6]);
                            var_24 += var_0;
                            var_25 = (arr_23 [i_6 - 2] [i_6]);
                            arr_34 [i_6] [i_6] [i_6] [i_9] [2] = 1695478224224135177;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_26 -= (2091746007 > var_11);
                            var_27 = 1429079131;
                            var_28 = var_9;
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_11 [i_6] [i_6 - 2] [i_7 - 2] [i_12]) >> (((arr_11 [i_6] [i_6 - 2] [i_7 - 3] [i_6 - 2]) - 1881516174))));
                            arr_41 [i_12] [i_6] [i_12] [i_12] = (~45838);
                        }
                        var_29 &= ((178 ? -16852 : 2961602073));
                        var_30 ^= 1200201708;
                        var_31 = (min(var_31, (arr_20 [i_9])));
                    }
                }
            }
        }
        arr_42 [i_6] = 1;
        var_32 = ((arr_16 [i_6 - 2] [i_6 - 1] [i_6 - 1]) << ((((30984 * (arr_32 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2] [i_6]))) - 667056139)));
        var_33 = (arr_39 [i_6] [i_6] [i_6 - 1]);
    }
    for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] = 2136418103;
        var_34 += arr_9 [i_13 - 1] [i_13 - 1];
    }
    #pragma endscop
}
