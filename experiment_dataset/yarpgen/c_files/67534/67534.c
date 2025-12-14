/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 -= ((((((arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2]) ? (((arr_4 [i_0] [i_0] [i_1 - 3]) ? (arr_0 [i_0]) : (arr_3 [14] [i_0] [i_1 + 1]))) : (((102 ? 255 : 41012)))))) ? (((((41015 ? 24522 : 41012))) ? ((((arr_2 [i_1] [i_1] [i_0]) ? 0 : 1235149133))) : (arr_4 [i_1] [i_1 + 1] [i_0]))) : (((arr_4 [i_0] [i_1 - 2] [0]) ? (((arr_0 [i_0]) ? (arr_4 [15] [15] [i_0]) : (arr_1 [i_1]))) : (arr_4 [i_0] [8] [i_1])))));
                var_18 = (arr_3 [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_19 = ((0 ? 0 : 21561));
                    arr_14 [i_3] [i_3] [11] [i_3] = ((((((arr_6 [i_2]) ? (((arr_10 [i_2] [i_2] [i_4]) ? (arr_6 [i_4]) : (arr_8 [i_2] [i_3] [i_2]))) : (arr_9 [i_2] [i_3])))) ? ((((((arr_12 [i_2] [i_2]) ? (arr_12 [i_3] [10]) : (arr_13 [i_2] [i_3])))) ? (arr_12 [i_2] [i_3]) : ((3 ? 10167633136128259485 : 3808045515)))) : (arr_7 [i_2] [i_2])));
                    var_20 = (max(var_20, ((((arr_13 [i_2] [i_3]) ? (arr_8 [i_3] [i_3] [i_4]) : 131071)))));
                }
                arr_15 [21] = (((((((((arr_6 [i_3]) ? (arr_8 [i_3] [i_3] [i_3]) : (arr_8 [i_2] [i_2] [i_2])))) ? (arr_6 [i_3]) : (((arr_12 [i_2] [i_3]) ? (arr_8 [i_2] [15] [i_3]) : (arr_7 [i_2] [i_2])))))) ? (((((((arr_5 [i_2]) ? (arr_11 [i_2] [i_2] [i_3] [i_2]) : (arr_11 [i_3] [i_3] [i_2] [i_2])))) ? (arr_12 [i_2] [i_3]) : ((131071 ? 2919482174216673769 : -131068))))) : (((arr_10 [i_2] [i_3] [9]) ? (((arr_7 [i_2] [i_3]) ? (arr_11 [i_2] [i_2] [i_3] [i_3]) : (arr_13 [i_2] [9]))) : (arr_13 [i_2] [1])))));
            }
        }
    }
    var_21 = ((var_0 ? ((var_0 ? var_16 : var_4)) : var_4));
    var_22 = ((((4294967295 ? 215 : var_10))) ? 126 : 1404045691);
    var_23 = var_0;
    #pragma endscop
}
