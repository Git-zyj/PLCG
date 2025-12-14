/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((!-20234) ? ((((arr_7 [22] [i_0]) == 20256))) : ((((arr_1 [i_1]) || ((max(2, var_2))))))));
                var_17 -= (((((arr_5 [i_0] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_0] [i_1])))) ? 255 : (max((var_0 | 2143611641), 664322190)));
                var_18 = ((((max((max(var_10, -3789606498566202308)), 1))) && 71));
                arr_9 [i_0] = arr_6 [i_0] [i_0];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_19 = (((arr_6 [i_2] [i_3]) ? (((arr_12 [i_2] [i_2]) << (778129808475971070 - 778129808475971053))) : (((((max(var_8, 4463986673547047908))) ? var_10 : ((((arr_6 [i_3] [i_3]) != (arr_12 [i_3] [2])))))))));
                arr_14 [i_3] = var_12;
                arr_15 [i_3] = -8081625135533680009;
                var_20 = ((((((((-20234 ? (arr_11 [i_2]) : (arr_0 [6] [6])))) ? (((3733129489 / (arr_6 [i_2] [i_3])))) : (((arr_0 [i_2] [i_2]) ? (arr_4 [i_2] [i_3]) : var_6))))) ? -20239 : 0));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_21 [i_3] [i_2] [i_2] [i_2] = (max(((~(137 ^ 7386450465268130974))), (((((((arr_12 [0] [i_4]) ? var_8 : (arr_2 [7] [i_3])))) ? var_3 : (arr_16 [i_3] [i_4] [i_3]))))));
                            var_21 = (min(var_21, (((((max(147, 8081625135533680031))) && ((!(arr_6 [i_2] [i_4]))))))));
                            var_22 = (arr_10 [i_4]);
                            var_23 = (max(var_23, (arr_4 [i_5] [1])));
                        }
                    }
                }
            }
        }
    }
    var_24 = 0;
    #pragma endscop
}
