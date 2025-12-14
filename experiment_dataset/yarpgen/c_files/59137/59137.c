/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 |= (!85);
    var_17 = ((!var_1) != 17996806323437568);
    var_18 = (max(var_18, var_2));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 -= 3096418963318403503;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = (max(var_20, ((min(((-(arr_4 [i_1] [i_0 - 1]))), (~85))))));

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] = 1934927347;
                arr_9 [i_0] [i_2] = var_4;
            }
            for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] = ((!((min((min(3096418963318403494, 85)), (-1329983003 | 9006099743113216))))));
                var_21 *= (min(73, (min(-893655387, 4032))));
            }
            for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_22 ^= ((!((min((arr_4 [i_0 + 2] [i_4 + 1]), ((-(arr_12 [6] [6] [i_4] [i_4]))))))));
                arr_17 [1] [i_0] [i_0 + 1] [i_0 + 1] &= var_12;
                arr_18 [i_0] [i_0] [i_1] [i_0] = (max(((max(((var_10 && (arr_6 [i_0] [i_0] [i_0] [i_0]))), 1))), ((((max(var_13, 19))) ? var_4 : (!15808925693193461209)))));
            }
        }
        arr_19 [i_0] = 65516;
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        arr_23 [i_5] = var_7;
        var_23 = (min(var_23, ((max((~4798458314603241490), ((max(5865299242078167688, var_7))))))));
    }
    #pragma endscop
}
