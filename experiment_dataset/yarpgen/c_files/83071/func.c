/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83071
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
    var_20 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) + ((-(2796850396U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)172));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_2] [i_0 - 1])))) ? (((/* implicit */int) (signed char)-38)) : (((((/* implicit */int) arr_9 [i_0 - 1])) - (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                    arr_10 [i_2] [i_1] [i_0] = min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (arr_2 [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))), (((/* implicit */unsigned long long int) min((1060953581U), (4294967295U)))));
                    arr_11 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 2]))) + (2796850396U)))) ? ((-(arr_7 [i_0 - 2] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(unsigned char)1] [i_0 - 2] [i_0 - 2])) & (((/* implicit */int) var_17)))))));
                    arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2] [i_1]))) ? (7825991709143308996ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1])))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) * (1498116899U)))) : (arr_0 [i_0 - 2] [i_1])));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) 6851277420460604906LL);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_3] [i_3])))) : (((/* implicit */int) max((var_6), (arr_14 [i_3] [i_3]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_3]))) : (-6851277420460604889LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))));
            var_24 = ((/* implicit */unsigned long long int) arr_16 [i_3] [(signed char)13] [(signed char)13]);
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_24 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_3]))));
            var_25 = ((short) 770286869);
        }
        var_26 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3])))))) * (1879048192U)));
        arr_25 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3]))))) >> (((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 770286869)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)78))))) : (((unsigned long long int) arr_19 [(short)14] [i_3]))))));
    }
}
