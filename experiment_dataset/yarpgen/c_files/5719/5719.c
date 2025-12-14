/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_10, -1576));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_15 = -var_12;
            var_16 = (min(var_16, 1570));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_17 += ((65535 ? (min(((((-9223372036854775807 - 1) > 65535))), ((9223372036854775793 ? 66584576 : 65535)))) : (max(((-127 ? -123 : 1570)), (arr_4 [i_0 - 3] [i_0])))));
            arr_8 [i_0] [4] [i_2] |= (min(6637038404463080402, 27372));
            arr_9 [i_0 - 2] [2] |= (((2134158097 & 529685883) & (arr_4 [i_0 + 2] [i_0 + 2])));
            arr_10 [i_0] = (2134158097 ? ((((((arr_7 [i_0] [i_0] [i_2]) ? 10054468940326714542 : 1))) ? -10648823444014323865 : 3533208831)) : ((min((((arr_3 [i_0] [i_2 - 1]) ? 2134158097 : 2134158097)), (max(1, -1250596627))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_20 [i_5] [i_4] [i_5] |= 243;
                        var_18 = var_8;
                        var_19 -= -31;
                        arr_21 [i_0] [i_0] [17] [i_4] [i_5] [i_5] = 252;
                        var_20 = (min(var_20, var_8));
                    }
                }
            }
        }
    }
    #pragma endscop
}
