/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = max(((max(32767, -20399))), (min(8583979232495593535, 8583979232495593535)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((((8583979232495593535 << (-12782 + 12836))) << (((max(-27278, 3418853697768821958)) - 18446744073709524297))));
                    var_14 |= ((9862764841213958080 != (max(9862764841213958100, -2081))));
                    arr_7 [i_0] = ((((((-1049 & 15126491176722015557) && ((max(4160354400424420370, -9275))))))) % (((max(16137657588884975760, var_7)) & (-28693 & 12974))));
                }
            }
        }
    }
    var_15 = (var_3 != var_10);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = (((((var_6 >> (8583979232495593535 - 8583979232495593528)))) || 3531));
        arr_12 [6] = (((arr_8 [i_3 + 1] [i_3 + 1]) / (arr_8 [i_3 - 1] [i_3 + 1])));
    }
    #pragma endscop
}
