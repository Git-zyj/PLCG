/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_4, (max(-1498150918, (~1364084450)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_2] [i_1] [i_1] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0] [i_2] [7]);
                            var_14 = (min(var_14, ((min((((arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_2] [i_2]) + (arr_4 [i_1] [i_1 - 1] [i_3]))), var_12)))));
                        }
                    }
                }
                var_15 = (max(var_15, ((min(((((var_11 * var_12) ? (((arr_3 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_0]))) : (arr_3 [i_0])))), 0)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [1] [i_1] = var_11;
                            var_16 *= (min((arr_0 [i_4]), (((min(1759338425, 9269057291156440187)) << (var_7 - 1396478087)))));
                            var_17 = (max(var_17, (((~(min((((1952535796 ? var_2 : 1353808436))), (min(1498150918, (arr_4 [i_4] [i_4] [i_4]))))))))));
                            var_18 -= ((max((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_9)));
                        }
                    }
                }
                var_19 = (max(var_19, 2796816377));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                var_20 += ((~(((var_2 || ((max(196580103, var_4))))))));
                arr_21 [1] [1] = ((4155862324 ? 1534899831 : 3793445432));
                var_21 = (max(var_21, (((-(((arr_20 [i_7 + 3] [i_7 + 3]) ? var_9 : (arr_20 [i_7 + 3] [i_7]))))))));
                arr_22 [i_6] = ((~((~(arr_20 [i_7] [i_6])))));
            }
        }
    }
    var_22 = min(((((max(6, 1353808436))) ? (min(var_3, var_0)) : ((max(var_4, var_6))))), (((((min(1, -1759338426))) || ((max(var_6, -13243)))))));
    #pragma endscop
}
