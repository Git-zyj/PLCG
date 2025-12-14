/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] [9] = ((((((max(var_2, 107))) ^ (~0)))) != ((115 ? 18446744073709551615 : 1294547443)));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((((var_12 >= (55 % var_5))) ? ((((var_11 != (-9223372036854775807 - 1))))) : (((-1 ^ -1043062936849693037) ^ var_8))));
                    var_16 = (((1 + (min(var_12, -4573539118316334389)))) != (((((max(751674824, 13304)) > var_11)))));
                    var_17 = (((max(176, 1))));
                }
            }
        }
    }
    var_18 = (max(-1, 34));
    var_19 = (min(((((max(261632, 1)) >= var_7))), 0));
    var_20 = ((((min(32, 233))) - var_4));
    #pragma endscop
}
