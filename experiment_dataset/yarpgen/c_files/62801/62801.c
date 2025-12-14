/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_5 < (1 > var_3))))) ^ (((var_12 ? var_1 : -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_18 = (var_15 <= var_16);
                    var_19 += (arr_0 [i_0] [i_2]);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_20 = (-32767 - 1);
                    var_21 = (((-32767 - 1) ? (((min((-32767 - 1), 0)) % (arr_0 [i_0] [i_1]))) : (((((2147483647 ? (arr_5 [i_0]) : var_7)) * 32743)))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_10 [0] [i_1] [i_4] = max((((arr_4 [i_1] [i_1]) ^ (arr_4 [i_1] [i_0]))), ((((127 ? var_9 : (arr_6 [i_0] [13]))) ^ (1 < var_0))));
                    arr_11 [i_4] [i_4] [i_1] = (((((var_10 ? (((var_7 > (arr_8 [i_0] [i_0] [i_0] [i_0])))) : 244))) ? (((arr_9 [3] [3] [i_4]) % (arr_9 [i_0] [i_0] [i_4]))) : var_6));
                    arr_12 [i_4] = (arr_1 [i_0]);
                }
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    var_22 &= ((arr_4 [i_0] [11]) == ((((arr_5 [i_5 - 2]) != 856985556))));
                    var_23 |= ((244 ? 1 : (arr_5 [i_5 + 1])));
                }
                var_24 ^= (max(var_0, var_12));
            }
        }
    }
    var_25 = var_5;
    var_26 = var_16;
    #pragma endscop
}
