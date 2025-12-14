/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = (((((~((0 ? -942279579 : var_1))))) <= (min((~-6262), (~var_5)))));
    var_12 = (((min(var_9, var_5)) * ((((((445784385543169493 ? var_7 : var_0))) ? (2040 * var_9) : (965420384 / 965420384))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((((min(-16568, (arr_5 [i_2] [i_1])))) ? (((!(arr_2 [i_1])))) : (((1 || (arr_3 [i_0 + 1] [i_1] [i_0])))))) - (((((1 ? (arr_5 [i_1] [i_1]) : 118))) ? ((13835058055282163712 ? (arr_3 [i_2 - 1] [i_1] [i_0]) : 965420360)) : (max((-32767 - 1), 0))))));
                    arr_7 [i_0] [i_0 - 1] [i_1] [i_0 + 1] = (arr_6 [i_2] [i_1] [i_0 + 2] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_1] [i_0] [i_0] [i_0] = ((-((min((arr_12 [i_4] [i_1] [i_4] [i_4 - 4] [i_4 - 3]), (arr_12 [i_4 + 2] [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 3]))))));
                                arr_14 [i_4] [i_1] [i_2 - 1] = (((max((((arr_1 [i_3] [i_1]) ? (arr_8 [i_1] [i_3 + 1] [i_1] [i_1]) : (arr_1 [i_0] [i_2 - 1]))), (max(1, 4))))) || ((max((max((arr_6 [i_3 + 1] [i_2 - 1] [i_1] [i_0 + 1]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 - 3]))), ((((arr_3 [i_3] [i_1] [i_0 + 2]) >= (arr_0 [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
