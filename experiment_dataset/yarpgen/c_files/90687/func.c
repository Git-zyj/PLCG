/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90687
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) arr_1 [i_0]);
            var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((unsigned char) max((arr_3 [i_0]), (arr_3 [i_0])))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_1 [i_0]), (min((((/* implicit */long long int) arr_3 [i_0])), (arr_1 [i_1])))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_2 [(short)10] [(short)10] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_2])), (min((arr_3 [i_0]), (((/* implicit */short) arr_7 [i_2])))))))));
            arr_9 [i_2] |= ((/* implicit */long long int) arr_7 [i_0]);
            arr_10 [i_0] = arr_1 [i_0];
            var_16 = ((/* implicit */int) ((short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) + (5U)))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_7 [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_11 [(signed char)2]))) ? (((long long int) 4294967291U)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2110037993U)) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_3]))) : (((int) arr_2 [i_4] [15U] [i_0]))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? ((-(((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) < (arr_11 [i_0]))))));
            }
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_20 *= 2184929302U;
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_5] [i_5])) ? (arr_17 [(signed char)4] [i_5] [i_5] [i_5]) : (((long long int) arr_17 [(unsigned short)14] [i_3] [i_3] [i_3]))));
            }
        }
        arr_18 [i_0] [i_0] = ((/* implicit */int) (unsigned short)36293);
    }
    var_23 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (min((19U), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (signed char)80))));
}
