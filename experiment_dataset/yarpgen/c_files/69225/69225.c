/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_14 = var_3;
                        arr_8 [i_0] [i_1 - 1] [i_2 + 3] [i_0] [i_1 - 1] = -1427017885970869328;
                        arr_9 [i_0] [i_0] = max((((arr_4 [i_0] [i_0] [i_0]) ? 4294967292 : var_11)), ((var_6 ? (~var_2) : 4294967293)));
                        arr_10 [i_0] [i_0] [i_1 - 2] [i_2] [i_3 + 1] [i_3 - 1] = ((+(((18074238414304258124 + var_6) ? var_8 : var_4))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2 + 3] = (((arr_2 [i_0] [i_0] [i_4]) ? ((((((var_3 - var_0) + 2147483647)) >> (((arr_13 [i_0] [i_0] [i_1 - 1] [i_2 + 1]) + 1437698139))))) : (min(((var_11 ? (arr_6 [i_0]) : 5)), ((min(1, 1)))))));
                        var_15 *= (max(var_9, ((var_4 ? (min(var_0, var_9)) : (min(var_2, (arr_6 [i_2])))))));
                        arr_15 [i_0] [i_0] [i_0] = (((((((min(935868777726026984, var_11))) ? 1843256415 : var_4))) >= ((((min(var_5, var_1))) ? ((var_0 ? var_5 : 1479547211853570300)) : 8756815655047325280))));
                    }
                    var_16 = (max(var_16, ((((min(((var_9 ? var_4 : -15484)), (arr_0 [i_0])))) ? ((min((arr_13 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3]), (var_4 || 1024)))) : 4785455733182349829))));
                }
                var_17 = (-var_6 ? ((-(arr_11 [i_1] [i_1 - 2] [i_1] [i_1 - 2]))) : ((max((arr_13 [i_0] [i_1 - 2] [i_1 - 2] [i_0]), ((max((arr_3 [i_0] [i_0]), 48)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                                var_18 = ((((((~var_0) ? (arr_16 [i_1 + 1]) : var_5))) || ((min((min(var_9, (arr_0 [i_7]))), 218)))));
                                var_19 = 7;
                            }
                            for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                            {
                                var_20 *= min(((((arr_12 [i_8 - 2] [i_8 - 2] [i_1] [i_6]) ? var_0 : (arr_12 [i_8 - 2] [i_8 - 2] [i_1] [i_6 - 1])))), (min((arr_22 [i_0] [i_1] [i_5] [i_6 - 1] [15] [i_1] [17]), (arr_11 [i_6] [i_6] [i_6 - 1] [1]))));
                                arr_29 [i_0] [i_1 - 2] [i_0] [i_6] [i_8] = (min(((min((arr_23 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_17 [i_1 + 1] [i_1 + 1] [i_5] [19])))), (min((arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 1] [1] [i_6 - 1] [i_6 - 1] [i_6 - 1]), var_1))));
                                var_21 = (min((min((((arr_22 [i_0] [13] [i_0] [i_6] [i_6] [i_0] [i_8]) ? var_2 : var_0)), var_9)), (-1224226731295845552 / var_6)));
                            }
                            var_22 = ((((((~4785455733182349836) % ((min(1696218546, (arr_12 [i_5] [i_5] [i_0] [i_5]))))))) ? ((var_9 + (arr_5 [i_1 - 2] [i_0] [i_6 - 1]))) : 944078748177653403));
                            arr_30 [i_0] [i_1] [i_0] [i_6] [i_0] = ((((min(3674579863, ((((arr_3 [i_0] [i_1]) == (arr_28 [i_0]))))))) ? (((((arr_3 [i_1 + 1] [i_1]) < (4785455733182349837 && 125))))) : ((73 % (~var_7)))));
                            arr_31 [i_0] [i_5] [18] [i_0] = (-(min((arr_26 [i_0] [i_0] [i_1] [i_0] [i_0]), (max(var_11, (arr_12 [i_0] [1] [i_0] [i_6]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
