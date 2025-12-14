/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_7 + var_4) - (var_7 - var_10)))) - var_2);
    var_13 = (min(var_13, (((+(((var_10 || var_2) << ((((min(var_10, var_1))) - 30451)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((~(((((!(arr_0 [i_0] [i_1]))) || (var_10 || var_7))))));
                    var_14 = (((!var_3) == var_11));
                    var_15 = ((((((max(var_7, (arr_0 [i_0] [i_2]))) ^ (((min(var_10, var_10))))))) ? (2053373996 < 2053373990) : (((((var_11 && (arr_6 [i_2])))) << (var_9 - 109)))));
                    var_16 = (max(var_16, (((!((((~var_5) ? (~var_6) : (arr_4 [i_2] [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
