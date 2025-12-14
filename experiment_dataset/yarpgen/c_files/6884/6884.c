/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((-(min(-var_13, (arr_3 [i_0]))))))));
                    var_20 = var_12;
                }
            }
        }
    }
    var_21 = ((((((127 ? 21 : 21)) != 111))) ^ (-1110884543 + var_1));
    var_22 &= var_7;
    var_23 *= ((((((1655831446 * var_0) <= (!0))))) >= ((((max(var_4, var_18))) ? 3714561893148017530 : var_2)));
    #pragma endscop
}
