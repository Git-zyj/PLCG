/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_10;
    var_18 = (min(21537, (+-21537)));
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                var_20 ^= (var_5 % (arr_1 [i_0] [i_1]));
                var_21 = (!-10);
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_3] = (var_4 ? -21555 : 45);
                var_22 = (max(var_22, (arr_7 [i_0] [i_1] [i_3])));
                arr_12 [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_1] [i_3]);
                var_23 = (((arr_2 [i_0] [12] [12]) != 11412));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_17 [i_0] = (arr_0 [1]);
                arr_18 [i_0] [i_0] [i_4] = ((((5301142698745174655 & (arr_9 [i_0] [i_1] [i_1] [i_4]))) == (arr_6 [i_0] [i_1] [i_4])));
                var_24 = (arr_16 [i_0] [i_1] [i_4]);
                var_25 = 21543;
            }
            arr_19 [i_0] = (arr_0 [i_0]);
            var_26 = (((arr_4 [i_0] [i_0] [i_1]) - (arr_4 [i_0] [i_0] [i_0])));
        }
        arr_20 [i_0] [i_0] = (max(((max(((max(21554, 11))), var_14))), (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
