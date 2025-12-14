/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66308
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_0 [i_0])), ((+((((_Bool)1) ? (-8179549799783969917LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11662)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = min((max((var_6), (((/* implicit */unsigned short) arr_4 [i_0])))), ((unsigned short)226));
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_11))) * (((/* implicit */int) ((unsigned char) var_10)))))), (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (5114280791711541415LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65314))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(4294967287U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                        var_16 ^= ((/* implicit */unsigned short) -780961543);
                        var_17 = ((/* implicit */_Bool) 3555650162U);
                        var_18 = ((/* implicit */signed char) ((unsigned short) min(((unsigned short)202), (arr_9 [i_0] [i_0] [i_2 - 1] [i_0] [i_3 + 1]))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) max((((arr_15 [i_5 + 3] [i_2 - 1] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_2 - 1] [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))))));
                            var_20 = ((/* implicit */unsigned char) var_2);
                        }
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)249);
                            var_21 = ((/* implicit */unsigned int) arr_5 [i_6 + 3] [i_4 - 1] [i_1]);
                            var_22 = ((/* implicit */_Bool) max((1418895952U), (((/* implicit */unsigned int) (unsigned short)65310))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((min((((((/* implicit */int) (unsigned short)20965)) | (((/* implicit */int) (signed char)40)))), ((~(var_3))))) ^ (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_1] [i_2 - 1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_1] [(_Bool)0] [i_1] [i_2 - 1])) : (((/* implicit */int) var_2)))))))));
                        }
                        for (signed char i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)11185), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (arr_17 [i_0] [i_0] [i_2 - 1] [i_0]))) != (((((/* implicit */int) ((var_5) > (arr_12 [i_0] [i_0] [i_0])))) & ((+(((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (var_9)));
                        }
                        arr_25 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [i_2 - 1] [10LL] [i_2 - 1] [i_2] [i_4 + 1] [i_0])), (6539000989827737179ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)194)), (18005552318546386326ULL)))) ? (((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_0] [7LL])) : (((/* implicit */int) (unsigned short)225))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65306))) : (1777342818U)))) ? (min((arr_12 [i_1] [i_2] [i_0]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) min(((unsigned short)50023), ((unsigned short)65309)))) : (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0]))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_2 - 1] [i_2 - 1] [i_0]), (arr_8 [i_2 - 1] [i_2 - 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_8])))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_0])) ? (arr_15 [i_2] [i_2] [i_2] [i_0] [i_0] [i_8]) : (arr_15 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2 - 1])))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) max(((unsigned char)253), (((/* implicit */unsigned char) (_Bool)1))));
    }
    var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (var_4)));
}
