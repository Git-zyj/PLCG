/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (!2229967487)));
        var_19 = (((!2140041627) * (((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
        arr_2 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_20 = (min(((var_15 >> (((min(7456138647627739487, 86)) - 75)))), (arr_0 [i_2])));
            arr_9 [i_1] [i_1] [i_2] = (((((min((arr_8 [i_2 - 1]), (arr_8 [i_2 + 1]))))) ^ (max((max((arr_5 [i_1]), (arr_1 [i_1]))), (14471 | -17)))));
            var_21 |= (arr_6 [i_1]);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_22 = ((15226112603415072317 ? -1776611556 : (min((3220631470294479298 + 51057), ((((arr_6 [i_3]) && 13025061996866108472)))))));
            var_23 = ((var_14 * (arr_4 [i_1])));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_24 = (max(var_4, (((arr_16 [i_1] [6]) & (max(56301, 5421682076843443140))))));
                    var_25 = ((~(min(-2790157113860157858, 365230452))));
                    var_26 = ((((865048525243033688 + (arr_1 [i_4])))) + (arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_27 = var_7;
                                arr_26 [5] [5] [i_5] [i_6] [i_7 - 3] [7] [i_4] = ((((!(arr_0 [18]))) ? ((max((arr_12 [i_6] [i_4] [i_5]), ((99 ? var_13 : var_7))))) : (max(51064, 13025061996866108475))));
                                var_28 = (((((10851049031263601857 ^ (!15930569440681821758)))) ? (max((arr_10 [i_7 - 3] [i_6 - 2]), (arr_10 [i_1] [i_1]))) : 2229967489));
                            }
                        }
                    }
                }
            }
        }
        var_29 = (max(1, 0));
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    arr_36 [i_8] = ((51065 % (arr_34 [i_8] [i_9] [i_8 + 1])));
                    var_30 = (max(var_30, ((((((max(-1760036777, 3684754364)))) ? (min(7, (((~(arr_1 [10])))))) : 9234)))));
                    var_31 = -1;
                }
            }
        }
        arr_37 [10] &= (((((~(arr_29 [i_8 - 1])))) <= (((-2140041628 & 0) | (max(var_12, (arr_29 [i_8])))))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_45 [i_8] [12] [i_11] [i_12] [i_13] [i_13 + 1] = ((max((arr_32 [i_13 - 1] [i_13 - 1]), (arr_28 [i_12]))));
                        var_32 += ((!(((-92 ? (arr_28 [i_8]) : (((arr_42 [i_8] [i_11] [i_12] [i_13]) - -13)))))));
                    }
                }
            }
        }
    }
    var_33 = (-13 > 1);
    var_34 = var_4;
    #pragma endscop
}
