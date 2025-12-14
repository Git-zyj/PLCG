/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (288230376151711743 | 51775);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [8] [8] [i_1] [8] [8] = ((520453453 ? 3774513843 : 32767));
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((-var_7 ? (max(3774513843, -10853)) : ((((arr_5 [i_1] [i_2] [i_3]) & (arr_5 [i_0] [i_2] [i_0]))))));
                    }
                }
            }
        }
        arr_10 [i_0] = ((((arr_3 [i_0] [i_0]) ? 838 : (((!(arr_7 [i_0] [i_0] [7] [i_0 - 1])))))));
    }
    var_11 = (!520453450);
    var_12 = ((182 ? 43110 : (max(43110, (2095661560 * 0)))));
    #pragma endscop
}
