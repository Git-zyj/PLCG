/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~((var_1 << (122 - 117)))))) ? 0 : (((((var_0 ? 8 : var_13))) ? var_6 : (max(0, var_11)))));
    var_15 = (((var_3 >> ((max(var_10, 4))))) != ((var_9 ? (var_10 != var_3) : (var_9 >= 29))));
    var_16 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [12] [i_0] [i_0] = (((((((var_7 ? (arr_2 [i_0] [i_4]) : (arr_6 [i_4] [i_3] [i_2 - 1] [i_0]))) - ((((arr_6 [i_0] [5] [i_3] [i_4]) >> (3137915812 - 3137915797))))))) ? (arr_13 [i_4]) : ((((arr_10 [i_0] [i_1] [14] [i_1]) || var_10)))));
                                arr_15 [i_4] |= (255 <= 0);
                                var_17 = (max(var_17, (((((((13109 | 11) * (((22 ? 271 : var_6)))))) || (var_10 & 11))))));
                                var_18 = (max(var_18, ((max(((~(arr_11 [i_0] [i_2 + 1]))), var_2)))));
                                arr_16 [i_0] = (((arr_7 [i_4] [i_3] [i_2] [i_0]) ? 255 : ((((((252 != (arr_5 [i_0] [i_1] [i_2])))) != 13401415738498238786)))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((arr_5 [i_0] [i_0] [i_0]) >= (((((((arr_11 [i_0] [i_1]) && var_6))) <= (min((arr_6 [i_1] [i_0] [i_1] [i_0]), 89))))))))));
                    var_20 = (max(var_20, ((((((min(var_3, var_10)) <= ((((var_9 >= (arr_13 [i_0])))))))) <= (min((0 == -393876544), (arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
