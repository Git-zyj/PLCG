/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? (!160) : (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((221 % (arr_0 [i_0]))) != (((29 && (arr_1 [i_1]))))));
                arr_5 [i_0] [i_0] [10] = arr_3 [i_0] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_19 = (max(var_19, ((min((((arr_7 [i_3]) ^ 240)), (((!(((152 ? 128 : 151)))))))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 -= ((255 ? 107 : 226));
                                arr_21 [i_4] [i_5] [i_4] [i_3] [i_2] [i_4] = 82;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_8] [i_8] [i_2] = arr_27 [i_8] [14] [14] [i_3] [i_2] [i_2];
                            arr_29 [i_8] [i_7] [i_3] [15] [i_2] [i_8] = 174;
                        }
                    }
                }
                var_21 = (((((174 ? (192 == var_14) : ((((arr_7 [i_2]) >= var_0)))))) ? ((((min(157, var_5))) ? (~151) : ((207 ? (arr_15 [i_3]) : (arr_8 [i_3]))))) : ((~(arr_15 [i_3])))));
            }
        }
    }
    #pragma endscop
}
