/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98814
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) -1492723246)) : (-7661697400007974987LL)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 524256)) ? (4294967283U) : (4294967283U)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) && (((524256) != (((/* implicit */int) var_8))))));
        arr_6 [4ULL] |= ((/* implicit */_Bool) var_4);
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (3321964203U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */unsigned long long int) var_12)) - (min((((/* implicit */unsigned long long int) var_3)), (17074247392525084218ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
        var_16 = arr_7 [i_2] [i_2];
        arr_9 [i_2] = ((/* implicit */unsigned long long int) max((max((973003087U), (2684688400U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2])) ^ (((/* implicit */int) arr_7 [i_2] [i_2])))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_8 [i_2] [0ULL])) : (((/* implicit */int) (signed char)75))))))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_3])) | (((/* implicit */int) arr_11 [i_3]))));
                    arr_18 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (-524256) : (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */unsigned long long int) 944376493U)) : (arr_14 [i_4 - 2])));
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (arr_15 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_6 - 1])) ? (17074247392525084220ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524256)) ? (17074247392525084218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72)))))) ? (((/* implicit */unsigned long long int) arr_15 [i_3])) : (((((/* implicit */_Bool) var_9)) ? (arr_14 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) ((unsigned int) (signed char)62));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)24912))) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_7 [i_8] [i_8]))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_7 [(signed char)10] [4U])))))));
        var_24 = ((/* implicit */signed char) var_5);
    }
}
