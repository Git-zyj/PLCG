/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_2] = (((((-114 ? (236 != 238) : 20))) ^ (3453946987860382323 + 151)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = 7663750293164148934;
                            arr_13 [i_2] [i_1] [i_1] [i_1] = ((-((1 ? 100 : ((2975325842 ? -84 : 2975325842))))));
                            var_17 = ((!((((max(34384, -8760166977320793791)) | ((max(4174799566, -2039445638))))))));
                        }
                    }
                }
                arr_14 [i_1] = ((-1319641453 != (3647 + 136)));
            }
        }
    }
    var_18 = var_2;

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_19 = 433655992;
                    var_20 = (max(17143201946567597314, (((max(2916602912, 234))))));
                }
            }
        }
        arr_23 [i_4] [i_4] = ((-(0 <= -62)));
    }
    #pragma endscop
}
