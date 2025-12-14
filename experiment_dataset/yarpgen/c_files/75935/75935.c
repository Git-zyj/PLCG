/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (arr_11 [i_0] [i_0] [7] [i_2] [i_3]);
                            arr_13 [i_0] [i_1] [i_0] = var_1;
                            var_17 = ((((-4194303 ? ((var_6 ? var_3 : var_1)) : var_4))) ? (arr_2 [i_0]) : 4294967292);
                            arr_14 [i_0] = 3394687749;
                            var_18 += min((((~2748820217) ? -1944907943 : (arr_12 [10]))), (((arr_4 [i_0 - 4] [i_2]) ? (1944907943 >= 4009770534) : -var_8)));
                        }
                    }
                }
                var_19 = max((((((var_11 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : var_5))) ? var_9 : (max((arr_5 [i_0] [9]), var_11)))), ((var_10 ? (((arr_10 [i_0 - 4] [i_0 - 4]) - var_11)) : var_2)));
            }
        }
    }
    var_20 = ((!((max(2903011831, 285196761)))));
    var_21 = (((((var_0 ^ var_1) ? (max(4294967293, var_6)) : (var_5 ^ var_12)))) ? ((var_6 ? (3303433542 >= var_3) : (3478294664 & 1746798610))) : (((var_14 ? var_2 : var_14))));
    var_22 = var_10;
    #pragma endscop
}
