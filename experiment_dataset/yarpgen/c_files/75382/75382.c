/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (24354 < -1220);
        var_19 = 16383;
    }
    var_20 = 8177;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 |= ((32765 ? 21105 : 43));
                    var_22 -= (-878 < 93);
                    var_23 ^= min(60, 3310);

                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_3] [i_2] = 32767;
                        var_24 = ((-((min((arr_6 [i_1]), var_4)))));
                        var_25 = ((((-101 ? 16383 : 11578)) | ((-8177 ? 65 : -97))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_26 = 8;
                        arr_19 [i_1] [i_2] [i_3] [i_5] = ((~((-7485 ? -14090 : ((1220 ? var_15 : (arr_8 [i_3] [i_1])))))));
                        var_27 = (0 * 23930);
                        arr_20 [i_1] [i_1] [i_2] [i_3] [i_3] [i_5] = (7 + 7501);
                        var_28 -= ((~(~32736)));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_29 = 20737;
                        arr_24 [i_6] [18] [18] [i_3] |= var_4;
                        arr_25 [i_1] [i_6] = (arr_23 [19] [i_3] [i_6] [i_6] [i_1] [13]);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_30 |= (-8165 >= 4345);
                        var_31 = (-30389 + 19763);
                    }
                }
            }
        }
    }
    var_32 = (-16256 & var_16);
    #pragma endscop
}
