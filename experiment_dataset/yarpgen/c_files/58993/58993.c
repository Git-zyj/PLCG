/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(5569545899387281518, 5569545899387281505));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 += ((5569545899387281524 ? 0 : -719858180));
                    var_22 = ((((((((var_15 % (arr_5 [i_0] [i_0] [i_2])))) ? (arr_4 [13]) : (arr_2 [19])))) - (max((min(var_0, (arr_1 [11]))), (((var_6 ? (arr_4 [i_1]) : 3030630316)))))));
                }
            }
        }
    }
    #pragma endscop
}
