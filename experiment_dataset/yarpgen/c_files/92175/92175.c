/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_7 <= 1) ? 114 : (var_9 & 5956443899036465580))) / ((((((var_2 + 2147483647) >> (var_2 + 24287)))) ? (-2040300226891160957 | 111) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (((((((!(arr_1 [i_0]))) ? ((min(-4679, -13685))) : ((((arr_2 [10]) <= 2)))))) % (((((~(arr_1 [4])))) ? (min(-1998820749, (arr_2 [i_1]))) : (((max(19, -24))))))));
                var_12 *= (-1281359097 ? (((!(arr_2 [5])))) : (5260 <= 1281359097));
            }
        }
    }
    #pragma endscop
}
