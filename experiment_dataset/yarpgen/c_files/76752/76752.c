/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (((!var_0) ? 28665 : ((~(arr_0 [i_0])))));
                var_11 = (arr_2 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_12 += (!28671);
            var_13 = var_4;
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_14 = (min(var_14, (!6)));
            var_15 = (arr_6 [i_2] [i_2] [i_2]);

            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                var_16 = ((~((max(36875, 28657)))));
                arr_13 [i_4] [i_4] = (max(1, ((28665 ? 11 : (arr_0 [i_5 + 3])))));
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_17 = (min(var_17, (arr_14 [i_2] [i_2] [i_2])));
                var_18 = 6;
            }
            for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_19 = (max((((arr_7 [i_7 - 1] [i_7 + 2]) >> (((arr_3 [i_7 - 1] [i_7 - 3] [i_4 - 3]) - 1906235687)))), (arr_3 [i_7 - 2] [i_7 - 1] [i_4 - 1])));
                var_20 = (((((var_9 ? var_1 : (arr_4 [i_2])))) >> ((((70368744177600 ? 1118790252998598013 : (max(848202119621010047, 1118790252998598013)))) - 1118790252998597994))));
            }
            for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_21 = (((((((arr_3 [i_4] [i_4] [i_8 - 2]) ? -3870327121710866048 : (arr_3 [i_8 - 1] [i_4 + 2] [i_2]))))) ? ((-463995600329263873 ? (max(0, 1)) : var_7)) : 28684));
                var_22 = 36883;
            }
            arr_21 [i_4] [i_4 - 1] [i_4] = 3033692610529444531;
            var_23 = (min(var_23, (arr_17 [9] [i_4] [i_4] [i_4 - 1])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_25 [i_9] = 36839;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_24 = (min(var_24, ((((arr_7 [13] [5]) != (((((296941742 ? 0 : 28704))) ? var_1 : (((arr_4 [i_11]) ? var_5 : 14411)))))))));
                        var_25 = 24818;
                        var_26 += (max(-113, ((241 ? var_9 : 37))));

                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_12] [i_2] = -463995600329263889;
                            arr_33 [i_12] [1] = ((((!((((arr_22 [i_2] [i_2]) ? -1 : var_9))))) ? (((~var_4) ? ((1 ? var_3 : (-127 - 1))) : ((max(-101, -1168296499871111346))))) : ((((((var_0 ? 19910 : var_2))) ? var_0 : 1)))));
                            var_27 -= ((-(~23601)));
                        }
                    }
                }
            }
            var_28 = var_0;
            var_29 = (((~-1168296499871111362) ? 1866746598171165995 : 1));
            var_30 = max((((arr_7 [i_2] [i_2]) >> (1 < 8))), ((((arr_17 [i_2] [i_9] [i_9] [i_9]) <= var_0))));
        }
        var_31 = (105 < 14978318496313348912);
        var_32 = var_6;
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_33 = ((((max(69, (arr_34 [i_13])))) || 64));
        var_34 += ((!(2065462838 && 28678)));
    }
    var_35 *= max(var_9, (max(var_1, (max(var_0, var_3)))));
    var_36 = (((!((max(-1, var_5))))) ? var_3 : var_2);
    #pragma endscop
}
