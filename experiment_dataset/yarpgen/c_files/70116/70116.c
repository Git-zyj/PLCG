/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((~(arr_3 [i_0] [i_0] [i_0]))) != ((min((arr_2 [i_0]), (((1625020098 < (arr_3 [i_1 + 3] [i_1 + 3] [i_0]))))))));
                arr_6 [i_0] [15] [i_1] = 17890345645376322510;
            }
        }
    }
    var_13 = var_2;
    var_14 = (((min(((min(var_6, 1))), (max(17890345645376322510, var_9)))) >= (((((((0 >= (-32767 - 1)))) == ((min(2751, var_8)))))))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_15 = ((((((arr_13 [i_3 + 1] [i_2 - 1]) ? var_1 : (arr_13 [i_3 + 4] [i_2 - 1])))) ? (max((arr_7 [i_2 - 3]), (arr_13 [i_3 + 2] [i_2 - 3]))) : (((((arr_7 [i_2 - 1]) == (arr_7 [i_2 - 2])))))));
                        var_16 ^= (max(((-(min(18446744073709551615, (arr_0 [i_2 + 1]))))), 556398428333229105));
                        arr_15 [i_5] [i_4] [i_5] = ((!(((((min((arr_2 [0]), var_0))) ? ((((arr_8 [i_3] [i_3]) == var_10))) : (~var_0))))));
                        var_17 ^= (min((!-10120), (!124)));
                        arr_16 [i_4] |= (((arr_8 [i_2] [i_3 + 4]) << (((arr_11 [i_5 + 1] [i_4] [i_3 + 1] [i_2 - 3]) - 19901))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_18 += (min(((((max((arr_13 [i_2 - 1] [i_3]), 108))) || (((arr_21 [i_6] [i_4] [i_6] [i_6] [i_6]) == (arr_8 [0] [i_4]))))), (!258)));
                                var_19 = (arr_8 [3] [3]);
                                arr_22 [i_2 - 1] [i_7] [i_2] [i_2 - 3] [5] = 78;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
