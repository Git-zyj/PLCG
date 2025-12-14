/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 / 56986);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_12 = (((((arr_0 [i_0 + 1]) / var_9))) ? (((((arr_2 [i_1]) >= (arr_0 [i_0 - 2]))))) : (40340 + 3046237742));
            arr_4 [i_1] [i_0] = 25195;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 = var_5;
                            var_14 = (min(var_14, var_7));
                        }
                    }
                }
            }
        }
        var_15 = var_4;
        var_16 &= ((var_5 > (-32407 || 40340)));
        var_17 = ((!(arr_0 [i_0 + 1])));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_18 = ((((((((-2147483647 - 1) & 1)) - ((var_5 ? var_9 : 25180))))) ? (max(2415955694486778482, (((var_3 + (arr_13 [i_5])))))) : (((((var_4 && var_5) < (arr_15 [i_5])))))));
            var_19 = (min(var_19, (((40349 >> (-3413392881507346345 + 3413392881507346346))))));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_20 = min(((min(var_7, (!1)))), (arr_16 [i_7]));
            var_21 = (min(var_21, 28573));
            arr_20 [i_5] [i_7] = ((((max(2205, 1))) <= (arr_18 [i_5] [i_7] [i_7])));
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_31 [i_5] [i_7] [i_7] [i_9] [15] [i_10] = (min(((((max(var_5, 1)) ? (~var_2) : -766387067))), var_1));
                            arr_32 [i_5] [i_5] [i_7] [i_5] [i_5] = 2147483647;
                            var_22 = (max(var_22, (((((((4479296437999215361 <= (arr_18 [i_8 - 1] [i_10] [i_10 + 3]))))) ^ (min(((4095 ? 9223372036854775807 : var_1)), (2814781533 <= var_6))))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((min((arr_28 [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_7] [i_7] [i_5] [i_5])))))));
        }
        var_24 = (min(var_24, (arr_18 [9] [i_5] [19])));
        var_25 = 82;
        arr_33 [i_5] = (((((0 ? (!var_9) : ((-26908 ? -1646868819925700450 : 4095))))) ? ((1177188826674087643 * (!var_4))) : ((((!((min(0, var_7)))))))));
    }
    var_26 = ((((((min(var_2, var_6))) ? var_5 : (var_2 & var_5))) * var_0));
    var_27 &= ((~((max(-112, var_10)))));
    #pragma endscop
}
