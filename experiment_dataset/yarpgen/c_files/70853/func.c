/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70853
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
    var_18 |= ((/* implicit */short) 903223203);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) min((961762255), (arr_1 [i_0] [i_0])))))));
        var_20 |= ((/* implicit */int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)62316)))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_5 [i_4]))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~((((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])))) - (((/* implicit */int) min((arr_0 [i_2 - 1] [i_3]), (((/* implicit */short) (_Bool)1))))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)92))))))));
        arr_11 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_4 [i_1] [1U])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [(short)10] [i_1]))))) ? ((+(min((arr_6 [i_1] [i_1] [i_1]), (arr_1 [i_1] [i_1]))))) : (((/* implicit */int) (signed char)-93))));
        arr_12 [6] |= ((/* implicit */_Bool) (~((-(1152921504606846975ULL)))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_25 = ((/* implicit */int) (+((((!(((/* implicit */_Bool) (short)32766)))) ? (((/* implicit */unsigned int) ((arr_16 [i_5] [i_6] [i_6]) - (((/* implicit */int) arr_4 [(short)6] [i_6]))))) : (var_4)))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned short) arr_3 [i_8]);
                                arr_25 [i_6] = ((/* implicit */signed char) (_Bool)1);
                                var_27 = ((/* implicit */_Bool) ((166935355) | (((/* implicit */int) (signed char)92))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5264056287551728842LL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) arr_19 [i_12] [i_12])), (((4503599627370495LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))))))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(signed char)9])) & (((/* implicit */int) arr_13 [(signed char)6] [i_10]))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_23 [i_5] [7U] [i_5] [i_6] [i_6]))) ? (max((var_17), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((arr_27 [(unsigned short)0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_6]))))))))) ? (arr_27 [i_5]) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                var_31 = ((/* implicit */signed char) ((2147483647) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5])))))));
            }
        } 
    } 
    var_32 &= ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (((unsigned short) 9223372036854775807LL)))))));
}
