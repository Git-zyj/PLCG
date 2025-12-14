/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((((((((2749590890848628473 ? 8 : 161))) ? -10 : -12))) ? -11 : ((-12189 ? ((11 ? 96 : -10)) : -10680))));
                    var_17 = (-11 ? ((-((min(-29309, 24000))))) : (((170 ? 12192 : 11))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((~(max(-1, 3393709619272812467))));
                    var_18 = (max(((max(11, 65527))), ((96 ? 9223372036854775807 : 2593406337036345165))));
                }
            }
        }
    }
    var_19 ^= (min((((max(125, -24)))), var_14));
    var_20 = (min((~var_6), ((110 ? var_10 : ((min(-12163, 1)))))));
    var_21 = var_0;
    var_22 = (~-228);
    #pragma endscop
}
