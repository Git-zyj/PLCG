/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_6 ? 126976 : (((1 || (12 % 12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_18 = ((!(arr_11 [i_3])));
                            var_19 = ((~((7 ? 3713668145 : 152))));
                        }
                        var_20 = (max(var_20, ((159 ? 149 : 97))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = (6 != 154);
                            arr_19 [i_5] [i_3] [i_2] [i_1] [i_0] = 169;
                        }

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 |= ((5 ? 5314481735362851070 : 558551906910208));
                            var_23 = ((((249 ? 224 : 137438949376))) ? (((min(4, 21537)))) : 4227858432);
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6] = ((--20) ? ((4 ? (arr_3 [i_0] [i_1] [i_2]) : 2330763298873971159)) : 229);
                            var_24 ^= (arr_22 [i_0] [i_1] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (7 & -110);
                            arr_26 [i_0] [i_1] [i_2] = 536862720;
                            arr_27 [i_0] [i_1] [i_0] = 56;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_26 -= (250 && 246);
                                var_27 = -64;
                            }
                        }
                    }

                    for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_28 = (min(248, 2682246772817774725));
                        var_29 = (min(18446743936270602231, 6));
                    }
                    for (int i_11 = 3; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_11] [i_1] [i_1] [i_11] [i_11 - 2] = ((1593283621891890193 ? 238 : 10));
                        var_30 = ((5 <= (arr_20 [i_11 + 2] [i_11] [i_11 + 2] [i_11 - 1] [i_11 + 2] [i_11])));
                    }
                    for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, (arr_16 [i_0] [i_1] [i_2] [4])));
                        arr_40 [i_12] [i_2] [i_12] = ((-8802708663191682568 ? 137438949383 : ((524272 ? 8802708663191682567 : 137438949346))));
                    }
                    var_32 = (8685 != 1);
                }
            }
        }
    }
    var_33 = ((1065353216 ? 15186389385630830913 : 240));
    #pragma endscop
}
