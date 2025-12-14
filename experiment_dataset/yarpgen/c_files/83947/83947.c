/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] = 23527;
                var_13 *= (((((((42013 ? (arr_1 [i_0 + 2] [i_0 + 2]) : var_4))) ? var_2 : ((120 ? 1546758578831270983 : (arr_0 [i_0] [i_1]))))) <= (max(((var_11 ? 5509883084763403988 : 1)), (arr_0 [i_0 + 2] [i_0 - 1])))));
                var_14 = (((((15975 ? var_5 : (arr_0 [i_0 - 1] [i_0 - 1])))) || (arr_5 [i_0 + 2] [i_1] [i_1])));
                arr_8 [i_0] [i_0] [i_1] = (((((1 ? ((min(var_12, var_12))) : var_8))) ? (((var_8 == ((var_11 ? var_4 : (arr_3 [i_0 - 1] [i_0 - 1] [i_1])))))) : (((((var_8 ? (arr_1 [i_0] [i_0]) : 3859))) ? ((3 ? (arr_0 [i_0] [i_0]) : -14)) : (~var_4)))));
            }
        }
    }
    var_15 |= var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_18 [8] [8] = ((((((((var_8 ? (arr_1 [i_2] [0]) : (arr_10 [i_2])))) ? (arr_1 [i_3 - 1] [1]) : (((arr_0 [i_2] [i_4]) ? var_10 : var_11))))) ? (min((min((arr_6 [i_3]), (arr_17 [i_2] [i_3 - 3] [i_4]))), (min((arr_5 [7] [i_3] [i_3]), (arr_4 [i_2] [3] [i_4]))))) : 137));
                    arr_19 [i_2] [4] = (((((((min(645562842, (arr_14 [i_2] [i_2])))) ? (((3649404453 ? var_5 : (arr_2 [i_2] [i_4])))) : ((var_11 / (arr_13 [9] [i_3])))))) ? ((((((arr_9 [i_3]) ? 21707 : 15981)) > ((max(-17102, (arr_9 [i_2]))))))) : ((37898 ? 126 : var_9))));
                }
            }
        }
    }
    var_16 = ((((var_9 >> (((max(var_11, var_10)) - 5780048059822928761))))) ? (((-9095749453484149928 ? 6198596398673041330 : var_1))) : (((((17101 ? var_0 : var_7))) ? ((29003 ? 11 : var_12)) : var_2)));
    #pragma endscop
}
