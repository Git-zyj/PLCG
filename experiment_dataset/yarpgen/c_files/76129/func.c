/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76129
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((arr_3 [i_1]) - (5946740785518376015LL)))))) ? (((unsigned int) 4)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((int) arr_2 [i_0 + 1] [i_0 - 1])))));
                    var_14 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_0]))))));
                    var_15 &= ((/* implicit */unsigned long long int) ((min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [(signed char)1] [i_0 - 2])) <= (((/* implicit */int) var_11)))))));
                    arr_8 [i_0] = ((/* implicit */signed char) (!(((_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */unsigned long long int) min((((long long int) var_3)), (min((((/* implicit */long long int) min((0), (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (short)-20240)) ? (((/* implicit */long long int) -3)) : (-3080359615075762659LL)))))));
}
