/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((!((!((max(407326027, -407326001)))))));
    var_13 = var_10;
    var_14 = ((((!(!var_11)))) + 21074);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((((max(((2134452624 ^ (arr_3 [i_0] [i_2]))), (arr_2 [i_1 + 2])))) == var_7));
                    var_16 = (max(var_16, (-1457016023942281853 != -64)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = 14;
                        arr_11 [i_0] [i_3] [i_3] [i_3] [i_1] [i_0] = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 + 1] [i_1 + 2]) : var_11));
                        arr_12 [i_0] [i_1] = -2251799813685232;
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] = (arr_3 [1] [1]);
                        arr_16 [i_1] = (arr_13 [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
