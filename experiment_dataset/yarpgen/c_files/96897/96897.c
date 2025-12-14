/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_18 = 1;

        for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((((16 ? 244 : 6138557843288823571))))));
            var_20 = (~12558310959992526677);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 -= 60022;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0 + 1] [i_0 + 1] = (~0);
                            arr_17 [i_0] [i_3] [i_3] [i_4] [i_5] = (1265950497491183621 ^ 65520);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [15] [5] [i_3] [i_4] [i_6] = (1 ? (~5264693152556780698) : (!65531));
                            var_22 = (1603318908 != 1603318898);
                            var_23 = 60004;
                            var_24 = (151 % 239);
                            arr_22 [i_0] [i_0] = 6138557843288823588;
                        }

                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_0] [i_2] [i_3] = ((243 ? 24 : 4294967295));
                            var_25 *= ((8191 ? 6201973855838595142 : 538360664016923524));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_26 *= -226;
                            var_27 = (min(var_27, (((~((15 ? 10530080051767853682 : 65531)))))));
                            arr_29 [i_0 - 1] [i_3] = ((46075 ? 13519455339393747138 : 218));
                        }
                    }
                }
            }
            var_28 = ((7916664021941697910 ? 3253685693 : 44));
        }
        for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
        {
            arr_32 [i_9] [i_0] = 1;
            var_29 = (-((0 ? 11509773178800153400 : 121410114142215410)));
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_30 = (max(var_30, (~23)));
        arr_36 [i_10] [i_10] = 6585;
    }
    var_31 = -var_15;
    var_32 = (max((11678 != var_10), (~262143)));
    #pragma endscop
}
