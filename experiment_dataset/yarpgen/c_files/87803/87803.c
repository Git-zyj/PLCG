/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(2737810910, ((48 ? 1 : -5981337531409036164))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((min(1557156386, (((arr_0 [i_0] [i_0]) - 1)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = 10;
                                arr_15 [i_0 - 4] [3] [i_0] [i_4] = (min(118, (((-4 != 110) ^ ((-405 ? -119 : (arr_1 [i_3] [i_4])))))));
                                arr_16 [i_0] [i_4] [i_1] [i_1] [i_2] [i_3] [i_4] = (max(((6910 << ((((max(-121, (arr_7 [i_0] [i_0] [i_0] [i_3])))) + 38)))), (-512 * 1)));
                            }
                        }
                    }
                }
                var_15 += (min(((((max(1979630217, (arr_2 [i_0]))) != ((max(0, 220)))))), (((((~37696) + 2147483647)) << (1 - 1)))));
            }
        }
    }
    var_16 = (((114 ? (min(-123, 18446744073709551606) : var_3))));
    var_17 = (min(((max(1, -17970))), ((((max(120, 141863388262170624))) ? (max(26379, 9683880051655350354)) : (((-105 ? var_0 : 47)))))));
    var_18 = (58 % 32756);
    #pragma endscop
}
