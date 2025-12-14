/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] |= (min(((~(arr_7 [i_1 - 3] [i_1] [i_1 + 1]))), ((((0 * -13) < ((33554176 >> (-16887 + 16902))))))));
                    var_13 = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] = (((((var_3 == 6618766993077697886) & ((min((-32767 - 1), (arr_6 [i_4] [i_4] [i_3])))))) != (((!(arr_11 [i_3] [i_4]))))));
                var_14 &= (((arr_0 [i_4]) ? (41401 > -86) : ((var_0 | (arr_2 [i_3])))));
                arr_16 [i_3] [i_4] = (((((2921016044 ? (max(1, 127)) : (((var_3 ? 67108352 : 4)))))) ? ((((var_2 || ((min(var_2, 164))))))) : 6476474657282170573));
                arr_17 [i_4] = (((min(19, (arr_11 [i_4] [i_3]))) < (((-4111 == (arr_12 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
