/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -3859068790137745121;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((~(!1)));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_18 = -16;
            var_19 &= (((((((arr_1 [i_0]) ? 1 : var_7))) || -26)));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_20 += ((((((arr_3 [i_1 + 1] [1]) ? 1 : (arr_3 [i_1 + 1] [16])))) ? ((max(var_8, 1))) : (arr_3 [i_1 - 2] [2])));
                arr_9 [i_2] [i_0] [i_0] [i_0 - 3] = 2127970175325134962;
                var_21 = ((3 - ((((((arr_7 [i_1] [i_2]) ? 1 : -2127970175325134962)) == (arr_7 [i_0 - 2] [i_1 - 1]))))));
                arr_10 [i_0] [i_0] = (max(0, -var_1));
            }
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_22 = -2055957254;
        arr_14 [i_3 + 1] [i_3] = var_15;
        var_23 += (~(-126 < 24));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_24 |= 1261091301;
        var_25 ^= -5;
    }
    #pragma endscop
}
