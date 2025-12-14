/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max((min(var_17, 1339415670313466034)), (!1127112154410965398))), (((!(((-7092435996102364241 ? 17478398655454014226 : 18446744073709551615))))))));
    var_19 = ((379282672 ? var_17 : ((18092012826720467339 ? ((var_16 ? 2147483647 : -20903)) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((arr_5 [i_0]) ? 19103 : ((min((((arr_0 [i_0] [i_0]) ? 15 : -30)), ((-12989 ? 115 : 62)))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_21 = (max(var_21, (((13482390477266899146 ? (arr_3 [20] [i_1] [1]) : 1770251444)))));
                    arr_9 [i_0] [i_0] [7] = ((-(min(1949827925, 16565869068806751788))));
                }
            }
        }
    }
    #pragma endscop
}
