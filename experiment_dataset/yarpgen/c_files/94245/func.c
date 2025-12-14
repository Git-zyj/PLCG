/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94245
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0 + 2] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)2)))))));
        var_15 ^= ((/* implicit */unsigned long long int) max(((~(arr_2 [12ULL] [i_0]))), (((/* implicit */long long int) (signed char)-56))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned char) (signed char)5))))), (arr_3 [i_1 + 1] [2LL])))));
        var_17 ^= ((/* implicit */unsigned long long int) ((int) var_0));
        arr_5 [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_6)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) != (((/* implicit */int) var_6))))))))));
        var_18 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)0)), (9827915168185122296ULL)));
    }
    var_19 ^= ((/* implicit */signed char) ((int) (~(((var_1) & (((/* implicit */long long int) ((/* implicit */int) (short)-8509))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) max(((unsigned short)10), (((/* implicit */unsigned short) var_3))))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_21 ^= ((/* implicit */short) (~(((/* implicit */int) var_5))));
        var_22 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((0LL) ^ (((/* implicit */long long int) 2157096763U)))))));
                        var_24 = ((/* implicit */signed char) ((unsigned int) (unsigned char)215));
                        var_25 = ((/* implicit */unsigned char) arr_6 [i_2] [i_5]);
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7])) && (((/* implicit */_Bool) var_11))))));
                                arr_23 [i_7] [i_3] [i_4] [i_6] [i_3] = ((/* implicit */signed char) var_7);
                                arr_24 [i_2] [i_3] [0ULL] [i_6] [i_7] = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            {
                                arr_32 [i_8] [i_3] [(signed char)10] [i_8] [i_9] = ((/* implicit */signed char) 3076184300U);
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (max((((/* implicit */unsigned long long int) var_5)), ((~(8618828905524429308ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_2] = ((short) ((((/* implicit */int) ((_Bool) var_1))) + (((/* implicit */int) var_5))));
    }
}
