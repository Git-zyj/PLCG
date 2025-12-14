/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 4907444938996570798));
    var_18 = (max(var_18, (((((((6590689095169258777 / var_5) / (var_0 / var_16)))) ? ((var_15 ? ((var_5 ? 0 : 2591771595)) : -0)) : (((max(7749, 1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_12));
                var_20 = ((((((!11856054978540292816) ? ((175 / (arr_0 [i_0]))) : (((arr_2 [i_0]) ? 73 : (arr_0 [i_1])))))) ? ((((2544820100617808902 != (arr_1 [i_0]))) ? ((max(var_2, 224))) : (((arr_3 [2] [i_1]) ? 15901923973091742685 : (arr_0 [i_0]))))) : ((max((arr_3 [i_0] [6]), (arr_0 [i_1]))))));
                var_21 = (max(var_21, ((max((((((-(arr_3 [i_0] [i_1 - 1]))) - (arr_2 [2])))), ((-11856054978540292838 ? (1834878660 - 92060267) : ((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0])))))))))));
                arr_4 [i_0] [i_0] = (((arr_3 [i_1] [i_1 - 1]) != (min((arr_3 [i_1] [i_1 + 1]), 2193439993))));
            }
        }
    }
    #pragma endscop
}
