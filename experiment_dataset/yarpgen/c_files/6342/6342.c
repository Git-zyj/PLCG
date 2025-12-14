/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min(var_13, (((var_4 && (((var_5 ? var_13 : var_17))))))));
    var_19 = (min(var_19, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_20 = ((+(((arr_0 [i_0]) * var_16))));
                            var_21 = ((((((arr_6 [i_0] [i_0] [i_3] [i_0]) ? var_4 : 1567962115))) ? -11391760326982920502 : (arr_1 [i_3 + 1])));
                            var_22 = (min(var_22, var_6));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_5] [i_0] [i_2] = 4294967295;
                            var_23 = var_1;
                        }
                        var_24 += 11391760326982920502;
                        var_25 = ((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) < 7054983746726631114)));
                        var_26 = ((var_11 ? (arr_3 [i_2] [i_3 + 1]) : var_1));
                    }
                }
            }
            var_27 = (arr_1 [i_1]);
        }

        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_28 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_16 [i_0] [i_0] [i_0] = var_1;
            arr_17 [1] [i_6] [i_0] = (((arr_3 [i_0] [i_6]) ? (arr_15 [i_0]) : (arr_15 [i_6])));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_29 = (arr_19 [1] [i_7] [i_7]);
            var_30 = (arr_3 [i_0] [i_7]);
        }
        var_31 = var_1;
        var_32 = (~((4464059410861420635 ? var_12 : 4464059410861420635)));
        var_33 = var_11;
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_22 [i_8 + 1] = (((((arr_11 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [0]) ? var_13 : var_3)) == (arr_18 [i_8 - 1] [i_8 - 1] [i_8 + 1])));
        var_34 = var_1;
        arr_23 [i_8] = (arr_1 [i_8 - 1]);
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_35 = var_14;
                    var_36 = (max(var_36, ((max(1, (arr_19 [i_9 + 1] [10] [i_9]))))));
                }
            }
        }

        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            var_37 = (((arr_20 [i_12]) ? (max(-7442739404103330845, (arr_31 [i_9 + 2] [i_9] [i_12 + 1]))) : ((((arr_31 [i_9 - 1] [i_9] [i_12 + 1]) ? -1675842786 : ((-(arr_13 [i_9] [1] [i_12 + 4]))))))));
            arr_33 [i_9] = (max((((((8382223360660187866 ? (arr_4 [i_9 - 1] [i_9 + 2] [i_12]) : (arr_14 [i_9])))) ? 6784 : ((max((arr_15 [i_12 + 1]), var_11))))), ((-119 ? 2147483647 : -1436828088))));
            arr_34 [i_9] [i_9] = (arr_9 [i_9] [i_9] [8] [i_12 + 1] [12]);
        }
        var_38 = (min(var_38, (arr_20 [9])));
        var_39 = (max(0, ((max(-31129, -106)))));
        var_40 = (max(58752, ((min(1, (arr_3 [i_9 + 1] [i_9 + 1]))))));
    }
    var_41 = var_11;
    #pragma endscop
}
