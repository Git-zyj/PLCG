/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89957
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)23] [(unsigned short)16]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_12))) > (max((((/* implicit */long long int) 832490899)), (var_7))))))));
                arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -832490909))) ? (arr_2 [i_0]) : (min((arr_2 [i_0]), (((/* implicit */long long int) arr_5 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_1)), (arr_10 [i_2]))))) - (((unsigned int) arr_8 [i_3]))));
                var_13 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_12 [i_3] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (var_4))) / (var_8))), (((/* implicit */int) ((signed char) var_9)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) max((var_5), (((/* implicit */unsigned int) 832490921)))))), (var_5)));
}
