/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((-((((((3924243670127291419 ? 200 : 242))) < var_9)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = (((((~(((arr_1 [i_0 - 2]) ? (arr_0 [16]) : var_6))))) ? (((var_8 & var_7) ? (min((arr_0 [i_0 - 1]), var_0)) : (arr_1 [i_0 - 2]))) : ((var_6 ? (arr_1 [i_0]) : ((var_0 ^ (arr_0 [i_0])))))));
        arr_2 [i_0] |= ((((var_6 <= (arr_0 [8]))) ? (((arr_0 [i_0]) ? var_8 : -5884894035005339191)) : var_9));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((!(4611686018426339328 == 0)));
        arr_6 [i_1] = var_7;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_12 = (arr_4 [i_1] [17]);
                        arr_15 [i_3] = ((((var_6 <= var_8) ? 6 : ((var_4 ? (arr_11 [i_1] [i_1] [3] [i_1]) : var_4)))));
                        var_13 = ((-((((((arr_8 [i_2] [i_1]) ? (arr_7 [i_1]) : (arr_1 [i_2])))) ? (((arr_12 [i_1] [i_2] [i_3] [i_1]) ? var_8 : (arr_3 [i_2]))) : 120))));
                        var_14 = ((!var_3) ? (arr_8 [i_2] [i_2]) : ((((max(var_5, var_6))))));
                        var_15 += (max(-58445, ((-(arr_11 [i_1] [i_1] [i_1] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
