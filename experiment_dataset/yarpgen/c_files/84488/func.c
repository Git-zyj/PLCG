/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84488
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)254)), (arr_3 [i_1 - 3] [i_1 - 3])))) ? (max((arr_3 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) 502811682)))) : (max((((/* implicit */unsigned int) (unsigned short)7037)), (arr_3 [i_1 - 3] [i_1 - 1])))));
                var_13 ^= max((((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) 1749799421)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (-1)))));
                var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)2]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (218953709U)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_10)))) : (max((((/* implicit */unsigned long long int) -502811699)), (12626566344868641629ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) max(((+(3176172905U))), (((((/* implicit */_Bool) 3337037715669746487LL)) ? (559781504U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1])))))));
                arr_15 [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3822605497U)) ? (arr_12 [(signed char)7] [i_2 - 1]) : (((/* implicit */int) (unsigned short)64211)))), (((((/* implicit */_Bool) 3337037715669746487LL)) ? (((/* implicit */int) (unsigned short)53978)) : (729398184)))));
            }
        } 
    } 
}
