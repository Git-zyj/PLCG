/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min(14287, (((1159271428097889910 < 3240028396122241523) ? 1 : (var_5 || var_2))))))));
                    var_13 = 65321;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_8 [i_0 + 1] [i_0] [i_2] [i_2] [i_3 + 2] [i_3] = (max(766421884, (6256 / -20642)));
                        arr_9 [8] [8] [i_0] [2] [i_3] = ((((var_10 ? -466563576672572269 : (var_3 < var_4))) & ((max(var_2, (min(92368937, 20641)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [8] [9] [8] [i_0] [i_4] [i_4] = (-(((arr_5 [i_0] [i_4]) ? var_7 : var_10)));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_0 + 3] [i_1] [i_2] [i_4] [i_5] &= (-(((var_10 + 2147483647) >> (-5178308132880646980 + 5178308132880647011))));
                            var_14 |= ((-(((arr_4 [i_4]) ? var_9 : 1))));
                            var_15 = (((3528545424 <= 4294967295) ? -92368937 : 140737488322560));
                            var_16 = ((var_0 ? var_0 : (arr_10 [i_0 - 2] [i_1] [i_4] [i_0] [7] [i_1])));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_17 = (((arr_6 [i_0] [i_0 - 1] [i_0]) || -1379876842));
                            var_18 = var_1;
                            var_19 -= (((-94 > 1835913001) - (6 >= 9858)));
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_7] = ((1 ? 3451516539362796343 : ((14552 ? 14995227534346755276 : var_3))));
                            arr_21 [i_0] [i_1] [i_7 - 1] [i_7 - 1] [i_0] = (((~1) ? 1396687920 : 537399367));
                        }
                    }
                }
            }
        }
    }
    var_20 = (50983 + 1);
    var_21 ^= (261632 ? 218219130 : -361474903);
    #pragma endscop
}
