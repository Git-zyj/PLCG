/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += -5142484587618479281;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0 + 2] [i_2 - 1] [i_2] [i_3] [i_4] = (((max(((-5142484587618479284 ? var_9 : var_4)), var_7))) ? -5142484587618479281 : (max(((153 ? 153 : -174370420020362489)), ((98 ? 95 : -16)))));
                                arr_16 [i_4 - 3] [0] |= ((30954 ? 126 : -1));
                            }
                        }
                    }
                    var_14 = max((max((30942 || 8011681741790512551), 1642772862)), 50482);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_15 = ((var_5 ? (((var_7 ? 1642772849 : var_5))) : (((arr_1 [i_1]) ^ var_1))));
                        arr_19 [1] [i_1 - 2] [i_2 - 1] [10] = (((arr_14 [i_0 + 3] [i_1 - 1] [i_1 - 1] [i_2 - 1]) % var_6));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] = 8011681741790512551;
                        var_16 = (max(var_16, ((var_7 ? (!var_2) : (~var_9)))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_17 ^= 126;
                            arr_29 [i_0] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_7] [i_2 + 1] = (-32 ? 1854988020 : (!var_2));
                            var_18 += min((((-92 ? 154 : -1642772849))), (min(4824304044127440455, var_0)));
                            var_19 -= (253 ? ((min(var_12, 63))) : -1300823541);
                        }
                        var_20 = (min(var_20, (((var_5 ? -92 : 251)))));
                        arr_30 [2] [2] [2] [i_7] [2] = -var_10;
                        var_21 = ((((min(((-11962 ? 16 : var_11)), ((-1 ? -9223372036854775805 : -759195968553596447)))) + 9223372036854775807)) >> (var_7 - 1979544660));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = 1642772848;
                        var_22 = ((((min(((min(1799549146, var_6))), (min(5142484587618479280, -1))))) ? 12 : (((((((-127 - 1) ? -5192662671656023575 : -7792002646666175955))) && (!63985))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
