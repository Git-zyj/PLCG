/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61524
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [10U] [i_2] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((6126564853962507392LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7314687999698205283LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 1])) : ((+(arr_2 [i_0])))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 - 4] [i_1 - 1]))))) & (((((/* implicit */_Bool) -7314687999698205273LL)) ? (((/* implicit */unsigned long long int) 1023U)) : (5861337115983448828ULL)))));
                    var_15 = ((/* implicit */short) max((arr_4 [i_0] [i_1 + 4]), (((/* implicit */unsigned long long int) 3295701461U))));
                    var_16 = ((/* implicit */long long int) (((+(((/* implicit */int) var_13)))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)105))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))) - (12081434381913958110ULL)))));
                    arr_8 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) -652925346)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)105)), (652925345)))) : (max((-6590424105026528445LL), (((/* implicit */long long int) var_12)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (min((((/* implicit */unsigned long long int) 652925339)), (var_1)))))));
    var_18 = ((/* implicit */_Bool) var_11);
}
