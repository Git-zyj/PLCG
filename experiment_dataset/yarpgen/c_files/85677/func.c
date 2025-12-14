/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85677
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
    var_10 = ((/* implicit */unsigned int) 18446744073709551593ULL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (arr_6 [i_0] [i_0] [i_0]))))) != (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(signed char)12]))) : (var_1)))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */short) max((var_8), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_1] [(short)9] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_5])), (18200050128112377664ULL)))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) <= ((-(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] [i_6])))))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [(signed char)2] [i_0] [i_0] = ((/* implicit */unsigned long long int) -2082377582);
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) min(((unsigned char)2), (var_4))))))));
        arr_25 [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (1893907305U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((signed char)-34), (((/* implicit */signed char) (_Bool)1))))) ? (arr_26 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7])))))))) % (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (arr_26 [i_7] [i_7])))));
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) max((min((arr_26 [i_7] [i_7]), (arr_26 [i_7] [i_7]))), (((/* implicit */unsigned long long int) arr_27 [i_7]))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(11129225087352735322ULL))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(8936830510563328ULL)))) && (((/* implicit */_Bool) max((arr_26 [i_7] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)2)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) (_Bool)1);
                arr_34 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-6732)) + (6763)))))) ? (min((((/* implicit */unsigned int) var_4)), (8388096U))) : (((/* implicit */unsigned int) ((int) arr_32 [(signed char)15] [i_9 - 1] [(signed char)15])))));
            }
        } 
    } 
}
