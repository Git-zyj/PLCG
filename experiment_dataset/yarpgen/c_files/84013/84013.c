/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_2);
    var_12 = (~9281618999944170921);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = (max(var_13, (((-(max((~1839689596280668055), ((max(1238700549, var_1))))))))));
            var_14 += ((min(var_0, var_4)));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_7 [14] = (((min((arr_6 [i_0] [i_1] [i_2]), -119))));
                var_15 = (min(var_15, (arr_2 [i_2])));
                arr_8 [i_0 - 2] [i_0] [3] [i_0] = (max(((max((~var_4), var_5))), (arr_0 [i_1])));
            }
            for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_16 = ((-(((-(arr_2 [i_0]))))));
                var_17 = (max((!var_9), (((!((min(-490345448, 3612772105))))))));
                var_18 = ((-((max(var_6, (min((arr_6 [i_0] [i_0] [i_0]), var_4)))))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_3] [i_1] [i_3] [i_4] = (-((-(~0))));
                    var_19 = -143;
                    arr_14 [i_0] [i_3] [i_0] [i_0 - 4] [i_0] = var_4;
                }
                var_20 += (min((~var_6), (arr_2 [i_0 - 4])));
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] = (!12);
                arr_18 [i_0] [i_0] = ((-(!113)));
                var_21 = (~var_2);
                arr_19 [i_0 - 3] [i_0] [i_0] [i_0] = 17229238770013651253;
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_22 = ((~(((min(71, var_7))))));
                arr_22 [0] [i_0] [i_6] [10] &= ((-(min(1357287957914243326, (min((arr_20 [i_0] [14] [i_1] [i_6]), var_8))))));
            }
            var_23 = ((!(arr_11 [4] [i_0] [i_1] [i_0] [0])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (min((((max(var_4, (arr_25 [i_0] [i_0] [i_0]))))), ((-((max(var_10, var_10)))))));
                arr_26 [i_0] [i_1] [i_7] = (max(((max(var_6, (arr_6 [i_0] [i_1] [13])))), (max((min((arr_20 [i_0] [i_1] [i_7] [i_7]), 4415372325762322389)), ((min(35, 1)))))));
                var_25 = ((min(var_4, var_0)));
            }
        }

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_26 = (min(var_26, ((min(((min(4415372325762322392, ((max(60, 95)))))), (min((arr_25 [i_8] [i_8] [i_8]), var_3)))))));
            var_27 = max((!var_4), var_1);

            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                var_28 = (max(var_28, ((max((min(0, ((min((arr_10 [i_9]), 1))))), (((min(233, 17331171195801045436)))))))));
                arr_33 [i_0 - 3] [1] [i_9] [i_9] = (min(((max((arr_0 [i_0]), (arr_29 [i_9 - 2] [i_0])))), ((+((max((arr_23 [i_0] [i_0 - 1]), 153)))))));

                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_10] [i_9] [i_8] [i_0] = (((~((max(212, (arr_31 [i_0] [i_10])))))));

                    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                    {
                        var_29 = (max((((!(arr_40 [i_0] [i_8] [1] [0] [13])))), (max((((!(arr_29 [i_10] [i_0])))), var_0))));
                        var_30 = (((min((arr_21 [i_11 + 1] [i_10] [i_8] [i_0]), (arr_23 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_12] [i_0] [i_9] [i_8] [i_0] = (arr_27 [i_0 - 2] [i_8] [i_0 - 2]);
                        var_31 = -30459;
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        var_32 = (max(var_32, ((~(arr_0 [i_13])))));
                        var_33 += -1901122088337392010;
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        arr_50 [i_14] [i_0] [i_9] [i_8] [i_8] [i_0] [i_0] |= (arr_11 [i_0] [i_0] [i_0] [i_10] [2]);
                        var_34 = (((!(arr_9 [i_8] [i_9] [i_8]))));
                    }
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_35 = (max((arr_48 [i_0] [i_0] [i_8] [i_8] [i_0] [i_15]), var_10));
                    var_36 = (((-(-127 - 1))));
                }

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {

                    for (int i_17 = 2; i_17 < 13;i_17 += 1)
                    {
                        arr_60 [i_17] = (min(-var_3, ((~((max(-69, 2761)))))));
                        arr_61 [i_0] [i_0 - 2] = ((max(((-(arr_5 [3] [i_8])), ((max(var_10, var_4)))))));
                        var_37 = (max((min(109, 423926581)), ((max(((max(-82, var_2))), (arr_23 [5] [i_8]))))));
                        var_38 = var_5;
                    }

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        arr_65 [i_18] = -228;
                        arr_66 [1] [i_8] [i_18] [i_8] [i_8] = (~-var_1);
                        arr_67 [i_0] [i_0] [i_18] [i_0] = (((-(arr_35 [i_0 - 3] [i_9] [i_18]))));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        arr_72 [i_0] [i_8] [i_9] [i_16] [6] = (max(((max((min(var_0, (arr_51 [11] [i_9] [i_8] [i_0]))), (arr_68 [i_9])))), (((-(arr_10 [i_9]))))));
                        var_39 = (min(var_39, ((((-(~var_8)))))));
                        var_40 = (max((max(var_10, ((max(var_4, var_5))))), 7166));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        arr_76 [i_0] [i_0] [i_0 + 1] [8] [i_0] = ((~(((min(4415372325762322390, (arr_42 [i_0] [i_8] [i_9] [i_16] [i_20])))))));
                        arr_77 [i_0] [i_0] = 234;
                        var_41 = (~var_7);
                        arr_78 [i_0] [i_8] [i_9] [i_16] = (!961);
                    }
                    arr_79 [i_0] [1] [i_0] = (max((max((arr_59 [i_0] [i_0] [i_0]), (((!(arr_25 [i_0] [i_0] [i_0])))))), (~221)));
                    var_42 = (max((((-((min(18495, var_9)))))), var_2));
                }
                var_43 = ((max(var_10, (arr_44 [i_9]))));
            }
        }
    }
    for (int i_21 = 2; i_21 < 17;i_21 += 1)
    {
        var_44 = (max(var_44, 120));
        var_45 = (max((((~(arr_81 [i_21])))), 61));
        arr_83 [i_21] = (max((((!(arr_80 [i_21] [i_21])))), ((max((!var_0), (arr_81 [i_21]))))));
        arr_84 [i_21 - 2] [i_21] &= (~(min((((-(arr_80 [i_21] [i_21])))), (max(var_8, (arr_80 [i_21] [i_21]))))));
    }
    var_46 = (~var_5);
    var_47 = (max((!1), (min(var_4, var_10))));
    #pragma endscop
}
