/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((var_6 - (~var_11))))));
    var_18 = (min(var_4, (min((min(var_10, 309246339)), var_7))));
    var_19 = var_13;

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 -= (max(18446744073709551613, -309246340));
        var_21 = ((12088 ? (arr_0 [i_0]) : (~var_11)));
        arr_2 [i_0] = max((max(30073, (var_4 ^ var_4))), 309246333);
        var_22 -= (((arr_1 [3] [i_0 - 2]) + ((((min(var_5, (arr_1 [17] [17])))) ? (!18158513697557839872) : (max(var_8, 288230376151711735))))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((~((var_8 ? var_3 : (arr_1 [i_1 + 1] [i_1]))))) - 104));
        var_23 = (min(var_23, (((var_16 ? (arr_4 [4]) : ((max(-309246352, (arr_3 [10])))))))));
        var_24 = (min(var_24, (((-(min((18158513697557839864 + -1026063240), var_10)))))));
        var_25 = ((!(-5242719301858771565 - -309246350)));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = var_0;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_26 = (min((((var_15 || (arr_3 [i_3])))), ((((max(339781636, 13928))) % (max((arr_4 [i_3]), var_14))))));
            arr_13 [i_3] = ((((((((((arr_3 [i_3]) ? (arr_4 [i_3]) : -2))) != (arr_10 [i_3]))))) >= 3282450577837818579));
            var_27 = ((~(((-1026063247 != 1026063257) | (((!(arr_1 [i_2] [i_2]))))))));
        }
        arr_14 [i_2] = (max(var_7, (arr_3 [6])));
        var_28 -= ((!((1026063256 == ((1026063238 ? var_9 : (arr_11 [i_2] [i_2] [i_2])))))));
        arr_15 [17] = (((!-1026063250) ? (((7046785840969491218 || (~var_15)))) : (((var_8 != (arr_12 [14] [i_2 - 1]))))));
    }
    #pragma endscop
}
