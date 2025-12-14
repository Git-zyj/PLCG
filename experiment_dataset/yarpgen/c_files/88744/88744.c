/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 *= -23257;
                            var_18 = (min((min(2061805494, (2 <= 2))), (((!(arr_1 [i_0]))))));
                            var_19 = (i_0 % 2 == 0) ? (((((((arr_1 [i_0]) ? -1466 : (arr_2 [i_0] [i_0])))) ? ((min((((arr_2 [i_0] [i_1]) >> (((arr_3 [i_1] [i_0]) - 9401)))), ((min((arr_8 [i_0]), (arr_5 [i_0]))))))) : (max((min(15219965534352438194, 3226778539357113422)), 15219965534352438217))))) : (((((((arr_1 [i_0]) ? -1466 : (arr_2 [i_0] [i_0])))) ? ((min((((arr_2 [i_0] [i_1]) >> (((((arr_3 [i_1] [i_0]) - 9401)) + 19237)))), ((min((arr_8 [i_0]), (arr_5 [i_0]))))))) : (max((min(15219965534352438194, 3226778539357113422)), 15219965534352438217)))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (((((~(max(-1695302284, (arr_4 [i_0] [i_1] [i_1])))))) ? (arr_1 [i_0]) : (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_20 *= (max((((!((min(var_2, (arr_13 [i_4] [i_4]))))))), 2307502972));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_21 = (max((min(0, 3226778539357113405)), var_2));
                            arr_24 [i_5] [i_6 + 1] [i_5] [i_5] = ((~(arr_22 [7] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [20])));
                            var_22 = 47;
                            var_23 = (max(var_23, 163));
                        }
                    }
                }
                arr_25 [i_5] = ((!((min((((65535 == (arr_23 [i_4] [i_4] [i_5] [i_4] [i_4])))), 3)))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((71 | ((min((arr_15 [i_8 - 2]), -20440))))))));
                            var_25 *= arr_19 [i_8 - 1] [i_8 - 1];
                            arr_31 [17] [i_5] [i_5] [i_9] = (!71);
                            var_26 = (arr_14 [i_8 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(1987464316, ((min(29294, 1)))));
    #pragma endscop
}
