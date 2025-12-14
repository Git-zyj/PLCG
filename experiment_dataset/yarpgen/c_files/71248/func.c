/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71248
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
    var_17 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1413245669)))) ? (((unsigned int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_0])) | (1162926153))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(1413245673))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)62599)) | (((/* implicit */int) (signed char)-92)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_8);
    var_22 ^= ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (short)3796)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_11))))), (((((((/* implicit */_Bool) arr_5 [5])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (var_16)))));
                var_24 += ((/* implicit */long long int) max((((((14U) | (2531423634U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [(unsigned char)7])))))))), (((/* implicit */unsigned int) ((unsigned char) 3956192046479177810LL)))));
                var_25 = ((/* implicit */short) (+(1763543674U)));
                arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [5U] [i_3] [i_2 - 3])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 2] [i_2])))) | (((/* implicit */int) arr_2 [i_3] [i_3] [i_2 - 1]))));
            }
        } 
    } 
}
