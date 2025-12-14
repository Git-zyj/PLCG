/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_6, (((((var_9 ? var_13 : var_14))) ? ((-1562507693 ? 1 : var_16)) : var_0))));
    var_20 = 96;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((((-(var_9 | 92807290)))) / (((var_1 - var_11) ? (~0) : (min((arr_3 [i_0]), -1)))))))));
                arr_4 [i_1] &= ((~(arr_3 [i_0])));
                var_22 = (min(var_22, ((max(((-(arr_3 [i_0 + 1]))), (~4286578688))))));
            }
        }
    }
    var_23 = ((var_18 ? ((var_12 ? (~13416603616103529511) : (22 ^ var_7))) : var_12));
    var_24 = (max(var_24, var_3));
    #pragma endscop
}
