/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_12 = ((((max((arr_8 [8] [i_1] [8] [i_3]), ((2376603060 ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : 14))))) ? var_9 : var_3));
                            var_13 = -4294967270;
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (((((((min(4294967270, (arr_0 [i_1] [i_0])))) ? var_9 : -1584551077))) ? 195 : ((-((4294967270 >> (var_6 - 142)))))));
            }
        }
    }
    #pragma endscop
}
