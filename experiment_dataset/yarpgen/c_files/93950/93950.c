/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = 4294967292;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 -= ((!((!((max(7899, -7885)))))));
                                arr_14 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = (max((((arr_8 [i_0] [4] [i_0]) ? (-9223372036854775782 | 118) : -220)), (((((((arr_0 [i_4]) ? (arr_7 [i_0] [i_0] [i_0]) : 28))) && (4147936253 || 7885))))));
                                arr_15 [i_0] [i_0] = (!-7885);
                                var_12 = ((!(((~(arr_12 [i_0] [i_4] [i_4]))))));
                            }
                        }
                    }
                    var_13 -= (((((max(4246717177124294305, 4246717177124294305)))) ? ((((((arr_6 [i_1]) ? -27757 : 7886))) ? (((~(arr_3 [i_1])))) : (min(140737488355328, 7901)))) : 11));
                }
            }
        }
    }
    var_14 = (min(((3707659815 ? (-7858 && 0) : ((-96 ? 6248036139049196199 : 75)))), 7885));
    #pragma endscop
}
