/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((13228607879475439075 + (4408 ^ 2546936182629162777)));
                            arr_10 [i_0] [i_0] [6] [i_0] = ((!(((4074227340374202472 ? 15899807891080388839 : -8)))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = -33;
                arr_12 [i_0] |= ((7 ? 126 : (((!(!-3387018915775594578))))));
                arr_13 [i_0] [i_0] [i_1] = (((-25050 + 45907) - (arr_6 [i_0] [i_0] [5])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                var_14 -= ((-((346728304693519366 ? 16384 : -127))));
                var_15 = -15899807891080388838;
                arr_18 [i_4] = ((32767 ? -14667 : (arr_17 [i_4])));
                arr_19 [14] &= var_11;
            }
        }
    }
    #pragma endscop
}
