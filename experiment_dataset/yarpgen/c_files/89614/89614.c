/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_9 > var_9) ? ((var_6 ? 433550939 : var_7)) : (((min(1, 1))))))) ? var_2 : ((((1 / 1960620255) ? ((-19317 ? 1 : var_9)) : var_9)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = -1573436238;
            var_13 ^= var_4;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = var_8;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 ^= var_3;
                        arr_16 [i_0] [i_4] [1] [i_0] [i_4] [i_0] = (!2172472282);

                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_15 ^= ((1 ? var_10 : 43187));
                            var_16 = (((arr_12 [i_3 + 3] [i_2] [i_5 + 1]) ? 1 : (arr_0 [i_3 - 2])));
                        }

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_17 = (var_6 > var_3);
                            arr_22 [i_0] [i_2] = ((var_0 ? (arr_11 [i_3] [i_3] [i_3 + 2]) : var_9));
                            var_18 = (((!var_1) ? (((arr_14 [i_0] [i_4] [1] [i_2] [i_0]) ? var_10 : var_9)) : (((var_6 ? 1 : (arr_13 [i_0] [i_2] [i_4] [1]))))));
                            var_19 = (!var_0);
                        }
                        var_20 ^= var_6;
                    }
                }
            }
            var_21 ^= ((((~(arr_4 [i_0] [i_0] [i_0]))) + (arr_7 [i_0] [i_2] [1])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_26 [i_0] = (((((-8 ? 4140699391 : 1))) ? var_8 : (1806439140 ^ 1073610752)));
            var_22 = (arr_24 [i_7] [i_0 + 2] [i_0]);
            var_23 ^= ((!(arr_24 [i_0] [i_0 - 1] [9])));
            var_24 ^= (((((-2696200241119110938 ? 4135432455 : 18446744073709551603))) ? 33836 : (arr_19 [i_0 - 1] [i_0 + 4])));
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_8] = 1;
            var_25 ^= ((var_6 ? ((1 ? (arr_28 [1] [14]) : var_5)) : var_7));
            arr_32 [i_0] = (1 == 52);
            arr_33 [i_0] [i_8] [i_0] = 7272834307117700510;
            arr_34 [i_0] = (arr_4 [i_0] [i_8] [i_8]);
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        arr_43 [i_0] [i_9] [i_0] [i_11] = ((var_1 >= (arr_4 [i_0 - 1] [i_0] [21])));

                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            arr_46 [1] [i_0] [i_10] [i_11] [i_10] [4] = ((!(arr_35 [i_9] [i_0] [i_0 + 3])));
                            var_26 = (((arr_9 [i_12 - 1] [i_0 - 1]) ? ((var_1 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [1]) : -76)) : var_9));
                        }
                    }
                }
            }
            var_27 = ((var_3 || (arr_24 [i_0] [i_0] [i_0 + 4])));
            arr_47 [i_0] = ((0 ? (arr_0 [i_0 - 2]) : (arr_40 [i_0] [i_9 - 1])));
            arr_48 [i_0] = (var_2 | 5943395579990712098);
        }
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_51 [i_0] = ((((max(24431, (arr_23 [i_13])))) ? ((1 ? (~1) : 8589918208)) : ((((!(~var_7)))))));
            var_28 = (min(var_28, (((30622 ? 1 : -1682880786)))));
            var_29 ^= -1;
            var_30 = ((((var_9 ? (var_7 != var_5) : (!var_2))) ^ (((!(arr_29 [i_0 + 4] [i_0 + 1] [i_0]))))));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_61 [i_0] = ((((!(arr_35 [i_0 + 2] [i_14] [20]))) && (!7987734136035984537)));
                        arr_62 [i_0] [i_0] [0] [i_0] = (((!var_5) || ((min(0, -58)))));
                    }
                }
            }
            arr_63 [i_0] [i_0] [8] = (min(((1 ? 1 : 32767)), ((var_3 ? (arr_42 [i_0] [1] [i_0 + 4]) : 254))));
        }
        var_31 ^= 1;
        arr_64 [i_0] = (((((-(arr_37 [i_0 - 2] [i_0 + 3])))) ? (((arr_5 [i_0 + 4]) & -12538)) : ((min(1, var_8)))));
        arr_65 [i_0] = (var_10 >= var_7);
    }
    var_32 ^= -3952489373;
    #pragma endscop
}
