/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62776
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
    var_14 *= ((/* implicit */long long int) (((~((~(9223372036854775807LL))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) (~(1417000658U)))) : (3671910800614531634LL)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) -832743274233389770LL))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (unsigned short)12)))))) >= (((long long int) arr_1 [i_0]))));
        var_16 -= ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)0)), (0U)));
        arr_4 [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) | (var_1)))))) || (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) (unsigned short)0)))) >> (((((/* implicit */int) arr_1 [i_1])) - (6787)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) 3671910800614531634LL);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((4294967295U) - (0U))) - (((unsigned int) var_6)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (2505492862U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_8)))) : (((0LL) << (((arr_5 [i_1]) + (2753617982116250716LL))))))), (-3671910800614531637LL)));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned short) arr_16 [i_4] [i_4]));
        var_21 = ((/* implicit */unsigned int) ((var_3) % (-3671910800614531664LL)));
        arr_17 [i_4] = ((/* implicit */long long int) 0U);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (4248389232U)));
                    arr_23 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (var_1) : (((/* implicit */long long int) 4270957896U))));
                    arr_24 [i_4] [i_5] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 4294967281U)) : (-2409680002553578293LL));
                    arr_25 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((~(arr_22 [i_4] [i_5] [i_4] [i_4]))) | (var_3)));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)65529))) | (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
}
