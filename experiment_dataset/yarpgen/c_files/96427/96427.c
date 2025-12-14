/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(1832725048, var_3) == ((1 ? 2548148312783836477 : 2548148312783836477)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                var_13 = (((var_11 ? 170 : 601612866)));
                arr_8 [i_0] [i_1 - 2] [i_0] = 118;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_14 = var_6;
                    arr_14 [i_0] [i_0] [i_0] [i_4] [i_4] = (arr_5 [8]);
                    arr_15 [i_0] = (~1675038428);
                }
                var_15 -= (arr_7 [i_1] [i_1] [i_1]);
                arr_16 [i_0] [i_3] = min(((var_0 ? (min(var_11, 617024196)) : var_1)), 170);
                arr_17 [i_0] [i_1] [i_0] = (arr_6 [i_0]);
            }
            var_16 = (min(165, -21932));
            var_17 = (arr_4 [i_0] [6]);
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_18 = 6253;
                arr_22 [i_0] [i_5 + 1] [i_6] = (var_7 ? (arr_21 [i_0]) : var_5);
                arr_23 [i_0] [i_0] = (((!-6254) ? ((((arr_3 [i_0]) || (arr_7 [i_0] [i_5 + 1] [i_5])))) : (arr_10 [i_0] [i_0] [i_5 + 1] [i_6])));
            }
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_28 [i_0] [i_5 + 1] [i_9] [i_8])));
                            arr_33 [i_0] [i_0] [i_7] [i_0] = ((!(arr_19 [i_0] [i_0])));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_37 [i_0] = (((((arr_18 [i_0]) & 6251)) ^ (min((arr_18 [i_0]), (arr_21 [i_0])))));
            var_20 = var_2;
            var_21 = (arr_30 [i_0] [i_10] [16]);
            arr_38 [i_0] = var_8;
            var_22 = var_10;
        }
        var_23 = min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((((var_4 ? (arr_7 [i_0] [i_0] [i_0]) : (-127 - 1))) < (!2548148312783836497)))));
        var_24 = (min(var_24, -var_3));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_25 = (max(var_25, (~819087271)));
        var_26 = (((arr_18 [4]) && (arr_12 [i_11] [1] [i_11] [i_11])));
        var_27 = (min(((min(11146676224315377595, (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), var_10));
        var_28 = min(82965859, var_2);
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_29 = -8573493675887960677;
        var_30 = (min((min(var_7, -17763)), var_4));
        var_31 = arr_42 [19] [12];
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_32 = (min((((-1077383963 ? (61 < 14260914684465324886) : 13274))), 1264114250));
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_33 = (min(var_33, ((min((min((arr_51 [i_14] [i_14] [i_15] [i_14]), ((min(var_11, (arr_46 [i_15] [i_14])))))), (min(2000084735, -1511693257)))))));
                    arr_52 [i_13] = 4185829389244226719;
                }
            }
        }
    }
    #pragma endscop
}
