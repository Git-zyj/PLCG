/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (((((((max((arr_0 [11] [11]), var_1))) > 97))) - ((((((arr_2 [i_0]) >= 54635))) | (var_5 & 30091)))));
                    var_14 = (((arr_3 [i_2]) << (var_3 + 961228101)));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_15 = var_10;
                        var_16 &= -344311392;
                    }

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_12 [i_2] [i_2] = ((((11534208360195047271 ? 40508 : (-32767 - 1))) < (((!(arr_1 [i_0]))))));
                        var_17 *= (arr_10 [4] [i_0] [8] [i_0] [4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
