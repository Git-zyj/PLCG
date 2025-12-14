/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_6, (((var_18 && (var_2 | var_14)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 -= (min(((((var_3 ? var_18 : (arr_0 [4]))) / (arr_1 [i_0]))), (((arr_1 [i_0]) >> (6572742165578081743 - 6572742165578081709)))));
        var_22 = (max(var_22, (((1364 - (((arr_1 [i_0]) + (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((~((((max(var_6, var_6))) ? (arr_0 [i_0]) : var_14))));
        var_23 = ((min(((56108 ? 25267 : (arr_1 [i_0]))), -7654727887737478074)) + (arr_1 [i_0]));
        arr_3 [i_0] [i_0] |= (((arr_0 [i_0]) + ((0 ? ((65535 ? 6849281231831071976 : 7)) : (4431574965871944325 | 2363952584321568873)))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_24 = max(1363, ((~(max((arr_0 [i_1 - 1]), 65534)))));
        arr_6 [1] = (min((~-18370), ((((max((arr_0 [i_1]), (arr_5 [i_1] [i_1])))) ? var_1 : (65326 < var_10)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_25 = 4431574965871944325;
                        var_26 = (((arr_12 [i_1 + 1]) / 46960));
                        var_27 = (var_13 ? -var_17 : 7);
                        var_28 += (arr_11 [i_4] [i_4] [i_3] [i_1 + 2] [6]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_29 = ((((~(arr_9 [i_1] [7] [7] [i_1])))) ? var_13 : var_5);
                        var_30 = (-2363952584321568874 + 26566);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_31 = (min(var_31, (((((65528 <= (arr_21 [i_2] [i_6] [i_6] [i_3 + 1] [i_3 - 1] [i_2] [i_1 - 2]))) ? var_13 : ((max((arr_4 [i_3]), (((arr_14 [i_1] [i_2] [i_3] [i_6] [i_2]) ? (arr_5 [i_1] [i_1]) : 65521))))))))));
                                arr_23 [i_3] [i_1] [i_2] [i_3] [i_3 - 2] [i_6] [i_7] = ((-1850594574926200649 + (arr_0 [i_1])));
                                var_32 = ((var_12 || (arr_12 [i_2])));
                                arr_24 [i_7] [i_7] [i_3] [i_3] [i_3] [12] [i_1] = arr_20 [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_3] [i_6];
                            }
                        }
                    }
                    var_33 = arr_1 [i_1 - 1];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_34 = min(((max((arr_17 [i_1] [i_2]), var_19))), 5);
                                var_35 = (((max((9223372036854775807 < var_6), -140271189379810489)) / var_3));
                            }
                        }
                    }
                }
            }
        }
        var_36 += ((!((max(65527, (arr_11 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1]))))));
    }
    for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_37 = max((~7), (((arr_27 [i_10] [13] [i_10] [i_10 + 2]) ? (max(2363952584321568879, 48954)) : (max(var_11, -7654727887737478063)))));
        arr_33 [i_10] = var_6;
        var_38 = ((!(arr_10 [i_10] [i_10] [i_10] [i_10])));
    }
    var_39 = (((~var_16) < var_12));
    var_40 &= -51160;
    var_41 = ((var_12 ? ((65512 ? ((var_19 ? var_17 : var_6)) : var_4)) : 28017));
    #pragma endscop
}
