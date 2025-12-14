/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? (((~((1 ? 2971621663 : var_11))))) : (((-1832603387 >= -654746303) ? 45 : 45))));
    var_15 *= (min(1323345632, (!11231636241242762428)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = 311956460292070790;
        arr_3 [i_0] &= ((min(45, (~-52))));
        arr_4 [i_0] [6] &= (((((31 >> (((arr_2 [i_0]) + 21643))))) ? (arr_0 [i_0]) : ((((max(1, (arr_1 [i_0])))) ? ((-92 ? 1234613282386138309 : var_10)) : var_3))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 |= -70;
        arr_9 [i_1] = (((((-44 ? -61 : 1073741823))) ? (((!((min(42888, 1)))))) : (max(var_4, (max(var_10, -63))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] = (min(1323345633, 262922072637466957));
                            var_18 &= (max(3886477766, (-127 - 1)));
                            var_19 = 1323345633;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_20 = (arr_10 [i_4 - 1] [i_2] [i_3 + 1]);
                            arr_24 [i_1] [i_2] [i_1] = ((1323345660 << (-2048 + 2072)));
                            arr_25 [i_2] [i_2] [15] [i_2] [i_1] = ((1073741823 ? 549099822 : 59));
                            var_21 = ((-70 > (arr_6 [i_3 + 1] [i_3])));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1] [i_1] [i_2] [i_4] [i_7] [i_7] = min((min((arr_26 [i_2] [i_4] [i_3] [i_2]), ((1 ? 8128 : 1073741823)))), ((min(var_9, ((max(71, -41)))))));
                            var_22 = var_12;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = (((!2) ? ((((arr_31 [i_8] [i_4] [i_2] [i_2] [i_2] [i_1]) ? (-82 & 47) : (min((arr_20 [i_4] [i_4] [i_3] [i_1] [i_3] [i_4] [i_2]), 41))))) : (min(((12 ? 1 : var_6)), var_7))));
                            var_23 = var_12;
                            arr_33 [i_1] [i_2] [i_3] [i_4] [i_8] [i_4 + 1] = (((min(-70, ((1711158504 ? 294169320 : 5824323463774743418)))) + 1073741823));
                            var_24 = (min(var_24, ((65524 ? -1383804345092976927 : ((min((arr_22 [i_1] [5] [i_3 - 1] [7] [i_8]), 1)))))));
                        }
                        var_25 = ((((min(4, 2971621666))) ? var_2 : (arr_26 [i_2] [i_4] [i_4 + 1] [i_4 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
