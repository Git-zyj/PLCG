/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79492
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
    var_14 = ((/* implicit */unsigned short) ((signed char) var_1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))) : (min((8089143347794510711LL), (((/* implicit */long long int) 2147483647))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) var_7);
                    var_16 -= ((/* implicit */short) ((unsigned int) arr_2 [i_1] [i_1 - 1]));
                    var_17 = var_6;
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_3] [(signed char)4] [i_5] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (61440LL)));
                                var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((9U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))))) ? (((/* implicit */int) (short)32047)) : (((/* implicit */int) (short)32043)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) 4294967288U)) : (((((/* implicit */_Bool) 4294967281U)) ? (arr_18 [i_0] [i_3] [i_3] [i_0]) : (((/* implicit */long long int) 0U)))))), (((/* implicit */long long int) var_8))));
                        arr_20 [1U] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (arr_19 [i_0] [i_0] [i_6 + 1] [i_6 + 1]))) != (((/* implicit */unsigned long long int) arr_16 [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_23 [i_7] [(signed char)1] [i_1 + 1] [i_0 - 4] [i_0] = arr_5 [i_1 + 1] [i_0 - 1];
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) 16U)) + (-1LL))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    arr_26 [i_0 - 4] [i_1] [i_8] [3] = ((/* implicit */signed char) (((!(((-13LL) <= (((/* implicit */long long int) (-2147483647 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) 134729649U))) > (((var_8) ^ (((/* implicit */int) (short)7062)))))))) : ((-(var_9)))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_34 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [1LL] = ((/* implicit */signed char) 10U);
                                var_21 = ((/* implicit */_Bool) arr_25 [i_0] [(short)7] [i_0]);
                                arr_35 [i_0] [i_0 - 4] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    arr_36 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */long long int) arr_9 [i_0] [(signed char)2] [i_0])))), (((/* implicit */long long int) ((2995010848U) & (((/* implicit */unsigned int) var_1)))))))) ? ((+(var_4))) : (((/* implicit */int) ((945951056) != (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(min(((-(((/* implicit */int) (signed char)81)))), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)-32))))))));
}
