/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((var_13 ? var_9 : var_12))) ? ((var_12 ? var_15 : var_9)) : 127)), ((var_5 ^ (!var_17)))));
    var_20 = (min(var_9, (4294967295 * 2147483647)));
    var_21 ^= (var_15 ? var_11 : ((max(var_4, (!-703101620772757044)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = ((3967205352707746263 ? (min(-105, var_17)) : (((var_17 & var_5) | -107))));
        var_23 -= (((arr_1 [i_0] [i_0]) / var_1));
        var_24 = var_18;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_25 -= ((!(((-var_16 ? var_16 : (2147483667 | 7349545418827864959))))));
                    arr_9 [3] [3] [3] [i_3] = (2147483648 && 1);
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (!var_13)));
                    arr_12 [i_0] [i_1] [i_2] [i_4] [i_0] [i_0] = (!var_17);
                }
                var_27 = (arr_5 [i_0] [i_1] [i_2]);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_28 = ((363644744 / (-127 - 1)));
                    var_29 = ((82 - ((~((min(104, 183)))))));
                    var_30 = (max(var_3, (((arr_13 [5] [i_1] [i_2] [i_5]) ? 2253644714 : 65535))));
                }
                var_31 = var_10;
            }
            var_32 = (((14045826946295664644 / 3974680171) > (11251515662518809061 || 2147483659)));
        }
    }
    #pragma endscop
}
