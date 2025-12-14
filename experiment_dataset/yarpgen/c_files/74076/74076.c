/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 + (max(-98837113, 4914003291787004307))));
    var_16 = var_4;
    var_17 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((arr_2 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] = (((var_9 != (arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 2]))));
                            var_19 = ((219 ? (max((arr_6 [i_2 + 2] [i_2 + 1] [i_2]), (arr_6 [i_2 + 1] [i_2 - 1] [i_1]))) : (((((247 ? (arr_4 [i_2] [i_2]) : 9))) ? -98837113 : (arr_3 [0] [i_2 + 2] [i_2])))));
                            arr_10 [8] [i_2] = (min(((((((arr_7 [i_0] [i_1] [1]) ? 1 : (arr_1 [i_0] [i_0])))) ? (arr_3 [i_0] [i_2] [i_3]) : (~var_6))), (((((((arr_5 [6]) % (arr_4 [i_0] [i_2])))) ? (min(-98837114, 13)) : (arr_0 [i_3] [i_2 + 2]))))));
                            var_20 = var_4;
                            arr_11 [i_3] [1] [i_0] [i_0] [i_3] &= -98837113;
                        }
                    }
                }
                var_21 = (min(var_21, (((min((-32767 - 1), (((98837113 <= (arr_1 [i_1] [i_0]))))))))));
                var_22 = 1806931854;
            }
        }
    }
    var_23 = (((max((min(402109357, var_12)), var_3))) ? (max((~32767), (-32767 - 1))) : (((!((min(var_12, var_9)))))));
    #pragma endscop
}
