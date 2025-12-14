/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((((var_9 + 2147483647) >> (var_5 - 112512611)))) ? (var_11 / 986021968) : 172672247))) ? (((min(var_12, (172672262 && var_7))))) : ((((max(1, 1502499414))) ? var_7 : (-4189230099564670650 - 986021968)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = 986021975;
                    arr_9 [i_0] [16] [i_1] = (arr_5 [i_1] [i_2]);
                    arr_10 [i_1] [i_1] [i_1] = (min(((-(arr_3 [i_0 + 2] [i_0]))), (((var_4 ? 1 : 63)))));
                    var_15 = (((((var_8 ? ((~(arr_6 [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_0] [9] [i_0 + 1])))) ? ((((arr_6 [i_1] [9] [i_0]) && (((-(arr_2 [i_2]))))))) : (min(((-(arr_5 [i_2] [i_0]))), var_3))));
                }
            }
        }
    }
    var_16 = (max(((((max(2792467881, 3050833029)) - var_3))), (min((-4189230099564670632 | 18446744073709551600), var_9))));
    #pragma endscop
}
