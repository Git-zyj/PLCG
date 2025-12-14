/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (max(((max((arr_3 [i_0 - 1] [i_0]), (arr_3 [5] [i_0])))), (max(2336304280, var_14))));
                arr_4 [i_0] [7] [i_0] = ((((((arr_0 [6] [i_0]) ? (((802822321 && (arr_0 [i_0] [i_0])))) : (arr_2 [i_0] [i_1] [i_0])))) ? var_8 : (arr_0 [i_0 - 3] [i_0])));
                var_23 = ((2706510990 ? (min(965758549263966322, 3578692098)) : ((((arr_2 [i_0] [i_0 - 3] [3]) ? -130109579 : (arr_2 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_24 = (min(var_24, (((((((var_17 <= var_2) >= 9234))) == var_7)))));
    #pragma endscop
}
