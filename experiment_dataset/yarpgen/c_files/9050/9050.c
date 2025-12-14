/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~-7299290952070374801);
    var_16 = var_13;
    var_17 |= (((((-67 ? 9902 : 64))) >= ((~(~var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = (max(var_18, ((min((((-64 != (((-64 && (arr_7 [i_2]))))))), (((~63) ? var_3 : (~-29))))))));
                        var_19 = ((~(((arr_1 [14] [i_3]) ? var_0 : (arr_8 [i_1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (((!(~119))));
                        arr_16 [i_0] [i_1] [i_2] [i_1] = ((((44448 ? (arr_10 [13] [i_1] [11]) : var_14)) >= (arr_4 [i_0] [i_4])));
                    }
                    var_21 = (min(var_21, ((min(((-(arr_4 [i_0] [i_1]))), (2147483392 + 36))))));
                }
            }
        }
    }
    #pragma endscop
}
