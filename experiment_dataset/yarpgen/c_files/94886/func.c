/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94886
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (_Bool)1)))))));
        var_14 |= ((unsigned char) ((signed char) arr_0 [i_0] [i_0]));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_4] [i_2] [i_4] = arr_12 [i_2] [i_3] [i_4] [i_3];
                                arr_17 [i_1] [6LL] [i_3] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [(short)6] [(short)6] [3LL] [3LL])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)2)))) < (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_4] [i_1 - 1] [i_4] [i_5])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7)))))) | ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : ((-9223372036854775807LL - 1LL)))))))))));
                }
            } 
        } 
        arr_18 [i_1] &= -1524347738;
    }
    for (long long int i_6 = 4; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)1)));
                    arr_26 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) < (((/* implicit */int) (!(((/* implicit */_Bool) 1752552937U))))))))));
                    var_17 = ((/* implicit */unsigned char) arr_25 [i_6] [i_6] [(unsigned char)22] [i_8]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        for (int i_10 = 3; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_5))));
                                arr_31 [20] [20] [20] [i_9] [i_10] = ((/* implicit */short) (~(7749648037668387351LL)));
                                arr_32 [i_6] = ((/* implicit */_Bool) ((unsigned char) ((((var_2) << (((((/* implicit */int) (unsigned char)224)) - (224))))) << (((/* implicit */int) (_Bool)0)))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (((long long int) var_5)))) * (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_8 + 1])), (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_27 [i_6] [i_7] [i_6] [i_7] [i_10 - 1])))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(arr_21 [i_9] [i_8] [i_7]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(max((2304717109306851328ULL), (((/* implicit */unsigned long long int) arr_1 [i_6] [i_6 + 1])))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) (unsigned char)246);
        arr_33 [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_6])) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_6] [i_6 + 1])), (arr_22 [i_6]))))));
    }
    var_23 = ((/* implicit */signed char) ((750316775836472858LL) + (((/* implicit */long long int) -1524347709))));
}
