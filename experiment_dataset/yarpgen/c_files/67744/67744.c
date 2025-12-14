/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = -7863787890204382144;
                var_19 = (((var_15 != -170137224) / (arr_0 [3])));
            }
        }
    }
    var_20 += ((((((!var_5) ? ((170137224 ? var_2 : var_4)) : ((170137224 ? -1959 : var_3))))) ? 5235548070639606355 : ((min(1051220556, 0)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = var_11;
                arr_11 [i_3] = -170137224;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = var_17;
                            arr_17 [i_2] |= (12102 / 24363);
                            arr_18 [i_2] [i_3] [i_4] [i_5] [i_3] [i_3] = (max(((((max(-170137224, var_15))) ? 9007199254740992 : (min(13099496694615038748, (arr_6 [i_5 - 1]))))), ((max(-0, ((170137224 ? 112 : 3243746739)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                var_23 -= arr_14 [1] [8] [21];
                var_24 = ((((84 ? ((var_11 ? var_14 : 240518168576)) : (((~(arr_20 [i_7])))))) == (((arr_1 [i_7] [i_7]) ? var_3 : (!1)))));
                arr_24 [i_6] [i_6] [i_6] = (min((((((1 ? var_4 : 2923))) ? 18446743833191383039 : 3243746739)), ((max(((var_13 ? 1051220551 : var_2)), -11805)))));
            }
        }
    }
    #pragma endscop
}
