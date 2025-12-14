/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= -85;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((min(-1654718155, ((0 ? var_1 : 574598403360878543))))) ? 574598403360878515 : (((((max(1, 130048))) ? (~-2073515151) : ((-4428128346894507049 ? -1 : (-127 - 1)))))));
                var_19 |= (-103 ? ((17872145670348673106 ? 4925968805966161476 : 215)) : (!7));
            }
        }
    }
    #pragma endscop
}
