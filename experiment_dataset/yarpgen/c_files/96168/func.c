/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96168
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_19 = var_1;
                    arr_9 [i_0] = ((/* implicit */_Bool) arr_1 [i_1 + 1]);
                    var_20 -= ((/* implicit */short) (((!(((/* implicit */_Bool) max(((short)-26440), (((/* implicit */short) arr_7 [i_2 + 3]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [24U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)186)))) * ((+(((/* implicit */int) (short)26451))))))) : (arr_4 [i_1 + 1])));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) -10)) : (var_12)))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-22792)))) : (((/* implicit */int) (short)26450)))))));
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_0] [i_1 + 1] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_18)))), ((~(((/* implicit */int) var_5))))));
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0]))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) == (15078423324396154743ULL))))));
                    var_23 |= ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4 + 1]);
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) arr_5 [i_0] [i_1 + 1]);
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_1 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_6 + 1]))));
                                arr_27 [i_0] [i_1 + 1] [i_0] [i_6] [i_7] = (+(((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (2735239788446104158ULL))));
                                var_26 = ((/* implicit */_Bool) arr_6 [i_0] [i_5 + 2] [i_6 + 2] [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))));
                        arr_30 [i_0] = ((/* implicit */short) (((!(var_10))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)20848))) : (arr_22 [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_1 + 1] [i_0] [i_5 + 1] [i_8 - 3])));
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 23; i_9 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] [i_5] [i_8 - 1] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_9] [i_0])))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                        }
                        for (short i_10 = 1; i_10 < 23; i_10 += 3) /* same iter space */
                        {
                            var_29 &= ((/* implicit */_Bool) (+(((arr_24 [i_0] [i_1 + 1] [i_0] [i_8 - 4] [i_10]) ? (arr_28 [i_0] [i_8] [i_8 - 4] [i_10]) : (16156094667233236108ULL)))));
                            var_30 = ((/* implicit */short) var_12);
                            arr_36 [i_0] [i_1 + 1] [i_0] [i_8] [i_10 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-69))));
                        }
                        var_31 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_1 + 1])))) >= (((((/* implicit */int) (signed char)-65)) | (((/* implicit */int) (_Bool)1))))));
                    }
                    var_32 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1877959346U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0]))))));
                    var_33 = ((/* implicit */short) (-(arr_4 [i_0])));
                }
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */long long int) ((/* implicit */int) var_18))) / (arr_34 [i_0] [i_0] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_22 [i_0] [i_0] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_14)))))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_15)))))));
    var_36 = (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_2)))))) : (553244714280997691LL))));
    var_37 &= ((/* implicit */int) var_7);
}
