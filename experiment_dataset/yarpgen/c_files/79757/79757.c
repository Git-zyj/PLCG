/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((-(arr_0 [i_0])))) ? (arr_3 [i_0] [i_0]) : ((-(arr_2 [i_0] [i_0])))));
                var_15 = (min(((+(((arr_0 [2]) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_0]))))), (arr_1 [i_0])));
                var_16 = (((arr_2 [i_0] [i_0]) ? ((((!(arr_3 [i_0] [i_0]))))) : (((arr_0 [i_1]) - (arr_0 [i_1])))));
            }
        }
    }
    var_17 = (~var_3);
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_19 = (~4040726491);
                    arr_13 [i_2 - 1] [i_3] = ((~((-(arr_0 [i_2 + 1])))));
                    var_20 = min(((((arr_8 [i_2 + 2] [i_3]) ^ (arr_3 [i_2 + 2] [i_3])))), ((((((arr_3 [i_2 + 1] [i_3]) ? (arr_5 [16]) : (arr_2 [i_2] [i_3])))) ? ((-(arr_0 [i_2]))) : (((min((arr_10 [i_3] [i_3]), (arr_1 [i_4]))))))));
                }
            }
        }
    }
    var_21 = ((((max(-29566, 255))) ? 9223372036854775807 : (min(240, ((var_13 ? (-9223372036854775807 - 1) : var_10))))));
    #pragma endscop
}
