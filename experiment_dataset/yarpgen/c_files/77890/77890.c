/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_2 ? var_1 : var_2))) ? (((var_13 ? var_12 : var_2))) : ((18446744073709551611 ? 5215011965081334602 : 2864628337914613838))))) ? var_13 : ((((((var_3 ? -5215011965081334603 : var_1))) ? ((-6637 ? -1071845251 : var_9)) : (((var_2 ? -6637 : var_1))))))));
    var_15 = (((((var_7 ? var_4 : var_0))) ? ((197 ? -1246628917 : 0)) : ((((((268435455 ? var_8 : -1071845257))) ? var_11 : ((-672510724047146450 ? 1071845245 : 1424293747)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((((var_5 ? var_4 : var_5))) ? ((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) : ((7 ? 858974732 : 440184867))));
        var_16 = ((((((((1311251743 ? var_9 : 1))) ? ((((arr_2 [i_0]) ? var_8 : 234))) : var_7))) ? (((0 ? (arr_3 [i_0]) : (arr_3 [i_0])))) : ((var_8 ? var_11 : var_13))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (((((var_7 ? 1365565476 : (arr_3 [i_1])))) ? (((var_13 ? var_10 : var_11))) : (((arr_3 [i_1]) ? var_5 : (arr_6 [i_1] [i_1])))));
        var_18 -= ((((((arr_0 [i_1]) ? 7 : 32))) ? (((1190547282 ? -1071845238 : (arr_3 [i_1])))) : ((var_1 ? var_8 : 8689182121549592515))));
        var_19 = ((((((arr_5 [i_1]) ? var_7 : var_9))) ? (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))) : ((var_6 ? (arr_5 [i_1]) : var_1))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_20 = (((((932343759 ? 0 : (arr_8 [14])))) ? ((var_4 ? var_5 : (arr_6 [i_2] [i_2]))) : ((((((arr_5 [i_2]) ? 1424293751 : var_6))) ? (((arr_8 [1]) ? 1883618435276132778 : (arr_8 [i_2]))) : (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_21 = ((((((((248 ? 255 : -761305967))) ? 11581371745969114901 : 117))) ? (((((var_9 ? (arr_8 [i_3]) : var_7))) ? ((var_10 ? (arr_11 [10] [i_3] [8] [i_4]) : var_0)) : 255)) : ((var_3 ? (arr_8 [i_3 + 1]) : ((128 ? 1 : var_3))))));
                    var_22 = (max(var_22, (((((((arr_5 [10]) ? (((123 ? -10783 : 254))) : (((arr_9 [8] [8]) ? var_6 : var_3))))) ? (((-1544684325 ? -4 : 1980405592))) : ((var_8 ? var_13 : var_13)))))));
                }
            }
        }
    }
    #pragma endscop
}
