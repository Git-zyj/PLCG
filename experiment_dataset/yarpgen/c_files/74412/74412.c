/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] = ((((((((arr_2 [i_0]) ? 1 : (arr_6 [i_0]))) == 110))) <= -110));
            var_12 = (((arr_1 [i_0]) ? 92 : ((var_0 ^ (max((arr_0 [i_0] [i_1]), (arr_1 [i_0])))))));
            var_13 = ((!((min((arr_4 [i_1] [i_0]), ((((arr_6 [5]) ? var_1 : 97))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 += (((110 ? 110 : (arr_14 [4] [i_1] [3] [6]))));
                        var_15 = (arr_2 [i_1]);
                    }
                }
            }
            var_16 = 110;
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] &= arr_8 [i_4 + 1] [i_4] [i_4] [i_4];
                        arr_24 [i_0] [i_4] [i_4] [i_0] [i_4] &= ((!(arr_11 [i_5])));
                    }
                }
            }
            arr_25 [0] [i_4] = (min((((-(1 + -172155107)))), 2305843009212645376));

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [0] [0] = ((!(!172155106)));
                            var_17 = (((((-((223 ? 172155107 : 508))))) || (((-1 ? (arr_31 [i_9] [i_0] [i_7] [i_7] [i_4] [i_0]) : (((arr_32 [i_7] [i_8] [i_7] [11] [11]) ? 55 : 55)))))));
                        }
                    }
                }
                var_18 |= -111;
                var_19 = ((-((63 ? 225 : 96))));
            }
        }
        arr_36 [i_0] [i_0] = 190;
        var_20 = (((max(((((arr_18 [i_0] [i_0] [i_0] [i_0]) || 234))), ((172155106 ? 63 : 536346624)))) + 1));
    }

    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_21 *= (96 ? ((((arr_38 [i_10] [i_10]) == (arr_38 [i_10] [i_10])))) : (((112 || (arr_37 [i_10])))));
        arr_40 [i_10] = (arr_38 [i_10] [i_10]);
        var_22 = -4;
        arr_41 [4] [i_10] = ((((125829120 >= -489) + (min(1629740045, 32)))));
    }
    var_23 -= ((536805376 ? 2058661733 : 13510798882111488));
    #pragma endscop
}
