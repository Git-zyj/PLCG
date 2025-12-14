/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? 1 : 1));
    var_14 = ((2199023255552 ? (((((1 ? 1 : 1))) ? ((1 ? -19 : 0)) : (((9097001873014036850 ? 1854856443 : (-9223372036854775807 - 1)))))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((-4972 ? (((12468441086517471236 ? 25442 : 248048678))) : ((-1535843070723875867 ? 7400771776874320357 : 15872)))), (((2292736682 ? ((1 ? 1 : 14022)) : (min(1574247578, -107)))))));
                var_15 = (min((min(((min(1, 4))), ((0 ? 1 : -646634371371329703)))), ((max(4, 3195196088)))));
            }
        }
    }
    var_16 = var_4;
    var_17 = (min((var_4 << 8), ((max((min(9223372036854775807, 65535)), (2292736682 | 13120))))));
    #pragma endscop
}
