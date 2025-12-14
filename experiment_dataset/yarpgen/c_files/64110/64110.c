/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max((max(var_1, 2025748372393840867)), (min(2025748372393840843, 2025748372393840867)))), ((min((var_2 % 2707034386), var_11)))));
    var_13 |= (((var_2 + 2147483647) << ((((var_6 << (((var_5 - var_4) - 1227621131)))) - 1056))));
    var_14 = ((~(41740 != 41733)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((max((max((max(var_7, 2025748372393840869)), ((min(5, 46258))))), (max(((2025748372393840869 % (arr_1 [i_0]))), ((max(var_8, var_5))))))))));
                var_16 = (min(1343624994, -22));
            }
        }
    }
    var_17 = max((min((max(var_10, var_1)), (max(-82, var_4)))), var_10);
    #pragma endscop
}
