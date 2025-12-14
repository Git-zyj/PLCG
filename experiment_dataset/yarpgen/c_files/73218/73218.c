/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((((-1 ? 32767 : -1))), (max(11, 1599503166))));
        var_15 *= (min((min((min(1, 4041954009)), (((1 ? 119 : 1))))), (max((max(2695464138, 72)), 112))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_3] [i_1] = 1953152197;

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_16 *= -9012;
                            var_17 = (max((min(-0, (min(1, 1953152197)))), (((-((min(65526, 72))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [4] [i_1] [i_1] [i_3] [i_5] [i_0] = (((!2105604979) ? -26254 : ((1 ? 1 : 4294967295))));
                            var_18 ^= -522;
                        }
                        var_19 += (max((((!((max(-30884, 1)))))), (max(-111, (min((-32767 - 1), 3283))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_20 = ((((min((max(1, 10)), (!262142)))) ? ((max(-124, 65535))) : 21510));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        var_21 += (max(((~(max(27066, 1530555110)))), (!-7621)));

                        for (int i_10 = 3; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_22 |= (((((~((32756 ? 1032192 : -9123))))) ? ((((min(213813276, 1701761705))) ? (((-1530555083 ? 4294705136 : 192))) : 6537473636006688817)) : ((max((max(1627721333, 4294934528)), 4294967295)))));
                            var_23 = ((-(min(((1 ? -12 : 1)), (!-6380)))));
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, 47829));
                            var_25 *= ((8386560 ? ((219 ? 4294967285 : 242)) : (!242)));
                        }
                        arr_34 [i_8] = -9;
                    }
                }
            }
        }
        var_26 = (max(var_26, 16903838212088712416));
        var_27 = ((~((((max(11, -1530555110))) ? ((-22597 ? -109 : 10852002727247569700)) : (((17008 ? -1 : (-127 - 1))))))));
        var_28 &= (min(((min(-38, ((min(65524, 1)))))), (min((((-9115 ? 107 : 31835))), (max(1364664867, 2047))))));
    }
    var_29 = min(((max(1, -85))), (max(242, (min(170, 0)))));
    #pragma endscop
}
