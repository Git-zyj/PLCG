/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((!(((var_1 | (arr_3 [i_0]))))))) ^ (arr_3 [i_0])));
                var_14 = (max((((~(((var_3 != (arr_0 [i_0] [i_1]))))))), ((35 ? 10572955626053435015 : 16373))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_15 = ((((((arr_7 [i_2 + 2] [i_2 + 2]) >> (((arr_9 [i_2 + 2] [i_2 + 2]) - 2487))))) ? ((min((32411 / -1086411754), 16373))) : ((var_8 * (min(var_1, (arr_10 [i_3])))))));
                arr_11 [i_2] = ((((min((arr_9 [i_2] [i_2 + 2]), var_0))) ? ((~(arr_5 [i_3]))) : (arr_1 [i_3] [i_2 + 2])));
                var_16 = (((arr_0 [i_2 - 1] [i_2 - 1]) / (((var_1 <= (arr_7 [i_2 + 2] [i_2 - 1]))))));
            }
        }
    }
    #pragma endscop
}
