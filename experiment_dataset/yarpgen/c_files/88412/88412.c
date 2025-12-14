/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_2 ? 4 : var_9))) - (var_10 - var_13))) - ((max(((251 ? 6 : var_8)), var_1))));
    var_16 = ((((((~4) - var_5))) ? -104 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (max((251 || 88), (max(((max(88, 255))), (max((arr_8 [i_0] [i_0] [i_1] [15]), 9))))));
                    var_18 = ((5482027929591773407 ? (arr_0 [24] [i_2]) : (((min(8, var_8))))));
                    var_19 ^= -58942;

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_20 ^= 65535;
                            arr_15 [14] [i_0 - 2] [i_0 - 2] [i_0 - 2] [14] &= (((((~((min(1, var_9)))))) ? ((max(((((arr_0 [i_0] [15]) > 12307279550371425089))), (max(10571, (arr_7 [12])))))) : var_3));
                        }
                        arr_16 [i_0] [i_0] [1] [i_1] [i_3 + 2] = (min(243, -85));
                        var_21 = ((6593 > ((((((-91 + 2147483647) << (1 - 1)))) ? (arr_14 [i_0] [i_2] [15] [0]) : (arr_1 [i_0 + 3])))));
                        arr_17 [i_1] [i_1] [i_2 + 1] [i_3] [i_3 + 2] = ((((((((arr_1 [i_0]) ^ var_3)) - var_11))) >= ((var_7 ? 247 : var_2))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
