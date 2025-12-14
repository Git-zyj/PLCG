/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((((9893354290517101019 ? 4246868020804457449 : var_3))) ? ((-4246868020804457445 ? -1691142332 : var_5)) : var_11)), ((var_4 - (((var_11 ? var_1 : 1)))))));
    var_13 = ((-4246868020804457450 ? 2642241753770508027 : (max(-8846410003988110960, -4246868020804457425))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] |= ((!-8546092933758554353) % ((var_0 ? ((min(-86, 20243))) : 195)));
                    var_14 = (min(((var_8 > (((((arr_4 [i_0] [i_0 + 1] [1]) != (arr_1 [3]))))))), (((arr_7 [9] [i_0 - 1] [i_0 - 1] [i_0 + 1]) <= (arr_7 [i_1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                    var_15 -= var_2;
                    var_16 = ((min(-4246868020804457468, ((min((arr_1 [i_2]), (arr_5 [i_2] [i_1])))))));
                    var_17 = (min(var_17, -8989967029499097447));
                }
            }
        }
    }
    var_18 = (min(5570380383559242013, 1));
    #pragma endscop
}
