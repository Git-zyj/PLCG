/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 += ((19766 ? (arr_2 [2] [i_0] [i_0]) : (max((((137 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_1] [i_1] [i_1])))), 6332328642767686746))));
                var_15 = (min(((-(arr_2 [i_0] [i_0] [i_0]))), ((2015833552284490991 ? 255 : (6834 * 18495)))));
                var_16 = ((569345901021112897 ? -16138 : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
            }
        }
    }
    var_17 = (min(var_17, (((!((min((((var_7 ? 3304237690 : 16740))), var_10))))))));
    #pragma endscop
}
