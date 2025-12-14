/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61535
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [3LL] [i_0] [i_4] [i_4] [(unsigned char)9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)237))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4] [10U] [i_4] [i_4 - 1]))));
                                arr_16 [i_1] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2] [i_4 - 1] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_14)))));
                                var_18 = ((/* implicit */short) arr_5 [i_0]);
                            }
                        } 
                    } 
                    var_19 = ((arr_11 [i_0] [8] [i_0] [i_0 + 2] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2] [i_0 - 1] [i_0])) ? (var_14) : (var_10)));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) arr_10 [i_5] [8ULL] [i_5] [i_5]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        for (int i_9 = 4; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_8 - 2])))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_8] [(unsigned short)6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (2710956684U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                                arr_31 [i_0] [i_1] [i_1] [i_9] [i_9] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_7] [i_8] [i_9])))) | (((/* implicit */int) arr_17 [i_9] [i_9] [i_9 - 1] [i_9 - 1]))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_1] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) 1573733757))));
                    arr_33 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) arr_23 [i_1] [i_0] [i_0 + 1]);
                }
                arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])) : (((long long int) 14034281089832058375ULL))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32743)) && (((/* implicit */_Bool) var_14)))))));
            }
        } 
    } 
    var_25 = var_8;
    var_26 -= ((/* implicit */long long int) ((int) (unsigned short)9007));
}
