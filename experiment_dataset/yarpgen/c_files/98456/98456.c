/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = -1;
                var_13 = (!-30779);
                var_14 = (((min((-32767 - 1), -30779)) < (-var_5 <= 0)));
                var_15 = (max((arr_3 [i_0] [i_0]), ((var_4 + ((var_3 ? 0 : 1))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    var_16 = ((+((max((arr_8 [i_2 - 1] [i_4 - 4]), (arr_9 [i_2] [i_3] [i_3]))))));
                    var_17 ^= (max(((var_0 ? ((max((arr_7 [i_3]), -30779))) : (arr_8 [i_4 + 2] [i_4 + 2]))), ((((((arr_10 [i_4]) & var_8))) ? (~14336) : ((max(-25453, 28356)))))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_18 = -25916;
                        var_19 = arr_8 [i_2 - 1] [i_4];
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (((((4096 ? (arr_6 [i_2 - 1]) : (-32767 - 1))) & (-32767 - 1))))));
                        var_21 -= ((-11605 + (min(((var_8 ? (arr_18 [i_6]) : var_3)), (arr_16 [i_2 + 1] [i_3])))));
                        arr_19 [i_3] = (-32767 - 1);
                        var_22 = (((((32767 - (30779 * 0)))) ? ((max(var_6, var_1))) : (arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_4 - 1] [i_4 - 3])));
                    }
                    var_23 = (max(var_23, ((max(((32767 ? 4095 : ((-4097 ? 16128 : var_4)))), ((-3021 ? ((var_3 - (arr_13 [i_2] [i_2] [i_2]))) : 32767)))))));
                }
            }
        }
    }
    var_24 = (~-var_7);
    #pragma endscop
}
