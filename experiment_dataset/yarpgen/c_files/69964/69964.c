/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((var_6 >> (var_12 + 2256887848776332832)))), (max((((14 >> (18013298997854208 - 18013298997854188)))), (~var_14)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((max(1, (arr_1 [i_0])))) ? ((var_14 >> (((arr_3 [i_0]) + 6905834186733337879)))) : (((min((arr_2 [i_0]), (arr_2 [i_0])))))));
        arr_4 [i_0] = (arr_3 [i_0]);
        var_18 |= (((((14 <= (arr_3 [13])))) ^ (((((arr_3 [i_0]) <= (arr_1 [i_0])))))));
        var_19 ^= (max(248, 10));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = min(10462642213160999336, 242);
        arr_9 [i_1] = ((var_9 ^ (max((arr_3 [i_1]), ((var_6 ? var_3 : (arr_2 [i_1])))))));
        arr_10 [i_1] [i_1] = ((!((min(((var_2 ? 7984101860548552272 : 12)), (((7984101860548552280 ? var_0 : 4))))))));
        var_21 = (min(var_21, ((((arr_2 [i_1]) <= (arr_8 [6] [i_1]))))));
    }
    #pragma endscop
}
