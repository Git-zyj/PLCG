/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = 47794;
                                arr_12 [i_0] [i_2] [i_1] [i_4] = (-86 ^ 47795);
                                arr_13 [i_1] [i_1] [i_2 - 3] [i_1] [6] = 97;
                                var_11 = ((!((((~(arr_10 [i_2] [i_1] [i_2] [i_3] [i_4]))) > 909288531))));
                            }
                        }
                    }
                    var_12 |= (24 / 17742);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((max(127, -1954662934)) > (~58793))))));
                                var_14 = (arr_11 [12]);
                                arr_27 [i_0] [i_5] [i_5] [i_7] [i_7] = (max(((((((arr_5 [17] [17]) ^ (arr_21 [i_0] [i_5] [16] [i_0] [i_8])))) ^ (arr_17 [i_8] [i_7] [i_6] [i_5]))), ((((((-(arr_17 [i_0] [i_5] [i_7] [i_8])))) && ((((arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2]) ? 6736 : (arr_17 [i_5] [i_5] [i_6] [i_8])))))))));
                                var_15 = (max(var_15, ((max((((6738 ^ (arr_18 [i_0] [i_5] [i_6] [i_7])))), ((((~17736) >= (~-8641)))))))));
                            }
                        }
                    }
                    var_16 ^= (min(6739, 47794));
                    var_17 = ((106 == (~10456507856749377419)));
                }
            }
        }
        var_18 = (((((~(max((arr_21 [i_0 + 1] [i_0 - 2] [i_0] [10] [1]), (arr_24 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [14])))))) ? (arr_6 [18] [18]) : 4026531840));
        arr_28 [i_0] = (max(((min((arr_9 [i_0] [i_0] [i_0 + 1] [i_0]), ((732134546 ? (arr_8 [18] [i_0] [i_0] [4]) : -8641))))), (arr_16 [i_0] [i_0 - 1])));
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] [12] = (((max(((!(arr_16 [i_9] [i_9 - 1]))), ((!(arr_22 [i_9] [i_9]))))) || (min((!2541269768), (!-21723)))));
        var_19 = (min((arr_21 [19] [19] [i_9 - 2] [i_9 - 1] [i_9]), (min(((max(-63, 17764))), -3221225472))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_20 = ((+((((-117 ^ 3104173968) != (!3216544449))))));
                        arr_38 [16] [6] [i_12] |= (arr_34 [0]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                arr_47 [i_13] = (arr_40 [i_15]);
                var_21 -= (+-732134546);
            }
            var_22 ^= -3935453055;
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_23 ^= ((-8641 ? (~-20466) : (~127)));
            var_24 = (((arr_41 [i_13]) > 2120448067));
            var_25 = (max(var_25, -59));
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                {
                    arr_56 [i_18] [i_17] [i_18] = ((11634 ? (arr_41 [i_13]) : 163));
                    arr_57 [i_18] [i_18] [i_18] = (-732134546 % 1022980906);
                }
            }
        }
    }
    var_26 = -47194;
    var_27 ^= var_8;
    #pragma endscop
}
