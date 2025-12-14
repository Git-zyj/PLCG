/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [18] = (min(((max(-432189218, (min((-2147483647 - 1), 3712792039))))), (min(8436751283801395667, 7211))));
                    arr_9 [7] [i_0] [i_2] = (min((min((min(2147483619, 1850391211181263715)), (min(36028795945222144, 36028795945222144)))), ((min(((min(37059, -651166877))), (-9223372036854775807 - 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (min((max(-651166876, (min(-1849748483, 4127617877)))), 3221225472))));
                                var_14 *= 0;
                                var_15 = (min((min((min(651166880, 18410715277764329456)), ((max(1, -1849748483))))), (min(18410715277764329462, 18410715277764329463))));
                            }
                        }
                    }
                }
                var_16 = (max(var_16, 18410715277764329478));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] = (min(651166893, 61419));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = max(((min(65970697666560, -7046779808694230198))), 18410715277764329449);
                                arr_27 [i_0] [22] [i_5] [i_5] [i_5] [i_5] = (min(((min(((min(-651166876, 1))), (max(0, -9223372036854775792))))), 16459299926664607817));
                                var_17 = (max(((max(((min(4104, -651166875))), (min(1, -8701966832241904988))))), (max(((max(1, -651166873))), (max(-651166875, 36028795945222155))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = max(7707254327783592720, 651166879);
    var_19 *= 61419;
    #pragma endscop
}
