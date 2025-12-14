/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [4] = ((((max(var_0, 1)))) ? (~var_12) : (((((1879143854 != -102) <= var_2)))));
        arr_3 [i_0] = ((123 != (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = 101;
            arr_7 [i_0] [i_0] [i_1] = 8118;
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = (arr_9 [9]);
        arr_11 [i_2] = -102;
        arr_12 [i_2] [i_2] = ((-591175637922170481 ? (!var_11) : (((!((min(-102, 591175637922170482))))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_19 [i_3] = var_4;
            arr_20 [i_4] [i_4] [i_3] = var_11;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_23 [11] [0] [i_5] = (!2);
            arr_24 [i_3] [1] = ((((+((var_4 ? (arr_4 [i_3]) : 591175637922170498))))) ? ((((var_17 || (~6595816015722553836))))) : (min((min(var_3, var_15)), (~127))));
            var_21 = (max((((!(arr_17 [i_3])))), (min(50, 0))));
            var_22 = (591175637922170481 * (((((arr_15 [i_5]) && var_12)))));
            arr_25 [i_5] [3] = ((+(min((arr_0 [i_5]), (arr_0 [i_3])))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_36 [i_3] [i_3] [i_7] [i_3] [i_3] = ((var_1 ? ((var_15 ? (max(var_7, var_9)) : (min(6595816015722553836, var_16)))) : (min(var_8, (arr_34 [i_3] [i_3] [i_8 + 1] [i_8])))));
                        var_23 = min(-4223233730093888250, var_2);
                        var_24 = ((~((var_4 ? 1310019701828045174 : 1))));
                        var_25 = (((((~(1 | 10943175404940556679)))) ? ((1 ? (2006 ^ 1310019701828045174) : 1)) : (min((min(37, 645077032272200557)), (~var_13)))));
                        arr_37 [i_7] [i_7] [i_7] [i_3] [i_6] [i_7] = min(((((arr_17 [i_8 - 1]) <= (arr_17 [i_8 - 1])))), var_8);
                    }
                }
            }
            var_26 = ((1863684120 & ((((!var_16) == 1984467248123721788)))));
            var_27 = ((1 ? var_0 : var_15));
            var_28 = ((~(~33)));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_44 [i_3] [i_3] [i_10] = (arr_38 [i_3] [i_3] [i_10]);
                arr_45 [15] [i_3] [9] [i_3] = (((max(1, 17985))));
            }
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_51 [i_11] [i_11] = 1;
                        arr_52 [i_3] [i_3] [i_3] [i_3] = (max((var_8 >= 1), ((7744045658400513509 ? ((10155722350049485174 ? -12550 : (arr_22 [i_3] [i_3]))) : (~var_18)))));
                    }
                }
            }
        }
        var_29 = (max((min(8796084633600, 0)), ((((-2519785491461811946 >= (-127 - 1))) ? ((min(var_2, 370271599))) : 0))));
    }
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {
        arr_55 [i_13] = (!(-500266231 || 63529));
        var_30 = (((((998509754 ? 1 : 29805))) / (max((max(var_3, var_1)), ((((arr_54 [14]) ? 0 : 127)))))));
        arr_56 [12] = ((((((((var_6 ? var_4 : var_10))) ? (var_12 != var_18) : var_8))) && (((-3004607434579194606 ? -31237 : 1)))));
        arr_57 [i_13 - 2] = -1;
    }
    var_31 = 6201082829983856972;
    #pragma endscop
}
