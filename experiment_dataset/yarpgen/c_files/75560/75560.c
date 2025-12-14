/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 -= (~(((((arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 2]) + 2147483647)) >> (3000295702425092313 - 3000295702425092304))));
                var_17 = (((arr_1 [i_1 - 3] [i_0]) ? ((((min(2, 4051666666))) ? (!13535) : (((arr_2 [1] [i_0] [i_0]) + var_11)))) : (((!(((8739698011590657508 ? var_14 : (arr_2 [i_0] [i_1] [i_1 - 3])))))))));
            }
        }
    }
    var_18 = ((((((4051666669 >> (32763 - 32746))) >> (((min(3396928503, 135)) - 123)))) < var_0));
    var_19 |= var_7;
    #pragma endscop
}
