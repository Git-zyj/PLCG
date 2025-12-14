/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] [i_0] = 69;
                arr_6 [i_0] [2] = ((104 ? (((((-9223372036854775783 ? var_6 : 222500034))) ? (max(-526199491, -4120891025779340670)) : (((var_10 ? var_3 : 260046848))))) : (arr_2 [i_1 + 3])));
            }
        }
    }
    var_16 = (min((max(var_6, ((var_6 ? var_13 : var_15)))), var_7));
    var_17 = -733323307;
    var_18 = ((~(max(((138 ? -2751 : -401007304228015769)), (~-1989275666)))));
    #pragma endscop
}
