/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((var_7 == (max(-1568549073, 9695155865468955771))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((max(31, 255))) ? (!13366865109620644683) : (~0))));
                    var_20 *= (((arr_5 [i_0 - 1] [i_1 - 1] [i_1 + 1]) == ((((!((((arr_7 [i_0] [i_1] [6]) ? 59187 : 3833902067)))))))));
                }
            }
        }
    }
    var_21 = ((+(((!1) >> (8394315999068425257 & var_3)))));
    #pragma endscop
}
