/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0 + 1] = 16380;
        arr_3 [i_0 - 2] = -16394;
        var_15 -= ((667216002 >= (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] [i_2] [i_1] = 16398;
            arr_13 [i_2] = 382147538;
            arr_14 [i_2] [i_2] [i_1 + 3] = 26156;
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
            {
                arr_21 [1] [i_4] [4] [i_1] = 558551906910208;
                var_16 = (max(var_16, (arr_18 [20] [i_1 - 3] [0] [10])));
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_17 = (max(var_17, (((1 ? (arr_18 [i_1] [i_1 - 3] [i_1] [8]) : 4611686018427387903)))));

                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    arr_26 [10] [i_6] [i_6] [i_6] [i_6 + 1] [20] = (((arr_8 [i_5] [12] [i_5 + 4]) < (var_3 < 32640)));
                    arr_27 [i_1] [i_5 + 3] [16] = ((+((((arr_22 [i_1 - 1] [i_6 + 1] [i_5] [i_5]) < (arr_8 [i_6 + 1] [i_6 + 1] [i_6]))))));
                }
                arr_28 [19] [10] [i_1] = (32661 != ((768 ? 1 : 32661)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_18 = (((arr_17 [i_8] [i_1] [i_1 - 2] [i_1]) - 16384));
                            arr_33 [i_5 + 2] [4] = ((!(arr_8 [i_1 + 2] [i_5 + 3] [i_3 - 2])));
                            arr_34 [i_8] [6] [20] [i_3] [i_1] = (arr_23 [i_3 - 1] [i_3] [i_3 - 1] [i_5 + 4]);
                            var_19 ^= ((-(arr_19 [i_3 + 1] [i_5])));
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
            {
                arr_37 [2] [i_3] [i_9 + 1] |= (((arr_29 [1] [1] [11] [i_3 - 1] [i_3 - 1] [i_3 + 1]) ? (arr_20 [1]) : (arr_17 [16] [i_1 - 2] [i_1] [i_1 + 2])));
                var_20 = (arr_36 [2] [i_3 - 2] [i_9 + 4]);
                var_21 = (max(var_21, (((arr_23 [i_1 + 3] [i_9] [i_9 - 1] [i_9]) < ((((arr_32 [i_1] [i_3 - 1] [i_3] [3] [i_9]) < 1)))))));
                var_22 = 128849018880;
            }
            var_23 |= (arr_4 [i_3 - 1] [i_1 + 3]);
        }

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_41 [i_1 - 2] = ((1 != (!3751942895321015291)));

            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                arr_45 [i_11] = ((4227858432 >= ((((192 < (arr_25 [i_1] [12] [i_10] [i_11])))))));
                var_24 = ((((-667216008 ? 3987908976 : 5220917397936900217)) >= 193));
                arr_46 [18] [i_11] [i_11] = (arr_44 [i_10] [i_10] [i_10] [i_1 + 1]);
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_25 = (!28);
                var_26 -= (2233785415175766016 != 64512);
                var_27 ^= -8;
                arr_49 [i_1] [i_12] = (189 < 262143);
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_28 = (arr_4 [i_1 + 3] [i_13]);
            var_29 = (((6 != -7250466638733407279) >= (arr_11 [i_1] [2])));
        }
    }
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        arr_55 [8] |= 3794029691590266881;
        var_30 = (arr_39 [2] [i_14 + 2] [1]);
    }
    var_31 = (max(var_31, var_12));
    var_32 = (min(var_32, (((!(((-1 && 16368) || ((min(-32, var_7))))))))));
    #pragma endscop
}
