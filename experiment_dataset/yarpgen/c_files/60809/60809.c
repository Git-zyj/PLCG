/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (((((~(arr_3 [i_0] [i_0])))) ^ (arr_0 [i_1 - 4])));
                var_12 = (min(var_12, ((((((8258715153346710865 & (~4080)))) ? (((max((arr_0 [i_0]), 96)) | ((max(var_5, var_0))))) : ((((max((arr_3 [i_0] [0]), 2542774873)) & (min(4294963215, (arr_3 [2] [2])))))))))));
                var_13 = (max(var_13, (((65535 || ((!(((4294963216 ? (arr_3 [2] [2]) : var_1))))))))));
            }
        }
    }
    var_14 = (max(var_9, var_3));
    var_15 = var_8;
    #pragma endscop
}
