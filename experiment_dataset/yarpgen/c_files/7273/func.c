/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7273
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
    var_19 = var_4;
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_13);
        arr_5 [9ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((var_0) || (arr_1 [(signed char)1])))) : (((/* implicit */int) max((arr_1 [i_0]), (var_13)))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)143)))))))));
        var_22 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)0)))) || (((((/* implicit */int) arr_6 [i_1])) == (2096994558)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) -8LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (arr_14 [i_1] [i_1] [i_1]) : (18ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_1] [i_1]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [20U])) ? (((((/* implicit */_Bool) (unsigned char)143)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2])))))))) : (((/* implicit */unsigned int) -1761138944))));
                        var_25 = ((/* implicit */unsigned long long int) arr_11 [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                    {
                        var_26 ^= (-(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2])) : (arr_8 [i_3]))));
                        var_27 = ((/* implicit */unsigned long long int) (unsigned char)143);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)109)) < (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_30 ^= ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) var_9)), (arr_23 [i_1] [i_2] [i_3] [i_6]))))) < (((unsigned long long int) arr_24 [i_1] [i_3] [i_6] [i_7])));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) ((13835058055282163712ULL) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_1] [i_2] [i_3] [i_3] [i_2] [i_7]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)234)), (4294967275U)))))))));
                            arr_27 [i_7] [i_2] [i_3] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (3503137674U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_2] [i_3] [i_7])) : (((/* implicit */int) arr_18 [i_2] [i_3] [i_6]))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((((unsigned long long int) (signed char)-46)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((773111618U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)1] [(short)1]))))))))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 7806750774930568026LL)) ? (16492674416640LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110)))));
                        }
                    }
                    arr_30 [8LL] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((arr_12 [i_2]), (((/* implicit */unsigned long long int) (short)-30011)))));
                    arr_31 [i_1] [i_1] [i_1] = (+(arr_19 [i_1] [i_2] [i_1] [i_1]));
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)243)))) || (((((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) == (((/* implicit */int) var_9))))))) < (max((max((((/* implicit */int) (signed char)110)), (arr_10 [i_1] [i_2]))), (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(4611686018427387908ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)98))));
}
