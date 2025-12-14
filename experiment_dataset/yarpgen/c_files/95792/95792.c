/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_7, (max((var_8 == var_4), (-32767 - 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = ((((11714797688015483421 ? -1357365474 : (arr_0 [i_0 + 1])))) > 6731946385694068195);
        var_15 = (max(var_15, (arr_1 [i_0 - 1] [i_0 - 1])));
        var_16 = ((-((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (((arr_4 [i_0] [i_0 - 1] [i_0 + 1]) == 13));
                    var_18 ^= 4294967276;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] = ((-((((arr_3 [i_3]) <= (((arr_7 [i_3] [i_3] [i_3]) << 0)))))));
        arr_12 [i_3] [i_3] = ((1 + (((max(1310698084, 1949009161)) + 187))));
    }
    #pragma endscop
}
