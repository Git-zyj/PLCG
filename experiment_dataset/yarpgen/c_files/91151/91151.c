/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((((0 ? 13010637020290890865 : 1)) < (max(var_16, (arr_0 [i_1])))));
                var_20 = ((((max((arr_3 [i_0] [i_1] [i_0]), (max(1, 16896))))) ? (((max(19278, var_9)))) : ((min(5436107053418660729, 1)))));
                var_21 = (max(var_21, (((-(max((arr_4 [i_0] [16]), (max(var_7, (arr_1 [13]))))))))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_22 |= 1;
                        arr_9 [i_3 - 1] [i_1] [i_1] |= (((((-15570 ? 13010637020290890865 : (((min(-6574, 46270))))))) ? (30773 || 1927150775) : (max(2462054857, (max(-15349017, 4095))))));
                        var_23 = ((((min(16909, var_16))) || ((((((var_6 ? (arr_3 [i_0] [i_0] [i_0]) : var_16))) ? ((min((arr_8 [i_0]), var_6))) : 15016)))));
                        var_24 = ((((((arr_6 [i_2 + 1] [i_3 - 2] [i_3 - 2]) | (max((arr_5 [i_0] [i_0]), var_3))))) && ((min((((0 ? (arr_6 [i_0] [i_2 + 2] [i_2 + 2]) : var_1))), (arr_5 [i_2 - 2] [i_2 - 1]))))));
                        var_25 *= (min((((((1 ? var_1 : var_15))) ? ((max((arr_4 [i_0] [i_2]), 30797))) : (((arr_6 [15] [15] [15]) ? (arr_1 [i_0]) : 8128)))), (arr_4 [i_0] [i_0])));
                    }
                    var_26 = (((((arr_3 [i_1] [i_1] [i_2]) < 1)) ? ((1927150775 ? (arr_7 [i_0] [i_1] [i_2] [i_0] [i_2 - 1] [i_1]) : (arr_6 [5] [i_1] [i_1]))) : ((-(arr_6 [i_2] [i_1] [i_2 + 3])))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_12 [i_0] [i_0] [i_4] = var_10;
                    arr_13 [i_0] [i_1] = (min((max(16898, 279193054924115146)), ((((~(arr_8 [i_4])))))));
                    var_27 = (min(var_27, 5111218681359433192));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_28 = (max((((arr_7 [11] [2] [i_6] [i_6] [i_6] [i_6 + 2]) ? (arr_18 [i_1] [i_5] [i_1] [i_6] [17] [i_6 + 1] [i_6 - 1]) : (arr_18 [i_6 + 1] [i_5] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 3]))), ((max(var_17, var_8)))));
                                arr_20 [i_0] [i_1] [i_1] [i_6 + 3] [i_6 + 1] [i_0] [i_1] |= (max(var_2, (((arr_7 [4] [i_0] [i_0] [i_0] [i_1] [i_0]) ? (((-(arr_1 [i_5])))) : (arr_18 [i_6 + 2] [i_0] [i_0] [i_0] [1] [i_6 - 1] [i_6])))));
                                arr_21 [i_0] [i_0] [i_5] [i_0] [i_5] = max(((((min(var_15, 2147483647)) != (arr_2 [i_6 + 3] [i_6 + 3])))), (arr_15 [i_6 + 1]));
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_29 |= -15349017;
                    var_30 = (((~31) || (((min(4294967295, (arr_14 [i_0] [i_1] [i_1] [i_7] [i_1])))))));
                }
                arr_25 [i_0] [i_1] = (max((min(2510933923096093488, 8128)), (min(var_15, (arr_3 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_31 = var_1;
    #pragma endscop
}
