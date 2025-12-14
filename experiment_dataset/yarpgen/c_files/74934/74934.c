/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (min(var_11, var_7));
                var_12 ^= ((((!(arr_1 [i_0 - 1]))) ? (((~var_0) ? (((arr_0 [5]) ? 8779882238809802153 : 131)) : var_0)) : (((~(((!(arr_3 [i_1] [8] [i_0 - 1])))))))));
            }
        }
    }
    var_13 = min(((((!-8779882238809802151) - var_5))), -1365905273921010686);
    var_14 = (min(var_14, (((-var_9 - ((~(~-7617))))))));
    #pragma endscop
}
