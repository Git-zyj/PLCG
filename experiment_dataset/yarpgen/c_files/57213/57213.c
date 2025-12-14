/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (min(((((max(15, var_12))) ? (((55341 ? var_9 : 255))) : ((var_9 * (arr_1 [i_2 - 1]))))), (((((-1462631870587125935 ? -4694268461502120735 : 17513)) <= var_0)))));
                    arr_8 [i_2] [i_1] = ((+(min((arr_3 [i_1 + 3] [i_2 - 1]), (arr_3 [i_1 - 2] [i_2 + 1])))));
                    arr_9 [i_2] = ((((var_14 / (arr_0 [i_1 - 1] [i_1 + 3]))) <= (((~(2 && 40453))))));
                    var_21 = (((var_4 <= var_14) >> (((!(arr_5 [i_0 + 2]))))));
                }
            }
        }
    }
    var_22 = 117;
    var_23 = (max(var_23, (247 < 7806887474738364212)));
    #pragma endscop
}
