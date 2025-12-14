/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((var_7 ? var_18 : var_19))) ? var_19 : 2078933101620398092)), (((!((min(var_0, var_18))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (min(2078933101620398092, 266338304));
            var_22 = (max(var_22, (((var_6 ? -2078933101620398092 : var_9)))));
            arr_4 [i_0] [i_0] [i_0] = ((((var_9 ? var_17 : 3326253264530386305)) > (((var_18 ? 227 : 81)))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_23 = (min(var_2, (-29160 != var_13)));
            var_24 += (var_0 ? (((var_7 ? (var_15 ^ 4574270333402628826) : var_15))) : ((229 ? (max(var_2, var_2)) : var_16)));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_14 [i_4] [i_3] [i_0] [i_0] = -6482455949503082565;
                arr_15 [i_0] [i_0] [i_0] = (2147483647 + var_5);
            }
            for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
            {
                arr_18 [i_5] [i_5] = var_9;
                var_25 = (max(var_25, (((-266338304 ? (16367810972089153523 <= 4241) : -3324)))));
            }
            arr_19 [1] [1] = (max(((var_13 ? var_3 : var_8)), 6009055344268481584));
            var_26 = ((min(0, 104)));
        }
        arr_20 [i_0] [21] = ((((max(var_5, (28706 / var_14)))) ? var_9 : ((330003610 ? (!420047450) : (-32767 - 1)))));
    }
    var_27 = (min(var_27, (1155056792 | var_0)));
    var_28 = var_15;
    #pragma endscop
}
