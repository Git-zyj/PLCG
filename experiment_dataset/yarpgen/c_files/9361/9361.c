/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((((((arr_0 [i_1]) >> ((((-1994243531 ^ (arr_0 [i_0]))) - 325493561713425667))))) ? (max((((var_2 ? (arr_3 [i_0] [i_0] [i_0]) : var_1))), (((arr_2 [i_0] [i_0]) * var_11)))) : (min(((((arr_0 [i_0]) ? 622625138654977044 : var_3))), (max(var_10, (arr_1 [4] [i_1])))))));
                arr_5 [i_0] = (arr_1 [i_1] [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((~(((!((max(var_8, (arr_0 [i_0])))))))));
                arr_7 [i_0] [i_1] = (min(((~(arr_0 [i_1 - 1]))), (arr_0 [i_1 - 1])));
                arr_8 [i_0] = (var_6 & 255);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            {
                arr_15 [i_2] [1] [i_2] = ((-(((max(var_11, var_4)) * (var_5 / var_10)))));
                arr_16 [i_2] [i_3] [i_3] &= (((arr_14 [i_2 - 2] [i_2] [i_2 - 3]) ? (arr_14 [i_2] [i_3] [i_3 - 3]) : (((arr_14 [i_3 - 1] [21] [i_2]) / var_1))));
                arr_17 [22] [22] [i_3] = (((((arr_14 [i_2] [i_3] [i_3]) ^ (((arr_9 [i_3]) ? (arr_13 [i_3]) : 1152780767118491648)))) | (~var_9)));
                arr_18 [i_3] [i_3] [i_2] = ((((max((arr_9 [i_2 - 3]), (arr_9 [i_2 - 3])))) ? ((((min(var_10, var_4))) ? (var_8 << 1) : ((max(-1, var_5))))) : (((((arr_12 [i_2]) % (arr_11 [i_3])))))));
            }
        }
    }
    var_12 = -80;
    var_13 &= (((((max(var_0, var_10)))) ? var_2 : ((min((var_6 >= 64229), (!var_5))))));
    var_14 = ((!((max(var_5, ((var_7 ? var_7 : 9528297661136850034)))))));
    #pragma endscop
}
