/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (min(var_13, ((((-2147483647 - 1) - 0)))));
        arr_3 [i_0 + 1] [11] = ((!(4294967295 <= 2147483647)));
        arr_4 [i_0 + 1] = (((((-2147483647 - 1) & 5951944259634156096)) <= 1));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                var_14 = (+-2147483647);
                arr_10 [i_1 - 1] [i_1 - 1] [i_2] |= (1 && -24453);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 = (-1463940416411232736 > 0);
                            var_16 = 123;
                            var_17 = -5951944259634156096;
                            var_18 = 4294967295;
                            var_19 *= 2147483647;
                        }
                    }
                }
                arr_15 [i_0] [i_1 - 1] = 2147483647;
            }

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_20 = (!4437326077398146069);
                arr_20 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0 + 1] = (~4294967280);
                arr_21 [i_0] [i_0] [i_5 - 1] = (-7174497318062196339 > 4262287042);
                arr_22 [i_5] [i_0 + 1] = 35762;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_25 [i_6] [i_1] [10] [i_6] = 2058891232658256825;
                var_21 = 199;

                for (int i_7 = 4; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_22 = -27913;
                    var_23 = 3896816928707680461;
                    arr_29 [i_6] [1] [1] [i_6] [i_7] [i_7] = (!-28345);
                }
                for (int i_8 = 4; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_24 += (1 % 3149712341);
                    arr_34 [i_0] [i_6] = 4437326077398146069;
                    arr_35 [i_0 + 1] [i_1 - 1] [i_6] [i_6] = (!-5572821831657129263);
                    arr_36 [i_6] [i_1] [i_6] [i_6] = (3149712341 - 199);
                    arr_37 [i_6] = (-5756263006459322906 - 2877);
                }
            }
        }
    }
    var_25 = (min(1216972566051536436, -5756263006459322906));
    var_26 = var_0;
    #pragma endscop
}
