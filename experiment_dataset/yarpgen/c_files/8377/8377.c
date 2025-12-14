/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((1 ? 1 : ((min((16380 == 81), (arr_3 [i_0] [i_0]))))));
        arr_5 [i_0] = (min(((((1 + (arr_1 [i_0]))) / ((1 ? (arr_2 [i_0]) : -7520063750156734548)))), (((arr_1 [i_0]) ? ((105 | (arr_1 [i_0]))) : (arr_3 [i_0] [i_0])))));
        arr_6 [i_0] = ((13192 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((arr_2 [i_0]) + (arr_2 [i_0])))));
        arr_7 [i_0] [i_0] |= (((max((arr_1 [i_0]), (arr_2 [i_0]))) <= (((((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) * ((40640 ? (arr_0 [i_0]) : 3584)))))));
    }
    var_12 = ((((-15248 | ((-15808 ? 18265242602223448288 : var_5)))) >= -81));
    var_13 = var_3;
    #pragma endscop
}
