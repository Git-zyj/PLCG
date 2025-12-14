/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (((((!(arr_0 [4])))) % ((min((arr_0 [i_0]), (min((arr_0 [i_0]), 11924)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((11924 & ((-11924 ? 1 : (arr_4 [i_0] [i_1] [i_2])))));
                    var_13 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((!((((48852 <= 11924) & (((-23214 <= (arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
                                var_15 = (min((((1023 & 64512) ? var_4 : (var_7 > 844))), (((((-(arr_3 [i_2 + 1] [i_3] [i_4])))) ? ((min(30949, 32767))) : (!1)))));
                                arr_12 [i_1] [i_3] [i_2 - 1] [i_1] [i_0] [i_1] = (arr_1 [1] [i_4]);
                                var_16 &= (min(((-((var_6 ? (arr_0 [i_2]) : (arr_5 [i_3] [i_1 + 1] [4]))))), (((!(~43394))))));
                                arr_13 [i_0] [i_1] = (min((((((16683 ? 23732 : 1))) ? -19468 : 1)), (((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1] [i_2 + 2]) : 1))));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((((min(((max((arr_5 [10] [1] [6]), 2048))), -1))) ? ((-(var_7 <= 65535))) : (min(0, (((arr_0 [i_0]) | (arr_3 [i_0] [1] [1])))))));
        var_17 = 0;
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    arr_22 [i_7] [1] [i_7] = ((28610 <= (arr_20 [9] [i_7])));
                    var_18 = (min(var_18, ((min(((1004 ? (arr_9 [20] [i_6] [6] [i_7 + 1]) : (arr_9 [i_7] [i_7] [i_7] [i_7 + 1]))), ((min((arr_10 [i_5] [i_6] [i_7 + 1] [i_6] [i_6]), var_1))))))));
                }
            }
        }
        var_19 = (min((((!(((65535 ? 44350 : (arr_8 [i_5] [i_5 + 1] [i_5] [i_5] [16]))))))), ((-1 ? -1 : -var_8))));
    }
    var_20 = (min(var_20, -var_4));
    #pragma endscop
}
