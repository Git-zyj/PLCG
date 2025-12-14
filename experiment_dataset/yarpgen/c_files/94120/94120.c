/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 2580874894210855573;
    var_14 = (min(var_14, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_4 [1] [7] [7])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = -2147483638;
                                var_17 = (max(0, ((10704474133901472048 ? (((max(-4, var_6)))) : 5658986449996271087))));
                                var_18 = (max(var_18, (((6 > (min(64046, ((2088800697 ? 1 : 1)))))))));
                                arr_18 [i_1] [i_0] [13] = ((((((!(arr_6 [i_0] [i_0]))) && (arr_8 [i_0] [i_1] [i_1]))) || (arr_11 [i_0] [i_1] [i_2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
