/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((var_7 ? (max((((3210611420720723084 ? var_0 : -656066004))), 13012549216972418189)) : ((((((arr_4 [i_2] [i_1] [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_5 [i_2]))) << (15236132652988828505 - 15236132652988828504))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, var_1));
                                arr_14 [i_0] [i_2] [15] [i_2] [i_0] = (((((-(3572682538619589686 || var_4)))) ? (((1152921504606846976 || 0) ? (3802708114852041314 / var_0) : ((3210611420720723084 ? (arr_13 [i_2] [i_3] [18] [i_1] [i_2]) : -1073741824)))) : 7));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_11 = ((~(min(3183944385, 288230376147517440))));
                        arr_17 [i_2] [i_1] [i_0] [2] [i_0] [i_0] = (max(((!(3210611420720723084 && 2061628714))), (max(((!(arr_1 [9]))), (arr_4 [i_0] [i_0] [i_0])))));
                        var_12 = (max(var_12, (((2233338588 ? 16128 : 9223372036854775807)))));
                        arr_18 [15] [i_2] = ((((!(arr_11 [i_0] [13] [i_1] [i_0] [i_5])))) / 1);
                        var_13 += (-1073741832 + 254);
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_14 ^= (((max(((3210611420720723075 & (arr_10 [i_0] [10] [15] [0] [17]))), var_2)) == 2147483647));
                        var_15 = (max(var_15, (((var_7 || (((~(!254)))))))));
                    }
                    var_16 |= ((+(((((arr_1 [i_0]) ^ (arr_8 [i_0] [i_2] [i_2] [i_1] [12] [i_0]))) / ((min(var_6, 1545801901)))))));
                }
            }
        }
    }
    var_17 = 0;
    #pragma endscop
}
