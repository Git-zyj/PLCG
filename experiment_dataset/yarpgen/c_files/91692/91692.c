/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-4393857916385301198 | var_14) % (var_3 || -12942))), -11317454025689447196));
    var_18 = (((((-(min(8526584312944430507, var_10))))) % (((((var_7 ? var_2 : 3339150533))) ? ((1433741719 ? var_7 : var_9)) : var_11))));
    var_19 = 11317454025689447196;
    var_20 *= (((var_2 == var_6) ? var_2 : ((~((var_0 ? var_15 : var_6))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 *= ((12961 == (var_15 && var_4)));
                    var_22 -= 5618999959437066551;
                }
            }
        }
        arr_9 [i_0] = ((var_7 - (arr_7 [5] [5] [i_0] [i_0])));
    }
    #pragma endscop
}
