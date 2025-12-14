/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((6 ? ((-var_3 ? (max(46827, 16602481982318894613)) : var_8)) : (((var_9 ? (~var_12) : (((max(var_3, var_3)))))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((max(var_6, (arr_1 [1])))));
        var_14 = (min(var_14, ((((((var_11 ? (arr_0 [i_0 + 2]) : 55125))) ? 2080120212 : (((arr_0 [i_0 - 2]) ? 3325048693 : 12113057855336374124)))))));
        arr_3 [i_0] = (max((arr_0 [i_0]), (max(80, 1189128936))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (max(((max(902410152, 10424))), var_9));
        arr_7 [i_1] = (((((3325048693 ? 0 : 0))) ? 10411 : var_2));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 += (max((((arr_8 [i_4 - 1] [i_2]) ? 58 : var_12)), (((-(arr_8 [i_4 + 1] [i_2]))))));
                        var_16 = (max((~-2572), var_1));
                        arr_16 [i_1] [i_1] [7] [i_1] [i_1] = ((+((115 ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 + 1])))));
                        var_17 = (max(var_17, ((max(((-11 ? var_10 : (arr_4 [i_3]))), (max(18177, 7458887078721522936)))))));
                    }
                }
            }
        }
        var_18 = (((((+(((arr_1 [i_1]) ? var_6 : var_3))))) ? 15 : (!-2573)));
    }
    var_19 -= var_1;
    #pragma endscop
}
