/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = 15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(((~(max(1210609966, var_10)))), ((max((max(8826243109252273099, var_5)), ((min(65535, 9))))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 ^= (((((max(9, var_14))) ? ((min((arr_1 [i_2]), (arr_4 [i_2] [i_1])))) : (arr_3 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (arr_8 [i_0] [i_3] [i_1] [i_0]);
                                var_20 = (max(var_20, ((min((-10 && -15690), ((var_6 ? var_15 : (arr_3 [i_1] [i_1]))))))));
                                var_21 = -var_12;
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = (arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0]);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_22 = ((((((((var_6 ? var_6 : 18446744073709551615))) ? (var_5 < var_5) : (max(var_0, (arr_8 [i_1] [i_1] [i_1] [i_0])))))) ? (3797052003 >= 0) : (arr_0 [i_5])));
                    var_23 = (((((-1411896769 ? 66 : -15))) && (!1062385986)));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_24 |= ((((min((((var_4 ? 6189 : (arr_10 [i_0] [i_1] [i_6])))), (arr_11 [i_6] [i_1] [i_1] [i_0] [i_0])))) ? (min(((((arr_0 [i_1]) ? (arr_1 [i_1]) : var_1))), ((var_2 ? 18446744073709551615 : (arr_0 [i_0]))))) : ((min(1358641027, 1)))));
                    var_25 ^= ((((((arr_5 [i_6] [i_0]) << (((arr_17 [i_0] [i_1] [i_6]) - 13188921710735686922)))) > (((arr_14 [i_0]) ? (arr_14 [i_0]) : 1715349150)))) ? (max(var_10, -60)) : ((-951721870916424524 ? (arr_17 [i_0] [i_1] [i_6]) : var_2)));
                    var_26 -= (min(18446744073709551615, (((arr_10 [i_0] [i_0] [i_0]) ? ((0 ? -1 : 6608055740283444239)) : -951721870916424524))));
                }
                var_27 = (min(var_27, ((max(var_8, ((((arr_5 [i_0] [i_0]) ? 2936326269 : var_8))))))));
            }
        }
    }
    #pragma endscop
}
