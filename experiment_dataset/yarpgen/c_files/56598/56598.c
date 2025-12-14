/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (!var_6);
    var_15 = (max(((((max(621952569, var_1))) ? var_8 : (max(var_6, -1)))), var_9));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 &= ((((max(621952567, 14)) != (((-10286 ? 64486 : 179))))) ? var_7 : ((~(var_3 && 1))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1] [1] &= (((((~(arr_0 [i_0])))) ? (+-1215711903547954423) : var_12));
            var_17 = (((-(arr_5 [i_0] [i_0] [i_1]))));
            var_18 = (min(var_18, (~5601898046272475354)));
            arr_7 [i_0] [21] = ((((max((max(var_5, var_12)), (arr_4 [i_0] [15])))) ? -278232473 : 1));
            var_19 *= ((~((~(arr_5 [i_0] [4] [i_1])))));
        }
    }
    var_20 = (max((!var_2), (((0 << (-37 + 57))))));
    var_21 = (((~(max(var_12, 0)))));
    #pragma endscop
}
