/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [10] [i_2] [i_0] = (min(((~(6126564853962507392 == 23))), (((((var_3 ? 7314687999698205283 : (arr_1 [i_0])))) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (arr_2 [i_0])))));
                    var_14 = (((arr_0 [i_1 - 4] [i_1 - 1]) & ((-7314687999698205273 ? 1023 : 5861337115983448828))));
                    var_15 = (max((arr_4 [i_0] [i_1 + 4]), 3295701461));
                    var_16 = ((var_13 >> ((((-105 ? (((arr_3 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_6 [i_0] [i_0]))) : 177)) - 12081434381913958110))));
                    arr_8 [i_2] [i_2] [i_0] [i_2] = (max((((-652925346 ? var_13 : var_1))), ((((((102 ? var_11 : 111))) ? ((max(105, 652925345))) : (max(-6590424105026528445, var_12)))))));
                }
            }
        }
    }
    var_17 = ((~(min((!1), (min(652925339, var_1))))));
    var_18 = var_11;
    #pragma endscop
}
