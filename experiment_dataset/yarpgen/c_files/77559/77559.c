/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = ((((3776720828 ? var_6 : ((var_0 ? var_12 : var_10))))) ? var_2 : (((((112 ? 10 : var_9))) ? ((-1925758844 ? var_11 : var_2)) : ((143 ? 16767308337987548852 : 1679435735722002764)))));
    var_16 |= (1679435735722002763 != 16767308337987548834);
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = 1679435735722002763;
                                var_19 = var_6;
                                arr_12 [i_4] [i_4] [i_0] [i_4] [i_0] = ((((-(arr_9 [18] [i_2] [i_4 + 2] [i_4 - 1] [18])))) ? 32767 : (((min(var_6, var_5)))));
                                var_20 ^= -1329504116;
                            }
                        }
                    }
                }
                arr_13 [i_1] = (((-21884 ? var_12 : (max(var_2, (arr_5 [i_1]))))));
                var_21 = 4170;
                var_22 = var_9;
            }
        }
    }
    #pragma endscop
}
