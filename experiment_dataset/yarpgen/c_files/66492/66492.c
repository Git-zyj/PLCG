/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 50;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = -3675550030889713878;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [0] [i_2] [i_3] [i_0] [i_4] [i_2] = (max(((((-51 < 50) ? (arr_11 [i_0] [i_1] [i_0] [1] [2]) : (-84 % 53681)))), (min((-519903576 <= var_18), 7137591463894601747))));
                                var_21 -= ((!(((((min((arr_10 [i_0] [i_0] [6] [4] [i_0]), 83))) ? 127 : (~2571716752979952177))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 7;i_7 += 1)
                        {
                            {
                                var_22 = -519903576;
                                arr_26 [i_0] [i_6] [i_0] [i_1] [7] = (min(((((0 ? 7137591463894601747 : 206533244)) % ((-519903576 | (arr_22 [i_0] [i_1] [i_5] [i_1] [1] [i_5]))))), (((1089822135354557474 ? var_16 : 65535)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_33 [i_0] [i_0] [1] [i_8] [i_9] = (var_2 >= 127);
                            var_23 = (arr_3 [i_0] [i_0] [i_0]);
                            var_24 &= ((((8448949181450326613 ? 9291561993944853077 : (arr_21 [i_1 + 1] [i_1 - 2] [i_8] [i_8] [i_1 - 2]))) >= (((max((arr_6 [i_1 - 2]), (arr_21 [i_1 - 1] [i_1 - 2] [i_8] [6] [i_9])))))));
                            var_25 = (min(var_25, var_1));
                        }
                    }
                }
                arr_34 [i_0] [i_0] = 0;
            }
        }
    }
    #pragma endscop
}
