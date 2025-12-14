/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (((((arr_2 [i_0]) ^ -9301)) ^ ((min((arr_2 [i_0]), (arr_2 [i_1]))))));
                arr_6 [i_0] [i_1] [i_1] = 12;
                arr_7 [i_0] [i_1] [i_1] = (min(((-23 ? 4294967295 : 4294967295)), -11));
                var_12 = (min((min(-122, 4294967295)), ((((min(50, 4294967283)) <= (((0 ? 168 : var_5))))))));
                var_13 = (max(((((max(1, (arr_0 [i_0] [i_1]))) | (((-41 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [12]))))))), (min(-5194310427165653203, 65535))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_14 = (((arr_9 [i_2] [i_3]) > (arr_8 [i_2])));
                                arr_20 [i_2] [0] [i_3] [i_4] [i_4] [i_5] [i_6] = ((((min(((1 ? -1 : 3318665602)), (57339 == 1)))) ? (min((min(1, 7468592830074694481)), 4294967295)) : ((((1345582134137948122 != (((-(arr_17 [i_6] [i_2] [i_5] [i_2] [19] [i_2]))))))))));
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_2] = (min(410444643, (((((1 ? -410444632 : (arr_10 [i_4] [i_5] [i_6]))) > (arr_10 [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
                var_15 = ((min(var_4, (-410444632 > 9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 20;i_8 += 1)
        {
            {
                var_16 = ((min(-1562863126, -410444657)));
                var_17 = (((-(((arr_9 [i_7] [i_8]) ? 0 : (arr_25 [i_7] [i_7]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_37 [i_9] [i_10] [i_12] [i_12] = 17523794720132083513;
                            arr_38 [i_12] = 922949353577468102;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_18 = ((-(min((~var_4), 5922707021623167985))));
                            arr_43 [i_9] [i_10] [i_13] [i_14] [i_9] [i_9] = (arr_12 [i_9] [i_10] [i_13]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        {
                            arr_56 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_17] [i_18] = ((min(2286231009, 2286230988)) >= (60 && 57192));
                            arr_57 [12] [12] [5] [i_15] = ((17523794720132083508 ? 410444643 : 65535));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 11;i_20 += 1)
                    {
                        {
                            arr_63 [i_19] [i_19] [i_16] [i_19] = 0;
                            arr_64 [i_19] [8] [8] [i_19] [i_20] = -28948;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
