/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59414
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) (signed char)55);
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (signed char)55);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) (signed char)-55);
            var_15 = ((/* implicit */int) min((var_15), ((+(((/* implicit */int) (signed char)-12))))));
            arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5091779088568678172ULL)) && (((/* implicit */_Bool) min((13605482761485215180ULL), (206395237561989295ULL))))));
            var_16 = ((8987341614054064182ULL) ^ ((-(max((2339363256971470367ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_24 [i_4] [16U] [(short)14] [i_5] [(unsigned short)1] = ((/* implicit */int) 16107380816738081264ULL);
                            arr_25 [i_1] [i_3] [i_1] [i_5] [i_4] = ((/* implicit */unsigned long long int) var_8);
                            var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) -5601114749289601719LL)), (((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 - 1])) ? (min((((/* implicit */unsigned long long int) arr_19 [i_1] [20ULL])), (arr_7 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))))));
                            var_18 = ((/* implicit */unsigned short) arr_0 [i_1]);
                            var_19 ^= (!(((/* implicit */_Bool) (signed char)33)));
                        }
                    } 
                } 
            } 
            arr_26 [i_1 + 1] [i_1] [i_3] = min((arr_14 [i_1] [i_3] [i_1 - 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_1 - 1]))))));
            var_20 = ((/* implicit */int) (short)-140);
        }
    }
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7] [(unsigned short)1])) && (((/* implicit */_Bool) (short)-32643))))) == ((~(-399685933)))));
        var_22 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) 4294967295U)), (min((((/* implicit */long long int) -597697592)), (1165481288095845841LL))))), (arr_0 [i_7])));
        arr_30 [i_7] = ((/* implicit */unsigned long long int) (+(1165481288095845870LL)));
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) 17144718871926267572ULL);
        var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((arr_20 [i_8] [20U]), ((signed char)41)))), (((arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) * (arr_31 [i_8]))))) * (((/* implicit */unsigned long long int) (~(min((1968784055), (((/* implicit */int) (short)1023)))))))));
    }
    var_25 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
    var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) var_9)))))))));
}
