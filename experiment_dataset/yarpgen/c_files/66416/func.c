/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66416
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
    var_11 = ((/* implicit */unsigned int) ((2526598059093249711LL) - (((/* implicit */long long int) 2147483647))));
    var_12 = ((((/* implicit */_Bool) (((~(3609393227U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (2526598059093249711LL)))) << (((((/* implicit */int) var_1)) - (5458))))));
    var_13 = ((int) min(((+(((/* implicit */int) var_6)))), ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            arr_14 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [(short)7] [i_4] [i_4 - 4] [i_4] [i_4] [i_4] [i_4 + 1]))));
                            arr_15 [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64984))) * (arr_5 [i_0] [i_1]))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) 16125027111592315602ULL)) ? (-6484510915703821279LL) : (6571359542086024194LL)))));
                            var_15 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_0 [i_4]))))));
                        }
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -6571359542086024195LL))) % (((/* implicit */int) arr_6 [6U] [6U]))));
                        arr_16 [i_1] [(signed char)6] [i_2] [(signed char)6] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])) & (arr_5 [i_0] [i_1])));
                        arr_17 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
                    }
                    for (long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        arr_20 [i_5] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_5] [i_1] [i_0] [(_Bool)1])) & (((/* implicit */int) (unsigned short)29317)))) ^ (((/* implicit */int) (unsigned short)551))));
                        /* LoopSeq 2 */
                        for (int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) / (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (2147483647) : (((/* implicit */int) arr_18 [i_2] [i_1] [i_6]))))) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : ((((_Bool)0) ? (2305843009213693951LL) : (((/* implicit */long long int) 1073741823U))))));
                            arr_24 [i_6] [(unsigned char)9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) (~(8162960005334621214LL))));
                            arr_25 [i_1] [(_Bool)1] [8] [i_1] [4ULL] [i_1] [i_1] = ((/* implicit */int) min(((+(((((/* implicit */_Bool) 10828290869730521054ULL)) ? (4287636844U) : (((/* implicit */unsigned int) 565117258)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) ^ ((~(((/* implicit */int) (unsigned short)14717)))))))));
                            arr_26 [i_1] [i_1] [i_6] [i_5] = ((/* implicit */_Bool) 2147483647);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_29 [i_0] [i_1] [i_5 - 2] [i_7] = max(((-(((/* implicit */int) arr_8 [i_5 + 2] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_5 + 2] [i_5 - 2])) ? (((/* implicit */int) arr_1 [i_5 - 1])) : (((/* implicit */int) (signed char)119)))));
                            var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) -2016999099))))))));
                        }
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) (+(((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) arr_0 [i_5 + 2]))))))))));
                        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_2] [i_5 - 1] [i_5 + 1])) ? ((~(((/* implicit */int) arr_18 [i_1] [i_1] [i_5])))) : (((((/* implicit */int) arr_27 [(unsigned char)2])) & (((/* implicit */int) (unsigned char)89))))))));
                        arr_30 [i_5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_19 [i_1] [4LL] [i_5 + 1] [i_5 + 1] [i_5])))) ? (((((/* implicit */_Bool) 4678188424094574083ULL)) ? (1273581774065488849LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)15215)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))))) : (((/* implicit */long long int) -920444982))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 6571359542086024194LL)) ? (6571359542086024194LL) : (448201727173327834LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30658)) ? (((/* implicit */int) arr_4 [i_8 - 1] [i_0] [i_0])) : (((/* implicit */int) (signed char)-76))))))))));
                                arr_37 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (901441046488467842ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))), (((arr_22 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 4] [i_8 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8 - 4] [i_8 - 4] [i_8 - 2] [i_8] [i_8 + 1] [i_8] [i_8 - 3]))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (17933076602766976333ULL)))))));
                                arr_38 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_33 [i_0] [i_8 - 4] [i_8 - 1] [i_8 - 2])) ? (((/* implicit */int) (signed char)-103)) : (arr_32 [i_1] [i_8 - 2] [i_8 - 4] [i_8 - 4]))) + (2147483647))) << ((((((~(((((/* implicit */_Bool) arr_11 [i_9] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [6])))))) + (21))) - (19)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
