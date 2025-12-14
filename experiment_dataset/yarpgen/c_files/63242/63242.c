/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((+(((var_5 * var_17) ? (!var_11) : ((75 << (32751 - 32744)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_0] = ((-(~1)));
                    arr_7 [i_0] [i_0] [i_2] = ((!((((arr_3 [i_1 + 1] [i_1 - 1]) % (arr_3 [i_1 + 1] [i_1 - 1]))))));
                    var_19 = ((((~(((arr_5 [i_1 + 1] [i_2]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_2]))))) | (arr_3 [i_0] [i_0])));
                    var_20 = (max(var_20, (451671895 * 2419699490)));
                }
                var_21 = (max(var_21, ((max(((((66 & 66) >> (((arr_0 [i_0] [i_1]) + 2238122279029803902))))), (max(((((arr_4 [i_1] [18] [i_0]) ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (arr_4 [i_0] [i_1 - 1] [i_1])))), (((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0] [14] [i_0]))))))))));
                arr_8 [8] [i_0] [i_0] = ((1745985002222040884 ? -1745985002222040885 : (((167 ? (!0) : (27745 && 59))))));
            }
        }
    }
    #pragma endscop
}
