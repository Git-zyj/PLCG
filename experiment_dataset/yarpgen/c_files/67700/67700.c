/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((5195295398820644332 >> ((((((var_0 ? var_12 : 13835058055282163712)))) + 38))));
    var_15 = ((119 ? 3758096384 : (((-(29 / 127))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (max((1617264384285614395 ^ var_12), ((((arr_2 [i_1 + 1] [i_0]) && 10826809204129087117)))));
                arr_4 [i_1] = var_1;
                arr_5 [i_0] [i_0] [i_1 - 3] = (max(((min(29, (arr_0 [i_1 - 3])))), 62));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 |= (((120 << (262136 - 262123))));
                            arr_13 [i_2] [i_1] = (max((!12), 11880375477809577243));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = (((((((((arr_7 [i_3] [i_3] [6] [i_3]) == (arr_9 [i_0] [i_1 + 1] [i_2] [i_2] [i_3]))))) != -6566368595899974373)) ? ((-1617264384285614396 | (arr_12 [i_1 - 4] [i_1 + 1] [i_1] [i_1 + 1]))) : (108 ^ 56)));
                            arr_15 [i_2] = ((var_9 ? (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2]) ? (arr_8 [i_1 - 3] [i_1 - 1] [i_1 - 4] [i_1 - 2]) : (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 2]))) : (((((arr_10 [i_2] [i_2]) <= 119))))));
                            var_18 = ((((min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1])))) << (((((((arr_11 [i_1] [i_3]) >= 48)) ? 31 : (((arr_10 [i_2] [i_1 + 1]) << (var_7 - 8543026588136908106))))) - 18))));
                        }
                    }
                }
                var_19 -= ((((((-1617264384285614395 & (arr_12 [i_1] [i_0] [i_1] [i_1]))) ? var_7 : ((~(arr_7 [i_0] [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_20 = ((((min(-8687199972134873903, ((262136 ? -7830905613335956000 : 29))))) ^ 12417696153090814746));
    #pragma endscop
}
