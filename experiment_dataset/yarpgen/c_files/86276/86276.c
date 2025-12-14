/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((!var_14) || ((!(((var_1 ? var_15 : 2854709750))))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (min((max((arr_1 [i_0]), (arr_1 [i_0]))), (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) * ((186 / (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 1] = ((((min((max(7936, 59060)), (max((-32767 - 1), 7940))))) ? ((~(((arr_0 [i_2]) / 1455220647)))) : (((((((arr_2 [i_1]) ? 36330 : (arr_4 [i_0] [i_0]))) != (arr_2 [i_2])))))));
                    arr_9 [i_1] [2] [i_1] = (max((arr_5 [i_0] [i_1] [i_1]), ((((44240 % -5555215576234810170) < (arr_2 [i_2]))))));
                    arr_10 [i_0] [i_1] = 44237;
                    var_20 = ((+(((arr_5 [i_0] [8] [i_1]) ? ((max((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_1])))) : ((-(arr_2 [i_1])))))));
                }
            }
        }
        var_21 = ((57 ^ (((!(arr_5 [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
