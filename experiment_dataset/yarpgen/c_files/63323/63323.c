/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [4] = max(((((-32766 % (arr_0 [i_0]))))), var_15);

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_18 = (max(var_18, ((max(32762, -553855326)))));
            var_19 += arr_1 [i_1 - 1];
            arr_5 [i_1] = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_8 [i_1] = (max((((arr_6 [i_0] [i_1 + 3] [i_2] [i_1]) >> (((arr_6 [i_0] [i_1 + 3] [i_2] [i_1]) - 86)))), 1));
                var_20 = ((((((var_14 ? 9 : var_1)) % (((arr_4 [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_4 [i_1] [i_2])))))));
                var_21 = arr_3 [i_0] [1];
                arr_9 [i_1] [i_2] [i_1 + 1] [i_1] = max((155 & 30), (arr_7 [i_0] [5] [4]));
                var_22 = (max((((((((arr_0 [i_0]) || var_8))) >> (((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 - 1]) - 83))))), (arr_6 [2] [0] [i_1] [i_2])));
            }
            var_23 = 7700285668937103396;
        }
    }
    var_24 &= var_10;
    var_25 = 4009274156;
    #pragma endscop
}
