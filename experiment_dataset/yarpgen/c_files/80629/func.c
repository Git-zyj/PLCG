/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80629
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) - (((1ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                {
                    var_22 += ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)140)))));
                    arr_13 [2] [i_2] = ((/* implicit */_Bool) var_16);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) arr_19 [i_4] [2] [i_4]);
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7])) ? (arr_16 [i_6]) : (((/* implicit */int) arr_20 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12854827661123943836ULL)) ? (var_1) : (((/* implicit */long long int) var_18))))) && (((/* implicit */_Bool) ((signed char) arr_23 [(unsigned short)5] [i_4]))))))) : (((arr_22 [i_4] [i_5] [i_6] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))) : (var_1)))));
                    }
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_5] [i_5]))));
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((long long int) var_5)) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_24 [i_4]) ? (((/* implicit */int) arr_20 [i_4])) : (var_13)))))))))));
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_30 [i_8] [(_Bool)1] [i_8]))));
                            }
                        } 
                    } 
                    var_27 &= ((/* implicit */int) (_Bool)1);
                    arr_33 [10] [i_5] [i_5] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_8])) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (var_13)))) * (((((/* implicit */long long int) var_13)) + (var_2))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_42 [i_11] [i_12] = ((/* implicit */int) var_18);
                                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)512))) <= (18446744073709551615ULL)));
                            }
                        } 
                    } 
                }
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((long long int) -8195134848479753580LL)))))));
                var_30 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_19)))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (3461283610U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) max((((/* implicit */unsigned short) var_19)), (arr_29 [16U] [(short)8] [i_5] [i_5])))))))));
                var_31 = arr_24 [i_4];
            }
        } 
    } 
    var_32 *= ((/* implicit */unsigned short) var_17);
    var_33 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-103)) > (((/* implicit */int) var_10))));
}
