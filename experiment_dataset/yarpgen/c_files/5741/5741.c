/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] = ((3967204843 ? 0 : 0));
                        arr_13 [i_0] [i_0] [i_0] = (3967204843 ? 327762453 : (arr_8 [17] [i_1] [i_1] [i_1]));
                    }
                }
            }
            arr_14 [i_0] = ((605731988 ? -1200434645 : -605731988));
        }
        var_19 = ((((-(arr_0 [i_0] [i_0])))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_20 = ((386220513 ? ((~((var_10 ? (arr_7 [i_4] [i_4 - 1] [i_4 - 1]) : 1337807116)))) : var_10));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_21 = ((!((((229 ? 1 : 0))))));
                        var_22 = (max(((((var_17 ? 255 : (arr_25 [i_4] [i_5] [1] [i_7]))) >> (-1 + 21))), 0));
                        var_23 ^= var_3;
                        arr_26 [i_6] [i_6] [i_6] = var_8;
                    }
                }
            }
        }
        arr_27 [i_4 - 1] [14] = var_5;
        var_24 = (min(((max((~1522661103), (((var_5 ? 255 : (-32767 - 1))))))), (((arr_25 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]) ? (~4611681620380876800) : (arr_10 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
        var_25 ^= ((max(0, ((max(1, 15))))));
    }
    #pragma endscop
}
