/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 ^= (((((((4323455642275676160 ? 6461633100131331783 : -6461633100131331787)) == (904200305 > 3390766974)))) == (((!(((24053 ? 8 : 131064))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (~((~((11 ? 1 : -101)))));
                                arr_12 [i_0] [i_1] = ((-((((~241) == ((904200321 ? 21005 : 6461633100131331767)))))));
                                var_14 = -6888935998961320360;
                                var_15 = ((!((((((1437419315529289872 ? -24248 : 1081616346))) ? (!488) : (~-1))))));
                                var_16 = -32037;
                            }
                        }
                    }
                }
                var_17 &= 53919;
            }
        }
    }
    var_18 = ((~(((-67 >= (19 - 6461633100131331803))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                var_19 = ((-(((((0 ? 100 : -67))) ? ((2312110570 ? -502441352 : 6461633100131331803)) : (~1)))));
                arr_20 [i_5] [i_6] = -8033;
                var_20 = ((!(((~(-1548945986 | 1100416889))))));
                var_21 = ((~(((8032 ? -8032 : -53)))));
                var_22 = 7724921067744609658;
            }
        }
    }
    #pragma endscop
}
