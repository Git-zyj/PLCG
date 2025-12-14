/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99129
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
    var_20 += ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        var_21 -= ((/* implicit */short) arr_1 [i_0]);
        arr_4 [5] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_22 = max((min((var_18), (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 2600608506647749203ULL))))))) > ((~(max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_2 [i_0])))))));
    }
    var_23 = ((/* implicit */int) (~(((287667426198290432ULL) >> (((912405218U) - (912405211U)))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((var_10) > (((/* implicit */unsigned long long int) -422921476)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            {
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_1]))) : (((18159076647511261188ULL) | (arr_6 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_2])) + (((/* implicit */int) max((var_12), (arr_10 [i_1] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_1])) & (var_8)))) : ((~(arr_11 [i_1] [i_1] [i_2])))))));
                var_25 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_9 [18] [18])))));
                var_26 = ((((287667426198290441ULL) | (9771489393570328550ULL))) != (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1]))));
                arr_13 [i_1] [i_2] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) var_4)) ^ (arr_6 [i_2] [i_2]))), (((/* implicit */unsigned long long int) max((((unsigned int) var_6)), (min((((/* implicit */unsigned int) var_12)), (arr_7 [i_1]))))))));
                var_27 -= ((/* implicit */unsigned long long int) (-((-(arr_7 [i_1])))));
            }
        } 
    } 
}
