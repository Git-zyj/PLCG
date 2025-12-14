/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = ((127 ? 118 : 1));
        var_21 = (((-(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 = (max(var_22, ((((min((!var_13), ((~(arr_2 [i_1] [i_1]))))) % (((((min((arr_4 [i_1] [7]), (arr_4 [i_1] [1])))) != 19855))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_23 = (min(var_23, ((min((-19219 - -234075884), (363624888 >= 9775))))));
                    var_24 = (max(var_24, (((((min((arr_3 [i_1] [i_3]), 25817))) ? (((((7 ? 67107840 : var_2)) & -var_0))) : (arr_0 [i_3]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((-(arr_17 [i_1] [i_4] [i_6 - 1] [2])));
                        var_26 = (max(var_26, 6505));
                        var_27 = ((~(((944411522 != (!3350555774))))));

                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] [i_1] = (min((min((2858130329 < -39), (arr_23 [i_1] [i_6 + 1] [i_5] [i_6 - 1] [i_7] [i_4]))), var_7));
                            arr_25 [i_1] [i_6] [5] [i_1] [i_1] = -39719;
                            var_28 = ((((min((min(-20535, 944411522)), (arr_0 [i_6 + 1])))) ? (min((var_3 < var_17), -1)) : (arr_1 [i_6] [i_6])));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_28 [i_1] [i_4] [i_5] [i_6] [i_8] [i_8] [i_6] = (!1847750385);
                            arr_29 [i_8] [i_6] [i_5] [i_6] [i_1] = var_10;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_34 [i_1] [9] [i_6] [i_6] [i_1] = (min(128, (1 && 32767)));
                            var_29 = ((((0 ? 120 : 31)) << (!1)));
                            var_30 = (min(var_30, var_11));
                            arr_35 [i_6] [i_6] [i_5] [0] [i_6] = (arr_13 [i_1]);
                            var_31 = (~var_18);
                        }
                        var_32 = (min((~4611677222334365696), ((((arr_0 [i_1]) ? (~0) : (min(38237, var_16)))))));
                    }
                    for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                    {
                        var_33 = (max(var_33, (19855 + 65519)));
                        var_34 = (1114320003 < var_18);
                    }
                    var_35 = var_16;
                    arr_39 [1] [i_4] [i_5] [i_4] = min(((((((arr_20 [i_1] [1] [i_1] [i_1] [i_1]) > var_13))) >> (var_6 - 1849621750))), 1);
                }
            }
        }
    }
    var_36 = var_15;
    #pragma endscop
}
