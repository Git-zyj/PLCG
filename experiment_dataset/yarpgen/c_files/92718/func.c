/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92718
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((int) ((int) var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)240)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 9471592685629447521ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) : ((-(((((/* implicit */_Bool) arr_0 [i_1])) ? (9471592685629447521ULL) : (9471592685629447515ULL)))))));
            var_17 = ((/* implicit */unsigned int) arr_0 [i_1]);
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) == (arr_3 [i_0] [i_0] [i_0])))))) > (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (9471592685629447525ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_2] [i_4] [i_4] [i_5 + 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_2 + 3] [i_5] [i_5 - 1] [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_2 + 3] [i_2 + 1] [i_4] [i_5 + 1] [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) arr_17 [i_2 - 1] [i_2 + 1] [i_4] [i_4] [i_4] [i_4]))));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_5] [i_5]);
                            arr_20 [i_5] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((short) ((int) arr_17 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0])));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2] [i_0] [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2 + 2] [i_0] [i_2 - 1] [i_2 - 1] [i_0]))) : (var_9)))));
        }
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (-(arr_3 [i_6] [i_6] [i_0])));
            arr_23 [i_0] [i_6] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_6]))) : (1802792577U)))));
            var_20 -= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_6]);
        }
        arr_24 [i_0] = ((/* implicit */_Bool) var_15);
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_28 [i_7] [i_7] = ((((/* implicit */_Bool) min((((unsigned int) arr_25 [i_7])), (((/* implicit */unsigned int) ((signed char) arr_13 [i_7] [i_7] [i_7] [i_7])))))) ? (var_15) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7])));
        arr_29 [i_7] = arr_25 [i_7];
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_14))));
}
