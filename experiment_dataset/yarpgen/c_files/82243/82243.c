/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_1, ((24922 ? 11220107275618941674 : 943888128))))) ? (((((var_4 ? var_4 : 16128))) ? (~-24916) : var_3)) : (((var_7 >= ((581637754 ? 255 : 581637754)))))));
    var_20 |= 0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 2] |= 60;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_8 [i_2] [22] [12])));
                        var_22 = 4294967295;
                    }
                }
            }
        }
        var_23 &= (((((arr_7 [i_0 - 1] [i_0 - 1]) ? 115 : (arr_4 [i_0] [i_0] [i_0])))) ? (((var_7 ? -60 : (arr_4 [i_0] [23] [i_0])))) : (arr_11 [1]));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = (max(var_24, ((((((min(((!(arr_14 [i_4]))), (arr_9 [i_4] [i_4] [i_4]))))) % ((((max((arr_9 [i_4] [i_4] [i_4]), (arr_1 [i_4] [i_4])))) ? (((arr_7 [6] [i_4]) ? 224775360 : (arr_11 [18]))) : 54606)))))));
        var_25 = (max(var_25, ((min((arr_12 [10] [i_4] [i_4] [i_4]), ((max((!var_7), (arr_2 [i_4])))))))));
    }
    var_26 = ((-3112139996 ? (((((var_13 ? var_1 : var_14))) ? (((var_16 ? var_4 : var_13))) : var_16)) : ((65522 ? (min(2262046251, var_4)) : (182011802 >= var_7)))));
    var_27 += (!72053195991416832);
    #pragma endscop
}
