/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((max((max(var_10, var_15)), ((var_13 ? var_8 : 4299173895645794405))))) ? ((((min(var_7, var_11))) ? var_14 : ((var_10 ? var_8 : 23243)))) : (((((min(5, 4294967285))) ? (((max(var_12, var_9)))) : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((min((min((min(var_3, 3316069264487882935)), (((var_3 ? var_9 : var_5))))), (min((max(var_6, (arr_1 [i_2]))), ((min(100, 0))))))))));
                            var_18 |= ((min(((min(var_11, var_4))), (arr_1 [i_1 + 3]))));
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_1] = (((((arr_9 [i_0] [i_0] [5] [i_1 + 2] [i_1]) ? var_10 : (arr_3 [i_1] [i_0])))));
                var_19 = (min((((((min(32256, var_7))) ? var_8 : ((13686020674095974220 ? -98 : (arr_8 [12] [i_1] [i_1] [i_0])))))), (min(125, ((-98 ? 6373211782482353319 : (arr_8 [1] [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] [i_1] [i_1] [i_1] &= ((min(((max(1, (arr_9 [15] [i_1 - 3] [i_4] [i_5] [i_5])))), 2037875587)));
                            var_20 = (max(var_20, (max((min((((arr_15 [i_5] [i_0] [i_4] [i_0] [i_0] [i_0]) ? (arr_17 [i_4] [i_1] [i_4] [i_5]) : var_10)), (arr_8 [i_0] [i_1 - 1] [i_4] [i_1]))), (max((min(0, -14)), (arr_2 [i_0] [i_0] [i_0])))))));
                            var_21 = (min(var_21, ((max(((var_8 ? (max(var_13, 13686020674095974220)) : ((min(var_0, -6291188159020667526))))), (max(var_13, (max(var_5, (arr_3 [i_5] [i_4]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
