/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (-(min(-10259, (arr_0 [i_0] [i_0]))));
        var_18 &= (((arr_1 [i_0]) < (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (~17510131275152913704)));
                    arr_6 [i_0] [i_1] [i_0] = (arr_2 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_20 = (10165151393542848189 ? (-32767 - 1) : (max(15762598695796736, (746268529 <= var_5))));
        var_21 = (min(var_21, ((((~(arr_8 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] [2] |= ((-(arr_8 [i_4])));
        var_22 = (max(var_22, ((-(arr_8 [i_4])))));
    }
    #pragma endscop
}
