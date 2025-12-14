/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 += ((((((max((arr_0 [i_0] [i_0]), var_5))) ? ((var_4 ? var_1 : (arr_0 [10] [i_0]))) : -1))) ? ((~(min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))) : (((max((arr_0 [i_0] [i_0]), 782711902)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (min(var_19, ((((arr_5 [i_0]) ? (((~14053026567571856534) | 209)) : (arr_2 [i_1]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = -var_4;
                            var_20 = (((arr_7 [i_1] [i_4]) ? ((((min(6588770580083494600, var_13))) ? 4393717506137695081 : (arr_6 [i_0] [i_0] [1] [i_0]))) : 14053026567571856534));
                            var_21 *= (arr_1 [i_0]);
                            var_22 = max(46673, 782711902);
                        }
                    }
                }
            }
            var_23 = -25802;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            var_24 = 46673;
            var_25 ^= 1;
            var_26 = ((~(arr_5 [4])));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_27 |= 7852188145369327027;
            arr_23 [i_0] [i_0] = ((+((~((65535 ? (arr_2 [i_0]) : 6))))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_28 = 146;
                            var_29 = ((min(7973978667596912943, ((min((arr_24 [7] [8]), 8))))));
                            var_30 = (min(var_30, ((min((arr_14 [i_8] [i_7] [i_7] [i_9 - 3]), (((arr_32 [i_0] [7] [i_9 - 3] [i_9 - 3] [i_10]) >> var_17)))))));
                        }
                    }
                }
            }
            arr_34 [i_0] = 79;
        }
    }

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_39 [i_11] = 1125150138281882498;
        var_31 = (min(var_17, 0));
        arr_40 [14] [i_11] = var_8;
    }
    #pragma endscop
}
