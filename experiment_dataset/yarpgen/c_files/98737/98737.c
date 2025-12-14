/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 *= ((~((~(arr_5 [i_1] [i_0 + 2] [i_2])))));
                    var_17 = var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            {
                var_18 = (min(var_18, (0 >= -28179)));
                arr_16 [i_4] = var_12;
                var_19 = ((~(((arr_12 [i_4 + 2] [i_4 - 1] [i_4 - 1]) ? (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 4]) : 2147483648))));
                var_20 ^= (((((min(var_2, (arr_13 [i_4] [i_4]))) ? ((-87 ? 111 : var_8)) : -7256))));
                var_21 = (((((arr_4 [i_3] [i_3] [i_4]) < (arr_4 [i_3] [i_3] [i_4 + 1]))) ? (((arr_4 [i_3] [4] [i_4]) ? (arr_4 [i_4 - 1] [i_4] [12]) : (arr_4 [i_3] [i_3] [i_4 - 2]))) : (arr_4 [i_3] [i_4 + 2] [i_4 - 4])));
            }
        }
    }
    #pragma endscop
}
