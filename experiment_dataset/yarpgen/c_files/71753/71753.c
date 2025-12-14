/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((max(var_0, var_10))) ? ((var_3 ? var_12 : var_5)) : var_4)), var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((((13386 ? -1968177962265577372 : -15)) | (((~(var_1 * var_10))))));
                    var_18 = (min(var_18, ((((((var_11 ? (max(3354474490353309107, 1)) : var_3))) ? (arr_5 [i_0 - 1]) : ((var_11 ? var_14 : (arr_7 [i_2 + 1] [i_1] [i_2 + 1]))))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_1] [i_0] = ((((((((var_13 ? var_2 : (arr_1 [i_0])))) ? (((var_15 ? var_11 : var_7))) : ((65508 ? 9223372036586340352 : -1325866236))))) ? var_0 : (~var_11)));
                        arr_13 [i_0] [6] [i_0] [i_3] = (min(((var_9 ? (var_11 > var_3) : var_9)), (!var_7)));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_19 = (arr_15 [i_0]);
                        var_20 ^= ((!(((-20 ? 156 : 1)))));
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((((((arr_1 [i_0 + 1]) ? var_6 : (arr_4 [i_0 + 1] [i_1])))) ? ((((!(((1438183179 ? 1 : 1))))))) : (((arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1]) ? (arr_9 [i_2 + 1] [i_2 - 1] [13] [i_2] [i_2] [i_2 - 1]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((((41318 ? 15092269583356242489 : 8935082631799126073)) ^ var_12)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_6] = (((var_1 ? (arr_0 [i_6]) : -var_5)));
                var_22 = var_4;
                arr_26 [i_6] = ((+((var_13 ? ((((arr_0 [i_6]) && var_3))) : var_2))));
                var_23 = var_11;
            }
        }
    }
    #pragma endscop
}
