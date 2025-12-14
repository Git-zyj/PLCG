/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87206
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
    var_14 -= ((/* implicit */unsigned int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (var_4))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(_Bool)1]))))) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3307918571U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((2929310887U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
        var_17 = ((/* implicit */signed char) min(((~(2844294693143661192ULL))), (((/* implicit */unsigned long long int) (unsigned short)14538))));
        var_18 = ((/* implicit */unsigned long long int) 2484762471U);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35028)) ? (max((2070120210883576701LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (_Bool)0))))))) : (((((((/* implicit */long long int) arr_8 [i_2] [12])) / (-2702895672214338716LL))) * (min((var_2), (((/* implicit */long long int) 3307918588U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_13 [7LL] = ((/* implicit */int) (-(((arr_8 [(short)0] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [(unsigned short)3])))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (3307918571U)));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_4 + 1] [i_5 + 3] [(short)2])) + (((/* implicit */int) (unsigned short)44699))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_4 - 2])))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_23 [i_2] [i_3] [i_4 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)-32745)) == (arr_14 [i_4 - 1] [i_7])));
                    arr_24 [i_2] [18U] [i_2] [i_7] = ((/* implicit */short) ((var_10) >> (((806162875U) - (806162859U)))));
                    var_23 = ((/* implicit */unsigned int) (~(((var_9) + (13342077)))));
                }
                for (long long int i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))));
                    var_25 = ((int) ((int) (signed char)68));
                    var_26 = ((/* implicit */unsigned char) 13271491285822333305ULL);
                }
                for (long long int i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_27 |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))));
                    arr_29 [i_2] [i_3] [i_4 - 1] [i_4] [(signed char)19] [i_9 + 1] = ((/* implicit */short) (((((_Bool)1) && (((/* implicit */_Bool) var_9)))) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))));
                    var_28 = ((/* implicit */_Bool) var_9);
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((var_4) / (((/* implicit */long long int) 1078276522U)))))));
                var_30 &= ((/* implicit */signed char) arr_22 [(unsigned short)15] [i_2] [i_3] [i_3] [i_4]);
            }
            for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 3; i_11 < 19; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (short)32767);
                            arr_40 [5LL] [i_11] [i_10] [3LL] [i_3] [14] [i_2] = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                arr_41 [11ULL] [i_3] [i_10] [i_10 - 2] = ((((/* implicit */_Bool) 3494112406U)) ? (((int) arr_32 [i_2] [i_3] [i_10 - 3])) : (((((/* implicit */int) (short)32767)) | (((/* implicit */int) var_5)))));
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (987048741U))) << (((((/* implicit */int) (signed char)101)) - (73)))));
            }
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_33 = ((/* implicit */signed char) ((int) min((((arr_32 [i_13] [i_13] [i_13]) + (((/* implicit */int) (signed char)53)))), (((/* implicit */int) min(((unsigned short)9989), (((/* implicit */unsigned short) var_7))))))));
        var_34 = ((/* implicit */_Bool) (~(((((arr_25 [14ULL] [(signed char)16] [i_13] [i_13]) & (((/* implicit */int) var_5)))) >> (((((((/* implicit */_Bool) 4030363403013002411ULL)) ? (8350542460810619557LL) : (((/* implicit */long long int) 3199513935U)))) - (8350542460810619535LL)))))));
    }
    var_35 = ((/* implicit */_Bool) (unsigned short)19487);
}
