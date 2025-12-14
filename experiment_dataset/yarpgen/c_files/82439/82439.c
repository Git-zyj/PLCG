/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 &= (arr_8 [i_0] [i_1]);
                    var_21 = ((!((((16384 ? (-32767 - 1) : var_15)) != (arr_6 [i_0] [i_0] [12] [i_0])))));
                    var_22 = ((!((((-32767 - 1) & 23796)))));
                    arr_10 [i_0] [i_0] [i_2] = (((131071 ? (-32767 - 1) : (arr_2 [i_1] [i_1] [i_0]))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = (max((((!(-32767 - 1)))), (arr_14 [i_3])));
        arr_16 [i_3] [i_3] = (((((~(-32767 - 1)))) | (max((~174), 4294967295))));
        arr_17 [i_3] = ((~(((8984753282207825620 ? 32767 : (-32767 - 1))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_20 [i_4] = (-32767 - 1);
        var_23 += ((((1794562284818861398 & (arr_18 [10]))) - 4294967295));
        var_24 = (min(var_24, ((max(17868, (!-8829886250811831514))))));
    }
    var_25 = (((((min(var_1, var_0))) ? (min(18446744073709551615, 2251799813423104)) : var_1)));
    #pragma endscop
}
