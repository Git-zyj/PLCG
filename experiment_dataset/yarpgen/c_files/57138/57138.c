/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((6536 ? var_11 : (((var_6 + var_7) % var_0))));
    var_14 = 6536;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 6529;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [3] = (((((((((arr_11 [i_0] [i_1] [i_1] [i_3 + 1]) ? (arr_11 [7] [i_2] [11] [i_0]) : 6541))) ? ((((arr_0 [i_0] [i_1]) < (arr_11 [i_0] [i_0] [i_0] [8])))) : ((-(arr_9 [i_0] [i_0] [5])))))) || (arr_1 [i_2])));
                        var_15 = (max(var_15, ((max(50610, ((((((((arr_11 [i_0] [7] [i_3 + 2] [i_0]) + 2147483647)) << (((arr_6 [i_0] [0]) - 43063))))) ? ((((arr_3 [5] [5] [i_2]) ? (arr_4 [i_2]) : (arr_5 [i_2])))) : (arr_0 [i_2] [i_1]))))))));
                    }
                }
            }
        }
        var_16 = (min(var_16, ((((((min((arr_0 [12] [12]), 6515)) / (((6510 % (arr_10 [i_0] [i_0] [12] [i_0] [i_0] [i_0])))))) - ((max((max(4096515864, (arr_9 [i_0] [2] [i_0]))), (((240 << (47 - 38))))))))))));
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_17 = (((((arr_7 [5] [i_4 + 1] [2]) << (((arr_13 [1]) - 14602)))) != 6529));
        var_18 = (((arr_4 [i_4]) || 4294967295));
        var_19 = (min(var_19, (arr_1 [i_4 + 2])));
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_20 = (max(var_20, (((((max(63, 120) + 223)))))));
        arr_19 [22] [2] = min(((8217353470791490396 ? 69 : 6517)), ((((((arr_17 [i_5 - 3]) ? (arr_17 [i_5]) : (arr_18 [i_5])))) ? (((!(arr_18 [i_5])))) : (arr_17 [i_5 + 1]))));
        arr_20 [i_5] = -1503257510;
    }
    #pragma endscop
}
