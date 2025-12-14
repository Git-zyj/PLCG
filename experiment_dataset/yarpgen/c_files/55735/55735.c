/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_13 ? -3169881454507538034 : 2442893677400784624))));
    var_20 = (min(-5753428311071979504, (!-var_6)));
    var_21 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [3] = (((-(arr_5 [i_0] [12] [5] [15]))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [9] [i_1] [1] = (arr_0 [6]);
                        arr_11 [i_3] [14] = (max((min(((4476271392140215044 ? 4476271392140215036 : (arr_3 [5] [6] [i_2]))), (max((arr_8 [6] [16] [i_3] [i_3]), (arr_6 [8] [8] [i_0]))))), ((max(var_5, (arr_2 [7] [0] [13]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_19 [i_4] = min((arr_16 [i_4]), (arr_17 [i_4] [4]));
                    arr_20 [i_6] = (((max(((~(arr_15 [i_6] [i_6]))), (max((arr_13 [5] [19]), 4476271392140215044))))) ? ((-((var_6 ? (arr_17 [i_6] [i_4]) : (arr_17 [i_6] [12]))))) : (((max((arr_18 [i_5] [i_6]), 7416265808118441754)))));
                    arr_21 [6] [i_6] = (max(((~(arr_17 [i_6] [18]))), ((-(min((arr_12 [i_6]), 2767818150932036053))))));
                    arr_22 [i_4] [i_5] [8] = min((arr_16 [i_5]), ((max((min((arr_14 [18] [12]), -12)), var_8))));
                }
            }
        }
    }
    #pragma endscop
}
