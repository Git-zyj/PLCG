/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 18446744073709551615;
    var_13 = ((!((!(0 || 3501069263)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = ((-960 ? var_1 : (25052 | 1)));
                var_15 = (max(var_15, 25047));
                var_16 = (((arr_3 [i_0]) > ((32767 ? (arr_3 [i_1 + 1]) : 2147483647))));
                arr_6 [i_0] [i_0] [i_0] = ((((~(arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 1])))) && (arr_4 [i_0]));
                var_17 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
