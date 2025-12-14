/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 21228));
                var_17 *= (((((((min(var_14, 1))) ? (min(2, (arr_2 [i_0] [i_1] [i_0]))) : (!-8351605667453893938)))) ? (((var_14 ? (!1148417904979476480) : 0))) : (((var_6 ? var_9 : var_1)))));
                var_18 = (max(var_18, (((((((((arr_1 [i_0] [i_0]) & (arr_0 [14])))) || (((1 ? 1 : 7941786293839191599))))) || ((var_8 >= (max(var_15, var_0)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_19 ^= (((1 ? var_9 : -var_6)));
                arr_11 [i_2] [i_3] [i_2] = (min(((-((1 ? 7941786293839191606 : -332196870442621530)))), ((((((arr_10 [6] [i_3]) ? 18446744073709551615 : 0))) ? ((var_14 ? 6 : 4024151971)) : (((min(var_13, 82))))))));
                var_20 = (~var_3);
            }
        }
    }
    #pragma endscop
}
