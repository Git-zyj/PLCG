/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_11 - (((((min(148, 64424509440))) ? var_3 : var_15))))))));
    var_19 -= var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [3] = (arr_0 [i_0]);
        var_20 = -107;
        var_21 = (max(var_21, ((min(0, (var_15 & 164))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((!(((-25725242 ^ (107 - 1729965422)))))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 *= (~3625444769);
            var_24 = ((min((max(148, (arr_0 [i_2])), (arr_3 [i_1] [i_1])))));
            var_25 = (min(((!(arr_8 [i_1] [i_2]))), (-1729965430 == 3625444769)));
            var_26 = var_11;
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_6] [i_6] = (max(((((((arr_3 [i_1] [i_1]) ? var_11 : 107))) ? (((min(var_1, 149)))) : var_12)), ((((arr_15 [i_3 - 3] [i_4 + 4] [i_6] [5] [i_6] [i_6]) == var_17)))));
                            arr_20 [i_6] [1] = 0;
                            var_27 = ((1639073486 >> (1435808912 - 1435808908)));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_23 [i_1] [i_7] [i_4 - 1] [i_4] [i_5] [i_7] = ((((5068788230834275643 ? (0 % -5068788230834275643) : (arr_6 [i_3 - 3] [i_4 - 1]))) * (!5068788230834275645)));
                            var_28 &= ((var_6 ? ((((arr_9 [i_3 - 3] [i_4 + 1]) >> (((arr_9 [i_3 + 1] [i_4 + 4]) - 47867))))) : (min((arr_9 [i_3 - 1] [i_4 + 3]), 970875497))));
                        }
                        var_29 = (max((max((arr_6 [i_4 + 2] [i_4 + 2]), 368678432)), (min(1729965422, (arr_6 [i_4 + 1] [i_4 - 1])))));
                        var_30 &= var_14;
                        var_31 += (min(((min(var_1, (arr_22 [i_1] [i_4 - 1] [9] [i_3 - 3] [i_4] [i_1] [i_5])))), (~5068788230834275643)));
                    }
                }
            }
            var_32 = var_6;
            arr_24 [i_1] = ((var_2 ^ (arr_18 [i_3] [i_3 + 1] [3] [i_3 + 1])));
            var_33 = (((((!(arr_5 [i_3 - 3] [i_3 - 3]))))) + (min((arr_5 [i_3 - 3] [i_3 - 3]), (arr_5 [i_3 - 3] [i_3 + 1]))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_34 = (arr_6 [i_8] [i_8]);
                                var_35 = (min(((!(!var_3))), var_2));
                                arr_39 [i_8] [i_9] [i_10] [i_9] = (arr_13 [i_1] [i_10] [i_11]);
                                var_36 = (arr_21 [3] [i_8] [i_9] [i_10] [i_11]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_37 = ((-(min((arr_21 [i_13 - 1] [i_13] [i_13] [i_13 - 1] [i_13 - 1]), var_0))));
                                arr_44 [i_9] [i_8] [i_9] [i_12] [i_9] [i_12 - 1] [7] = ((+(((!0) % (arr_27 [11] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (min((((909604370 != (7078143955511385446 != var_3)))), var_3));
    #pragma endscop
}
