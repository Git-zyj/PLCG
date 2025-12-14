/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_7, (73 && var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (var_9 + var_0);
                    var_19 = (min(var_19, ((max((((((arr_2 [i_0]) + (arr_1 [i_0]))))), ((var_5 ? 251 : ((min(var_5, 17))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (((min((~-6180953249788378659), 181)) - (var_3 - var_6)));
                                var_21 |= var_3;
                                arr_13 [i_0] [i_0] [i_2] [i_3] = ((((((((arr_0 [i_0]) ^ var_8)) | (~var_10)))) ^ ((-6180953249788378659 & ((25 ? 74 : 2783547436724940350))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_22 = var_5;
                    var_23 = (arr_19 [i_7 - 1] [i_7 + 2] [i_7]);
                }
            }
        }
    }
    var_24 = (min(173, -6180953249788378659));
    #pragma endscop
}
