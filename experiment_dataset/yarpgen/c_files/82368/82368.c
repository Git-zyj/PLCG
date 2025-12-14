/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((6590305007617722705 / -646868670120648359) * (((646868670120648358 / -646868670120648359) * (-646868670120648341 * 0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [10] = 646868670120648359;
                var_19 -= (max(-25, -31303));
                var_20 = (255 ? 11031 : -646868670120648341);
                var_21 = (((5776 & 646868670120648357) ? (max(646868670120648357, (-63 | -1443506660541992549))) : (max((((-29850 ? var_12 : 31306))), (-1482455623857898508 ^ var_1)))));
                arr_5 [i_0 + 1] [i_1] [3] |= -25;
            }
        }
    }
    var_22 = 646868670120648362;
    var_23 = ((((((-63 && -85) ? (!31284) : (var_2 && var_5)))) ? (min(17106400980404380895, ((max(4294967295, 118))))) : ((max(var_17, (2720971359 && 1912155673677851400))))));
    #pragma endscop
}
