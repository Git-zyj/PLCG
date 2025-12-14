/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((max(2877572915, var_15)));
                arr_7 [i_0] [i_1] [i_1] = (~var_11);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 += ((((var_14 >> (var_11 - 13921)))) || ((!((max((arr_9 [i_0 - 3] [i_1] [i_2]), (arr_0 [i_1])))))));
                    arr_10 [i_0] = (max((--41515), (max(((819092966809574592 * (arr_4 [i_0]))), (arr_5 [i_0 - 2])))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [5] = (-127 - 1);
                        var_20 = var_2;
                        var_21 ^= ((max(var_8, (((arr_9 [i_0] [14] [i_0]) ? (arr_2 [0]) : var_10)))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] = ((+((max((arr_1 [i_0 - 3] [i_0 - 2]), ((var_8 > (arr_4 [i_4]))))))));
                        var_22 = (max(var_22, var_8));
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_23 = (((((~(arr_16 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5])))) ? (~var_3) : var_9));
                    arr_20 [i_1] [i_0] = var_10;
                }
            }
        }
    }
    var_24 = (((((var_8 | ((5868013574628926112 ? var_6 : var_12))))) ? (min(var_17, ((-(-127 - 1))))) : var_11));
    #pragma endscop
}
