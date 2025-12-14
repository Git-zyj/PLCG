/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((((var_3 + var_7) ^ var_1))) ? (min(var_14, var_13)) : (((min(var_7, var_1)) | (((var_8 >> (var_4 - 3775980317344335220))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [14] = ((((((max((arr_3 [i_0 + 2] [i_0] [i_0]), (arr_0 [i_0]))) + ((((!(arr_1 [i_0] [i_0])))))))) % (((((48786 ? 507793946 : 5648))) - (((arr_5 [i_0]) % (arr_1 [i_1] [i_1])))))));
                arr_7 [i_1] [i_0] [i_0] = max(((((((((arr_3 [i_0] [i_0] [i_1]) || (arr_4 [i_0]))))) != (arr_4 [i_0])))), (((((arr_3 [i_1] [i_0] [i_0]) > (arr_5 [i_1]))) ? ((((!(arr_2 [17]))))) : (max((arr_1 [i_1] [i_1]), (arr_4 [19]))))));
                var_19 = (min((((!(13488098543402557290 * 8792912509201947090)))), (-57085230 / -507793946)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_16 [14] [5] [i_4] [5] = (min(((~(((arr_10 [i_2]) + (arr_2 [22]))))), (((((((arr_8 [i_3]) != (arr_5 [i_4])))) < (~1205636641))))));
                    var_20 = min((max(((min((arr_0 [i_4]), (arr_0 [i_3])))), (arr_5 [8]))), ((max((min((arr_10 [i_2]), (arr_15 [i_4] [13] [i_4]))), (((arr_3 [i_2] [i_2] [i_2]) ? (arr_11 [i_2]) : (arr_4 [i_2])))))));
                    arr_17 [i_3] [i_4] = (arr_0 [i_2]);
                }
            }
        }
    }
    var_21 = ((((((((~var_6) + 2147483647)) >> (var_13 == var_0)))) | ((((min(var_9, var_17))) ? (var_8 % var_11) : var_17))));
    var_22 &= (((((((min(var_16, var_5))) ? (min(var_12, var_2)) : var_0))) ? (max((min(var_12, var_14)), -var_1)) : ((~((var_8 ? var_9 : var_8))))));
    #pragma endscop
}
