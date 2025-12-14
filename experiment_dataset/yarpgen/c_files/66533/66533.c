/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = ((!(((((arr_1 [i_0] [i_0]) ? 32704 : var_2)) != (arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_12 -= ((!(((+(((-127 - 1) ? 6567 : (arr_2 [i_1] [i_0]))))))));
            var_13 = -123;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_14 = ((((min((arr_5 [i_0] [i_1 - 1] [i_2] [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])))) ? ((-(arr_5 [i_0] [i_1 + 1] [i_2] [i_2]))) : 15030));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_10 [i_3] [i_2] [i_1 - 1] [i_0] [i_0] = (min((arr_7 [i_3] [i_1 - 1]), 5499505421950300591));
                    arr_11 [i_3] [i_3] [i_2] [i_2] [i_1 - 1] [i_0] = ((-((((min(0, (arr_4 [i_2] [i_1])))) / 8191))));
                    var_15 = (--var_2);
                }
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_16 |= (arr_5 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]);
                        var_17 = (max(var_17, (((-(arr_15 [i_0] [i_1] [i_1 - 1] [i_4 - 1] [i_1 - 1] [i_0]))))));
                    }
                    var_18 = ((240 ? -122 : (arr_0 [i_4 - 3] [i_1 - 1])));
                }
                var_19 -= (((((arr_7 [i_1 + 1] [i_1 - 1]) ? var_2 : (arr_7 [i_1 + 1] [i_1 - 1])))) - ((-(min(5594068598082985527, 3526198547)))));
            }
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                var_20 = (max(var_20, 254));
                var_21 = (min(var_21, 8863662740340011041));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_22 = (max(((-(arr_6 [i_0] [i_0] [i_7] [i_1 - 1]))), (arr_6 [2] [i_7] [i_7] [i_1 - 1])));
                arr_21 [i_0] [i_0] = (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) + ((max(122, 12)))));
                var_23 = 255;
                var_24 = ((93 ? -1759657768 : var_0));
            }
            arr_22 [i_0] = -22753;
        }
    }

    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = ((~(50501 == 8191)));
        var_25 = (max(var_25, (!var_0)));
        arr_28 [i_8] = (-(min(1696031662, 0)));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_26 = (min((min(-109, -16777088)), 2));
        var_27 = (max(var_27, ((min((arr_30 [0]), ((((arr_26 [i_9]) % var_7))))))));
        arr_31 [i_9] = ((-((var_0 ? (arr_23 [i_9]) : 1))));
        arr_32 [i_9] = 1257262161;
    }
    #pragma endscop
}
