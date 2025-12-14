/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((-((11516207463979469461 ? 6930536609730082154 : 4294967295))))) ? (((((6930536609730082155 ? 1 : 2720)) << (-3435667055512331992 == -12)))) : ((-1095318341963096684 ? (arr_1 [i_1]) : (((arr_3 [i_1] [i_0]) - (arr_0 [0]))))));
                var_20 = ((11 ? 11516207463979469461 : 129));
                arr_6 [i_0] [i_1] = (((arr_4 [i_0] [i_1] [i_1]) ? var_16 : (min(-12, 11516207463979469462))));
                var_21 = ((11516207463979469461 ? 6334663484239811823 : 16756682380877680677));
                var_22 = ((((min((((!(arr_4 [i_0] [i_1] [i_0])))), 127))) == ((((30720 ? (-127 - 1) : 11249757973786995892))))));
            }
        }
    }
    #pragma endscop
}
