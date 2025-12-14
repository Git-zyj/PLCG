/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((5381306155763275649 ? 3105183130 : (-3705965428168449783 != 4088)));
    var_16 = (max(var_16, 4065));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_17 = (max(var_17, (arr_0 [i_1])));
                    var_18 ^= (((((((((arr_6 [i_2] [i_0]) ^ (arr_0 [i_0])))) ? (arr_5 [i_2]) : 4090))) ? -4084 : ((((arr_3 [i_0 + 1] [i_2]) != (arr_6 [i_0 + 1] [i_1]))))));
                    arr_8 [i_0] [i_1] [i_2] = (((((((arr_0 [i_0 + 4]) == (arr_7 [i_0] [i_1] [i_2])))) << (((arr_5 [i_1]) + 1403805076)))));
                    var_19 = (((885417979 != (arr_3 [i_0 + 1] [i_1]))));
                }
                arr_9 [i_0] = (min(-4103, 4085));
            }
        }
    }
    #pragma endscop
}
