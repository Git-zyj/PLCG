/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_15))) / (((arr_1 [i_0]) << (((arr_0 [i_0]) - 101)))))), var_17));
        arr_2 [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((((~(arr_0 [i_4 - 1])))) ? (((arr_12 [i_1]) ? (arr_0 [i_4 - 1]) : ((255 ? 50 : (arr_8 [i_1] [i_1] [i_1]))))) : ((((((-8943783758232106804 + 9223372036854775807) << (arr_7 [i_1] [i_2] [i_4])))))))))));
                        arr_14 [i_3] [i_2] [i_3] = ((((arr_3 [i_4 - 1]) == (arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_22 ^= (max(((4827783750746470681 | (arr_5 [i_1]))), ((max((min(var_5, var_1)), var_6)))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 = 8943783758232106809;
                        var_24 = (min(var_24, ((min(14398524931565521078, 14)))));
                    }
                }
            }
            arr_24 [i_5] [i_1] |= (~var_17);
            arr_25 [i_1] [i_1] [i_1] = (max(239, 242));
        }
    }
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        arr_30 [i_8] = 4827783750746470681;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] [i_9] [i_9] = (!8943783758232106803);
                    var_25 += var_6;
                    arr_36 [i_8] [i_9] [i_8 + 2] [i_9] = ((~((((max(var_10, var_18))) ? 8943783758232106793 : ((8943783758232106809 ? var_17 : (arr_23 [i_8 - 1] [i_8 - 1] [i_9] [i_8 - 1])))))));
                    var_26 = ((-((((arr_27 [i_9] [i_8]) != 12998)))));
                }
            }
        }
    }
    var_27 += (-8943783758232106827 == var_16);
    #pragma endscop
}
