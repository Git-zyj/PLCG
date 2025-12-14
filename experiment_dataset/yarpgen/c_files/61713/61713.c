/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_14;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [6] [i_3] [i_3] [i_4] [6] [2] &= (((min(((1093116226 ? -67 : (-127 - 1))), (var_10 % 9464)))) || var_13);
                                var_19 = ((246 ? (((27 >= var_2) ? (((arr_5 [i_0] [i_1]) ? var_7 : (arr_7 [i_1] [i_4]))) : ((1449190694 ? 106 : 9434)))) : ((19190 ? 52840 : 9451))));
                            }
                        }
                    }
                    var_20 &= (min((((!((max(var_9, var_2)))))), (arr_6 [i_0] [i_0])));
                    var_21 = (max(var_21, (arr_6 [i_2 + 2] [i_2 + 2])));
                    var_22 = (((((arr_11 [i_0]) || (arr_4 [i_0] [i_1] [i_1]))) ? (~52840) : ((-(arr_11 [i_2 + 3])))));
                }
            }
        }
        var_23 = ((((((arr_6 [i_0] [9]) || var_14))) - (arr_6 [1] [i_0])));
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_24 = ((((((arr_2 [i_5 - 1]) ? 225 : (arr_5 [i_5 + 1] [1])))) ? (((max(2, -108)))) : (arr_5 [i_5 - 3] [i_5 - 3])));
        var_25 -= ((65172 + (((arr_6 [i_5] [i_5 + 2]) - var_9))));
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_26 = (max(var_26, ((((arr_23 [i_6 + 1] [i_7 + 1]) != (arr_10 [i_6 - 1] [i_7 + 1] [i_8 - 2] [i_9 + 1]))))));
                        var_27 = (max(var_27, (arr_9 [i_6 - 1] [i_6] [i_6] [i_6 - 3])));
                    }
                }
            }
            var_28 = ((((23256 ? var_4 : 1932239105)) % var_0));
        }
        arr_27 [i_6 - 2] [i_6] = (max((((arr_9 [i_6] [i_6] [i_6] [i_6]) ? (arr_9 [i_6 - 2] [i_6 - 1] [i_6] [i_6]) : 52895)), ((879053275 ? -23 : (arr_9 [i_6 - 2] [i_6] [i_6] [i_6])))));
    }
    var_29 -= var_6;
    #pragma endscop
}
