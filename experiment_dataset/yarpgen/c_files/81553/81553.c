/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (64 * 164);
        arr_3 [i_0] = -167;
    }
    var_19 = ((~(min((((3735945725 ? 1420157149848850419 : -900052452))), (min(0, 12574474731134756141))))));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_20 = 0;
                var_21 = 6433843867152149483;
                arr_8 [i_2] = (max(((max(-0, (min(-904258711, 64))))), ((-(min(-7312939145958697545, -6433843867152149484))))));
                arr_9 [i_1] &= (max((((!(((0 ? 33542 : -10629)))))), 16406401301252301287));
            }
        }
    }
    #pragma endscop
}
