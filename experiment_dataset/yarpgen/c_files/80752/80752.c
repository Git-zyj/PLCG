/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_7 == ((var_12 ? var_9 : var_6))))) * ((min((!var_4), (var_9 <= var_2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 *= ((((((727711964 <= (arr_4 [i_0] [i_1] [i_2] [i_1]))))) - (arr_9 [i_0] [i_0] [i_1] [i_3])));
                        var_15 = (max(var_15, (((~(((arr_7 [i_1] [i_1] [i_3 - 2]) ? (arr_0 [i_2] [15]) : 1724315106)))))));
                        var_16 = (((2570652181 ? (((2570652181 >> (var_6 - 14478469620686781726))) : (0 % var_5)))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [i_2] = -0;
                            var_17 = ((~(((arr_11 [i_3] [i_3 - 3] [i_2] [9] [i_3 + 3]) * 1))));
                        }
                    }
                }
            }
        }
        var_18 += (arr_4 [i_0] [i_0] [i_0] [4]);
        var_19 = ((((max((arr_8 [i_0] [i_0]), var_12))) ? (((!(arr_8 [i_0] [i_0])))) : ((~(arr_8 [1] [i_0])))));
        var_20 = (1 ? var_1 : (255 || var_2));
        var_21 = (min(1724315104, (((!((min(46849, var_9))))))));
    }
    var_22 &= var_8;
    #pragma endscop
}
