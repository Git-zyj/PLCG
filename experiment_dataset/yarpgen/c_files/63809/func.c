/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63809
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
    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) var_10)))), (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = (_Bool)0;
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (11962859547226413484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83)))))) ? (((/* implicit */int) min(((!((_Bool)1))), ((_Bool)1)))) : ((+(((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 - 3])) + (((/* implicit */int) (_Bool)1))))))));
                        arr_10 [1U] [(unsigned char)4] [1U] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_2 - 1] [(_Bool)1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) min((3091635732U), (1035400193U)))) : (max((arr_7 [i_0] [i_0] [i_0] [i_3]), (2137715404811310026ULL)))))));
                        var_18 = ((/* implicit */short) 16309028668898241571ULL);
                        var_19 ^= ((/* implicit */unsigned long long int) ((_Bool) ((arr_1 [i_1 - 1] [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1 - 1] [i_2 + 2])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            {
                arr_16 [i_5] &= ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-29823))))), (((short) (unsigned char)131))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) max((arr_7 [i_4] [i_4] [i_5] [i_4]), (((/* implicit */unsigned long long int) var_11))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))))), ((~(arr_3 [(unsigned char)14] [i_6 - 1] [i_5 + 2])))));
                            arr_23 [i_4] [i_4] [i_6] [i_6] [(short)10] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)226)), (((arr_14 [i_7] [i_6]) ? ((((_Bool)1) ? (2137715404811310014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29627))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_8 = 3; i_8 < 18; i_8 += 2) 
                            {
                                var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_8 - 1] [i_6])) ? (((((/* implicit */_Bool) 4022055255868235217ULL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (unsigned char)96)))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                                var_24 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned int) arr_20 [i_4] [i_9] [i_4] [i_4]));
                            /* LoopSeq 2 */
                            for (short i_11 = 3; i_11 < 16; i_11 += 4) 
                            {
                                arr_34 [i_11] [i_10] = ((/* implicit */unsigned char) ((max((arr_17 [i_5 + 2] [i_5 + 1] [i_10 - 1]), (min((arr_30 [(unsigned char)8]), ((_Bool)0))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)59)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)-30860), (((/* implicit */short) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
                                arr_35 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_5 - 3] [i_5 - 2])))))));
                            }
                            /* vectorizable */
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                            {
                                arr_39 [i_4] [(_Bool)1] [i_5] [i_5] [i_9] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (arr_24 [i_10 + 1] [i_9] [i_5 - 2] [3U] [i_4])));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((arr_28 [i_5 + 1] [i_5 + 1] [i_12]) ? (((/* implicit */int) arr_28 [i_4] [i_5 + 2] [i_12])) : (((/* implicit */int) arr_28 [i_4] [i_5 + 1] [8U])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
