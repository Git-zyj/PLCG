/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] |= (min((((-var_3 && (arr_3 [i_1] [i_0 + 1])))), (max((min(1693555678, var_3)), (arr_0 [i_1])))));
                var_16 = (max(var_16, (((((((arr_3 [i_1] [i_0 - 1]) ^ (arr_0 [i_1])))) || ((min((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), 0))))))));
                var_17 = ((((((arr_0 [i_0]) | ((var_2 ? 66 : (-9223372036854775807 - 1)))))) ? 1693555678 : ((max((arr_2 [i_0 + 1] [i_0]), var_6)))));
                var_18 = (min(var_18, var_8));
                var_19 = (max((((max(var_13, 5433510474514724830)) | (arr_0 [i_0]))), ((max((arr_3 [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1]))))));
            }
        }
    }
    var_20 = max((min(var_6, var_7)), var_4);
    var_21 = ((!((min(var_3, var_0)))));
    var_22 = var_2;
    #pragma endscop
}
