/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = (((((-26420 ? -125 : -8309254437778165051))) ? 148 : var_8));
                    var_13 = ((-7293002817068355565 ? (arr_8 [i_0] [11] [i_1 - 1]) : 152));
                    var_14 = (min(var_14, (((var_2 ? (arr_7 [i_0] [i_1 - 1] [i_0]) : (arr_0 [i_1 + 1]))))));
                }
                arr_9 [3] = (((((103 ? var_8 : 152))) ? (((var_8 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) : ((var_6 ? -7293002817068355565 : 3119235554938995497))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_15 = ((((((arr_6 [i_1 - 2] [i_1 + 1] [i_3 - 1]) ? 155 : var_5))) ? (((arr_3 [i_1 - 1] [i_1 - 2]) ? (arr_3 [i_1 - 1] [i_1 - 2]) : 144)) : ((var_8 ? var_1 : var_9))));
                            var_16 = (((((116 ? (arr_14 [i_0] [i_1 - 2] [i_3]) : var_3))) ? (((arr_14 [i_1 + 1] [i_1] [i_3]) ? 7624330667769162727 : 133)) : (((1 ? var_0 : 136)))));
                            arr_15 [6] [i_1] [i_1 + 1] &= (((((116 ? var_9 : 107))) ? (((arr_8 [i_0] [i_1 + 1] [i_4]) ? 1033441185015174656 : var_1)) : (((-41 ? -804231512 : -1)))));
                            arr_16 [i_3] = (((((-19175 ? 144 : 139))) ? ((((((-14887 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_2 [i_3] [i_3])))) ? 5857201047913680875 : var_9))) : ((617350677903487650 ? 172 : 18446744073709551610))));
                            var_17 = ((((((arr_10 [i_3] [i_3 + 1] [i_1 - 2] [i_3]) ? (arr_10 [i_3] [i_3 + 1] [i_1 - 2] [i_3]) : 1))) ? ((var_2 ? 152 : var_0)) : ((var_7 ? (arr_10 [i_3] [i_3 + 1] [i_1 + 1] [i_3]) : (arr_10 [i_3] [i_3 + 1] [i_1 - 1] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = ((var_4 ? ((((((var_0 ? var_10 : var_4))) ? ((var_1 ? 1 : var_7)) : ((-122 ? var_7 : 7))))) : var_2));
    #pragma endscop
}
