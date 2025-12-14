/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83339
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1589104758U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (2199023255551ULL)))))));
    var_14 &= ((/* implicit */_Bool) (signed char)114);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_4 [i_1] [i_0] [i_1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18297)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [(unsigned char)15]))))) : ((~(arr_3 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) arr_3 [i_0])))));
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13586)) + (((/* implicit */int) ((short) var_5)))))) ? (((((/* implicit */unsigned long long int) max((339526906), (2105193265)))) + (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [12U]) : (18446603336221196288ULL))))) : (max((((/* implicit */unsigned long long int) 3480721724U)), (14503946198904543031ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 24; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_7 [i_2 - 2] [i_3 + 1])) : (var_8))), (((/* implicit */unsigned long long int) max((arr_7 [i_2 - 2] [i_3 - 1]), (arr_7 [i_2 + 3] [i_3 + 1]))))));
                arr_12 [i_2] [i_3] [(short)22] = ((/* implicit */int) var_6);
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [13U] [i_2] [i_3 - 1]))));
                var_19 = ((/* implicit */short) var_9);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((624647625239061520LL) | (((/* implicit */long long int) 339526906))))), (min((((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2 + 2] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) max((arr_8 [i_3]), (arr_8 [i_2 + 1])))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_21 = ((((_Bool) (unsigned short)25274)) ? (((/* implicit */int) (unsigned char)127)) : (max((-1046608386), (((/* implicit */int) (short)28466)))));
                arr_17 [i_4] [i_4] = ((/* implicit */short) min((min((arr_16 [i_4] [i_5] [i_5]), (arr_16 [i_4] [i_4] [i_4]))), (((/* implicit */int) var_6))));
                arr_18 [19ULL] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) max((var_12), ((unsigned char)16))))), (max((arr_8 [i_5]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) - (var_7)))))));
            }
        } 
    } 
}
