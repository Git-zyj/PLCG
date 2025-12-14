/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(~0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_11 = ((((((((-(arr_5 [i_4] [i_1] [i_1] [i_1])))) * (min((arr_9 [8] [i_1] [i_3] [i_0] [i_3]), (arr_10 [i_0] [i_1] [i_2] [i_3] [9])))))) ? (((3795988893573860495 ? 1 : 1))) : (((var_2 * 0) * (arr_8 [17] [i_1] [i_0] [i_4])))));
                                arr_11 [i_0] [i_3] [12] [i_1] [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_3] [i_0];
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_12 = (max(var_12, ((min(((((arr_8 [i_0] [i_0] [16] [i_3]) ? (arr_8 [i_5] [i_5] [12] [i_3]) : (arr_8 [i_0] [i_1] [2] [i_3])))), (max(1, -3795988893573860486)))))));
                                var_13 = (1 == 220);
                            }
                            var_14 = ((~(min((arr_6 [i_0]), (arr_6 [i_0])))));
                        }
                    }
                }
                var_15 = (((((((1 ? 27129 : (arr_0 [i_0])))) ? ((18446744073709551596 % (arr_15 [i_0] [i_0]))) : (max(4413984309192511685, 1)))) & (((min(1, -9177))))));
                arr_16 [i_0] = ((((((arr_12 [i_0]) / (arr_1 [i_0])))) ? -var_5 : ((3795988893573860500 ? -20321 : 1))));
                var_16 += (arr_15 [i_0] [i_0]);
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_17 *= (min((min((((4078076744397906825 ? 3795988893573860492 : (arr_4 [4])))), (min(64969, 6060005576103635993)))), ((((arr_17 [i_6] [1]) ? -var_4 : ((96 ? 60314 : 193)))))));
        arr_19 [i_6] = (arr_4 [i_6]);
    }
    #pragma endscop
}
