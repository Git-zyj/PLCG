/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(4433230883192832, 4433230883192832)))) && -2079996650);
    var_17 = ((min(var_10, var_13)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max((max((arr_1 [i_0 - 1]), var_10)), (arr_1 [i_0 - 1])));
                    var_19 = (21741 - var_15);
                    var_20 = (((var_11 ? -1 : 21741)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (max(var_21, ((((219 ? -1 : 44))))));
                        var_22 = (var_11 > var_15);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] = (min((arr_10 [6] [i_1] [i_1] [i_1]), var_4));
                        var_23 = (min(1, var_1));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_8 ? (arr_3 [i_0] [4] [i_0 - 1]) : ((((arr_6 [6] [6] [12]) ? 0 : var_2)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [16] [i_0] [i_0] = 224;
                        var_24 = -27271;
                        arr_20 [i_0] [1] [i_2] [i_5] = (-0 + -var_3);
                        var_25 = (max(var_25, 13440505311478406285));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                arr_28 [1] [1] = (2850427150 <= 378094476371147741);
                var_26 = ((!(0 % -62747097)));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_37 [i_9] [i_7 + 2] [i_8] = min(((((var_6 < var_12) >= ((max((arr_12 [i_6] [i_7] [1] [i_10]), -44)))))), (((max(62747097, var_3)) / ((0 ? (arr_21 [i_8]) : 56)))));
                                var_27 &= ((~((((!(arr_4 [i_7] [6] [10]))) ? (min(33733, 0)) : var_14))));
                                var_28 = (min(var_28, var_15));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_45 [i_6] [i_12] [i_12] [0] = 4148;
                            var_29 = ((8656893489772506205 || var_3) ? -1188280579 : ((var_8 ? (arr_6 [i_12 - 1] [i_7 + 1] [i_6 + 2]) : var_8)));
                            arr_46 [i_12] [i_7] [i_11] [i_11] = (min((max((max(var_13, (arr_34 [i_12] [i_12] [i_12]))), var_7)), ((((max(-9052886002631786789, 2805526151)) == (((-(arr_3 [i_7] [12] [i_12])))))))));
                        }
                    }
                }
                var_30 = (arr_6 [i_6] [i_6] [2]);
            }
        }
    }
    #pragma endscop
}
