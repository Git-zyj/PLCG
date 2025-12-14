/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = 15;
    var_15 = ((-(((var_8 ? var_6 : var_0)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_16 = (arr_2 [i_1]);

            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                var_17 += (((((((-13 ? 15 : 9))) ? (((16023628645885966095 ? 15 : 96))) : (max(-62, 9)))) > (arr_3 [i_0] [i_2])));
                arr_8 [i_0] [i_1] [i_2] = (max(((((arr_4 [i_0] [i_1 - 1]) ? -1784283242746068926 : (arr_4 [i_1 - 1] [i_0])))), ((-(min((arr_0 [i_1 - 2]), 274877644800))))));

                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    var_18 += (arr_4 [i_0] [i_0]);
                    var_19 = (min(var_19, (arr_0 [i_1])));
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_20 = ((-((((arr_3 [i_2 - 2] [i_1 - 2]) == (arr_3 [i_2 + 1] [i_1 + 2]))))));
                    var_21 = ((~(arr_10 [i_0] [i_0] [i_2] [i_2] [i_4])));
                    var_22 += ((-4959662057219640753 == (((~((126 | (arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]))))))));
                    var_23 = (max(var_23, (((!((min((~var_5), (((arr_5 [i_0] [i_1] [i_2]) << (114 - 107)))))))))));
                    var_24 += (((max((max((arr_11 [i_0]), var_1)), (((arr_11 [i_4]) ? (arr_0 [i_4]) : 17330979946277959579)))) > ((((arr_5 [i_0] [i_0] [i_4 + 1]) ? (arr_5 [i_0] [i_1 + 1] [i_4 + 2]) : (arr_5 [i_0] [i_2 - 2] [i_4]))))));
                }
            }
            var_25 = (((-var_2 ? (((max(var_2, 9)))) : (min((arr_1 [i_1]), (arr_0 [i_0]))))));
            var_26 = ((((arr_12 [i_1] [i_1] [i_1] [i_1 - 1]) ? (157 % 1) : ((((arr_11 [i_1 + 1]) ? (arr_1 [i_1]) : -44))))));
            arr_13 [i_0] [i_0] = (((((((-(arr_2 [i_0])))) ? (!136) : (((arr_11 [i_0]) & (arr_7 [i_0] [i_0] [i_0]))))) <= (((((arr_5 [i_0] [i_1 - 2] [i_1 + 2]) <= (min((arr_5 [i_0] [i_0] [i_1]), (arr_6 [i_0] [i_1])))))))));
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_27 = (arr_12 [i_0] [i_0] [i_0] [i_5]);
            arr_16 [i_0] [i_5] = (max((min(((4959662057219640756 ? 3 : 15651816274120495651)), ((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_5]) : (arr_5 [i_0] [i_5] [i_5])))))), ((((max((arr_1 [i_0]), (arr_10 [i_5] [i_0] [i_0] [i_0] [i_0]))) / (((-(arr_1 [i_5])))))))));
            arr_17 [i_0] [i_0] = (arr_15 [i_5]);
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] [i_6] = (arr_2 [i_6]);
            var_28 = (2535714376 / 14);
        }
        var_29 += ((-var_5 ? (((arr_2 [i_0]) ? (arr_14 [i_0] [i_0]) : (arr_11 [i_0]))) : (157 + -11)));
        var_30 = (arr_19 [i_0]);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] [i_7] = (min(((~(arr_20 [i_7] [i_7] [i_7]))), ((((arr_20 [i_7] [i_7] [i_7]) > (arr_20 [i_7] [i_7] [i_7]))))));
        var_31 = (max((arr_0 [i_7]), (arr_4 [i_7] [i_7])));

        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_32 = (((((((max(72, 191))) ? (((~(arr_10 [i_7] [i_7] [i_7] [i_8] [i_8])))) : (min((arr_2 [i_7]), var_5))))) ? ((((!(arr_15 [i_7]))) ? (((((arr_23 [i_7]) != (arr_27 [i_8]))))) : ((1784283242746068926 ? 0 : (arr_10 [i_8] [i_8] [i_8 - 1] [i_7] [i_7]))))) : ((((max(3231167289, (arr_12 [i_7] [i_7] [i_7] [i_7]))))))));
            var_33 = (arr_22 [i_7]);
            var_34 = (!128);
            arr_29 [i_8] = ((((((arr_6 [i_8 + 1] [i_8]) ? var_2 : (arr_6 [i_8 + 1] [i_8])))) ? ((-(arr_6 [i_8 + 1] [i_8]))) : ((-(arr_6 [i_8 + 1] [i_8 + 1])))));
            var_35 += ((((var_0 && (arr_12 [i_7] [i_7] [i_7] [i_8])))));
        }
        var_36 = (max(var_36, (arr_3 [i_7] [i_7])));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_37 += 47;
        arr_34 [i_9] = (min((arr_20 [i_9] [i_9] [i_9]), (((!(arr_9 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        arr_35 [i_9] = (arr_5 [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] = (max((arr_27 [i_10]), (((arr_27 [i_10]) | (arr_27 [i_10])))));
        var_38 = ((~((~(1286546246796748094 | 126)))));

        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            var_39 = arr_1 [i_10];
            var_40 += (max((max((arr_15 [i_10]), (arr_15 [i_10]))), ((((arr_15 [i_10]) < (arr_15 [i_10]))))));
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_41 += (arr_10 [i_10] [i_10] [i_12] [i_12] [i_12]);
            var_42 = ((+(min((max((arr_2 [i_10]), (arr_27 [i_10]))), 153))));
            arr_46 [i_10] [i_10] [i_10] = ((((((arr_15 [i_12]) / (arr_38 [i_12])))) ? ((((!(((-(arr_20 [i_10] [i_12] [i_12])))))))) : (min((((~(arr_2 [i_12])))), (~var_1)))));
        }
    }
    #pragma endscop
}
