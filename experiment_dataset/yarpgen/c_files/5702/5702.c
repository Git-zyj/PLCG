/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 ? (max(0, 32767)) : (((var_5 ? var_11 : var_11)))))) <= (min((min(var_9, var_8)), (((var_4 ? var_4 : 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_2] = (((((arr_11 [i_0] [i_2] [i_0]) ? (arr_11 [i_1] [i_2] [i_1]) : (arr_11 [i_0] [i_2] [i_2]))) << ((((min(var_8, (arr_4 [7] [i_1] [i_2])))) ? (((arr_8 [8] [i_2] [i_2] [i_0]) ? 32766 : 10)) : (arr_6 [i_0] [i_3])))));
                        var_13 = (((((!(arr_10 [i_2])))) + ((((((arr_3 [i_3]) ? (arr_0 [i_0]) : (arr_1 [i_2])))) ? (((arr_12 [7] [i_1] [0] [i_2] [i_3] [8]) ? (arr_7 [8] [1]) : var_7)) : 4294967283))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_14 = (max(var_14, ((min((max(5978026228522015457, (((arr_7 [i_1] [i_4]) ? 3491611933524295607 : (arr_3 [0]))))), (arr_5 [i_0]))))));
                        var_15 = ((((max((((arr_6 [9] [i_0]) ? (arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] [i_1]) : (arr_0 [3]))), (arr_12 [7] [i_0] [i_1] [i_2] [i_2] [i_4])))) && (((~((~(arr_8 [i_0] [i_2] [1] [i_0]))))))));
                        arr_16 [7] [7] [i_2] = (arr_5 [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_16 = ((((((arr_6 [i_5] [i_1]) ? (arr_6 [i_0] [i_0]) : (((max((arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [9]), var_2))))))) ? ((max(var_9, ((var_7 ? (arr_15 [i_0] [i_1] [i_2] [i_5]) : (arr_11 [i_0] [i_2] [i_2])))))) : (((((var_9 ? (arr_11 [i_2] [i_2] [0]) : (arr_1 [i_1])))) ? (arr_6 [i_1] [i_2]) : (arr_14 [i_2] [i_1] [i_2] [i_1] [i_2])))));
                        var_17 = (max(var_17, (((13 ? ((((((arr_14 [i_1] [i_1] [i_1] [8] [i_5]) ? (arr_0 [i_0]) : (arr_0 [9]))) <= -57756))) : ((-((max((arr_17 [8] [1] [8] [6] [5] [i_2]), (arr_5 [i_1])))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_25 [i_2] = (max(((27 ? 4294967291 : -8192)), var_4));
                                var_18 = var_10;
                                var_19 = arr_20 [i_0] [i_0] [i_2] [i_2] [i_7];
                            }
                        }
                    }
                    var_20 = (max(var_20, (((0 ? -7844729621170313135 : ((((((arr_15 [i_0] [i_1] [7] [i_0]) ? var_11 : (arr_14 [i_1] [i_1] [i_1] [i_2] [i_2])))) / (arr_21 [i_0] [i_1] [9] [i_2] [9] [i_0]))))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = arr_24 [i_8] [i_2] [i_2] [i_1] [i_0];
                        var_21 = (min(var_21, (((!(((3073590517 ? 26064 : 39490))))))));
                    }
                    arr_29 [i_1] [i_1] [i_1] &= (arr_24 [i_0] [i_0] [i_1] [i_0] [4]);
                }
            }
        }
    }
    #pragma endscop
}
