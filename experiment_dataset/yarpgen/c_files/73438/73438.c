/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 18446744073709551615;
    var_16 = 4294967282;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_6 [i_1 + 2] [i_1 - 2]) << (8 - 8))) != ((~(arr_6 [i_1 - 3] [i_1 - 1])))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] &= var_5;
                                arr_14 [i_1] [i_1] [1] = (var_4 == 76);
                            }
                        }
                    }
                    var_18 = (max(var_18, (max((max(-4958167441825506824, (max(var_2, 2647279085524371742)))), (max((((var_8 << (var_12 - 30672)))), (7290606687646519054 % 1)))))));
                    arr_15 [i_1] [i_0] [15] [i_2] = ((((((max((-32767 - 1), var_2)) >= (max(var_3, var_2)))))) | 3536716241729327210);
                    var_19 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
