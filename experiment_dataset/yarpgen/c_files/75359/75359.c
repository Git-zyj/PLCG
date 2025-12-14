/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((((max(var_10, (arr_0 [i_0] [i_0]))))), ((~((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 23862;
            arr_7 [i_0] = var_17;
            arr_8 [i_0] [i_1] [i_0] = ((-(((!(1 * var_1))))));
            var_21 = -1;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_22 = (max((!-var_8), (min(((var_16 ? var_8 : 1)), (!var_11)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_23 ^= var_10;
                            var_24 = (((((0 ? 1 : 1))) ? (!1) : ((-(((arr_12 [i_4] [i_3] [i_2]) ? 1 : 2618343710252919376))))));
                            arr_19 [i_0] [i_0] = -40;
                            arr_20 [i_0] [i_0] [i_0] = (((arr_3 [i_4] [i_3]) ? (((!(1 != 1)))) : ((((var_3 ? var_4 : (arr_1 [i_2])))))));
                            var_25 = (!((max(2490997801, 1))));
                        }
                    }
                }
                var_26 = (min(var_26, (((5264816552330326622 ? 1 : ((2770241511 ? ((1 ? 1 : var_18)) : 0)))))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_27 ^= 180;
                var_28 *= ((!((127 > (((arr_3 [i_0] [i_6]) ? -91 : 2147483647))))));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_33 [i_9] [i_0] [i_7] [i_2] [i_0] [5] = -14;
                            var_29 = (((((var_7 * (!var_14)))) ? ((((!((min(0, (arr_14 [i_9] [i_0] [i_0] [5] [i_0])))))))) : ((0 ? ((0 ? 14350903063560893280 : 125)) : (arr_28 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [12] [i_0 - 1])))));
                            arr_34 [i_9] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = (arr_24 [i_0 - 1] [i_0 - 1]);
                            var_30 += ((1 ? 18391309339121796005 : 0));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_41 [i_0] [i_10] [i_0] [i_0] [i_0] = ((min(65535, 6964716056122305641)));
                        var_31 = (max(var_31, var_8));
                        var_32 = (max(var_32, -3508445192));
                        var_33 = ((((((var_18 && -36) ? var_9 : (!1)))) ? (((((max(0, var_7))) || 4712572749697447853))) : ((((max(6320, 302665662))) ? (!238) : 57))));
                    }
                }
            }
            var_34 -= ((5324465736119330149 ? 142 : 121425515));
            var_35 += ((-47 ? ((-(!1893388321))) : ((58818 ? 144 : 6327))));
        }
        var_36 = (max((min(((2065099772681542785 ? var_16 : 1)), var_2)), -1));
        var_37 = (max(var_37, ((min(((((~58824) || (!17541)))), var_13)))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_38 = (max(var_38, -0));
        arr_44 [i_12] = ((!(~1)));
        var_39 = (min(var_39, -19724));
        arr_45 [i_12 - 1] [i_12 - 1] = (1 != 1);
    }
    var_40 = (max(9223372036854775805, var_14));
    #pragma endscop
}
