/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_3] [i_4] = ((((((arr_2 [i_2 + 1]) ? (arr_2 [i_2 + 1]) : -1))) ? (arr_2 [i_2 + 1]) : (((arr_2 [i_2 - 1]) ^ (arr_2 [i_2 - 1])))));
                                var_20 = (max(var_20, (((27706 == ((((0 ? 10603213124422592084 : (arr_2 [i_3]))) * 3)))))));
                                var_21 = (((!7843530949286959532) ? (((arr_5 [i_3] [i_2] [i_1] [i_0]) | ((min(-27701, 0))))) : -25269));
                            }
                        }
                    }
                    var_22 &= max(((((var_7 >> (524032 - 524020))))), (arr_5 [i_0] [i_2 + 1] [i_2] [i_1]));
                    var_23 = ((198 ? ((((min(-32202, 0))) ? var_8 : var_14)) : ((-1732136931 ? (arr_4 [i_2 - 1] [i_1] [i_0]) : (arr_0 [i_2 - 1] [i_1])))));
                }
                var_24 += ((((((arr_5 [i_0] [i_0] [i_0] [i_1]) ? ((((var_0 < (arr_1 [i_1]))))) : (arr_3 [i_0] [i_0])))) ? 10603213124422592084 : (max(((-(arr_2 [i_1]))), 245))));
                arr_12 [i_0] [i_1] [i_1] = ((((max(((-1484222196 ? 10603213124422592060 : 1)), (((arr_8 [i_0] [i_0] [i_1]) ? 1 : (arr_2 [i_0])))))) ? (max(((((arr_6 [i_0] [i_0] [i_1] [i_1]) << (22161 - 22161)))), ((7843530949286959518 ? (arr_1 [i_0]) : 17)))) : (((~(arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_25 = ((((min(var_10, (min(1, var_7))))) ? ((((min(var_0, var_2))) ? var_18 : -25269)) : (255 || var_6)));
    var_26 = ((var_10 != (((-6486083650657026941 ? -25257 : var_16)))));
    #pragma endscop
}
