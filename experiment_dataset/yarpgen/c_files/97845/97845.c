/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((((((1 >> (((arr_4 [i_0] [i_1] [i_1]) + 1151974499)))) < (arr_0 [i_1]))) ? ((((min(820825767780169460, (arr_2 [0])))) ? (arr_0 [i_0]) : ((3280334623506636270 ? -62 : -3280334623506636270)))) : ((~(min(0, var_6))))));
                var_11 = ((((((3280334623506636250 ? 47 : -3666406668529303425)) | (1 % 32749))) - 1));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_1] = ((3280334623506636273 ? ((96 ? 3280334623506636273 : 8439357823037747161)) : (!var_4)));
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_9 [5]);
                        var_12 = (max(var_12, ((((arr_8 [i_0] [i_3] [i_2] [i_1]) ? (arr_5 [i_0] [i_1] [i_2] [i_1]) : 66)))));
                    }
                    arr_12 [i_1] [i_2] = (min((~var_4), ((((~3666406668529303401) && (((-1665614765 ? 255 : 66))))))));
                    arr_13 [i_0] [i_1] [i_0] |= (min(((~(arr_9 [i_0]))), ((242 ? (~212) : (~3280334623506636270)))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_0] [i_0] [i_0] = ((!var_7) && (arr_17 [i_1] [i_4]));
                    arr_19 [i_1] [i_1] [6] = max(88, ((min((arr_0 [i_0]), (arr_0 [i_0])))));
                    var_13 = (min(44, -61));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_14 = ((((arr_14 [i_0]) ? 61 : 143422311)));
                    arr_22 [i_0] [i_1] [i_5] [i_1] = var_9;
                    var_15 &= ((-(((arr_17 [i_0] [i_0]) * ((min(var_9, (arr_15 [i_0] [i_1]))))))));
                    var_16 = (((((arr_0 [i_0]) ? 9 : (((max(255, (arr_1 [i_1] [i_0])))))))) ? (arr_2 [i_0]) : var_3);
                    arr_23 [i_1] = ((((min((arr_6 [i_0]), 0)) * ((((arr_2 [i_0]) / var_4))))));
                }
                arr_24 [i_1] [i_1] = (((arr_4 [i_1] [i_1] [i_0]) ? ((0 ? 32313 : var_5)) : ((95 ? 5629 : (arr_14 [i_1])))));
            }
        }
    }
    var_17 = ((((((min(-57, 16131051849268356571))) && ((min(3904365245, 3280334623506636249))))) ? var_6 : ((((!((max(18446744073709551596, 31)))))))));
    #pragma endscop
}
