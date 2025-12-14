/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 17449;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = ((!((!(arr_1 [i_0 + 3])))));
        var_12 = (arr_0 [7]);
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] = (arr_7 [i_2 + 1] [i_0 + 1]);
                        var_13 = ((~(min((arr_1 [i_0 + 2]), (arr_7 [i_3] [i_0 + 3])))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = (arr_9 [i_3 + 3] [i_2 + 2] [i_3 + 3] [i_2 + 2] [i_0 + 3]);
                        var_14 = arr_9 [i_3] [9] [i_2] [i_2 + 2] [i_0 - 1];
                        var_15 += (max(-15, 18446744073709551600));
                    }
                }
            }
            arr_14 [i_1] = ((max((((-(arr_6 [i_1] [i_0]))), (min(7060544376500193434, (arr_1 [i_1])))))));
        }
        var_16 = (min(-7060544376500193433, (arr_11 [i_0] [17])));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_17 = (max(((-(arr_0 [i_4 - 1]))), ((max((arr_11 [6] [i_4]), (max(-5, (arr_17 [16]))))))));
        var_18 = 7060544376500193411;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_6] [i_5] = ((-(max(5, (max(804863037, (arr_17 [i_4])))))));
                        var_19 = ((-(max(17443, 2904115217))));
                    }
                }
            }
        }
        var_20 = (min(110, 48092));
        arr_29 [i_4] = ((-(min(17, (arr_26 [i_4 + 1] [i_4 + 1] [i_4] [0])))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_33 [i_8] = ((-((-(((!(arr_4 [i_8] [19]))))))));
        var_21 = (((min(-77, 1))));
    }
    var_22 = (max(var_22, (~var_9)));
    #pragma endscop
}
