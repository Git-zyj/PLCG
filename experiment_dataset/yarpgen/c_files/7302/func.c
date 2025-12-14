/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7302
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
    var_18 = (~(((long long int) var_7)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) max((arr_2 [3LL]), (arr_0 [i_0])))))));
        var_20 |= ((/* implicit */unsigned int) ((long long int) var_4));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_22 = ((short) (!(((/* implicit */_Bool) -7804311827314274094LL))));
        arr_6 [i_1] [i_1] = ((((long long int) (-(((/* implicit */int) var_14))))) ^ (((/* implicit */long long int) ((unsigned int) arr_3 [i_1]))));
        arr_7 [i_1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))) != (((unsigned long long int) 13338873243691958298ULL)));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_23 = min((((arr_9 [i_2 + 2]) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 2])))), (((/* implicit */int) min((arr_8 [i_2 + 2] [i_2 + 1]), (arr_8 [i_2 + 2] [i_2 + 2])))));
        var_24 = ((/* implicit */unsigned long long int) arr_8 [(signed char)4] [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] [5LL] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_0 [i_3]), (arr_2 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [(signed char)1])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_0 [i_3]))))) : (((arr_9 [6]) ? (((/* implicit */unsigned long long int) 0U)) : (arr_4 [i_3]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */long long int) 1130331591U)) : (2048271780651158053LL))), (((/* implicit */long long int) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_3] [(short)5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_4] [i_4])))))))))), (min(((+(arr_10 [i_3] [i_4]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_3]))))))))))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((2048271780651158053LL), (((/* implicit */long long int) ((_Bool) arr_10 [5ULL] [i_3]))))))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)50)) * (((/* implicit */int) var_11)))))))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_6))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((min((arr_19 [i_4] [i_5] [i_6] [i_6] [(signed char)7] [i_6 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_3] [i_5]))))))) >> (((arr_11 [i_6 + 1]) - (7227286352662095345LL)))));
                    arr_22 [(unsigned char)10] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (arr_11 [i_6 - 1]) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_6 - 1])))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((((unsigned long long int) max((arr_10 [i_3] [6]), (((/* implicit */unsigned long long int) arr_20 [i_3] [(short)11] [i_3] [i_3] [i_3] [3]))))), (((/* implicit */unsigned long long int) arr_15 [i_5] [(unsigned char)4])))))));
                }
            }
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-2048271780651158033LL)))) ? (arr_10 [i_7] [i_7]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_9])))))) * (((((/* implicit */_Bool) 13338873243691958288ULL)) ? (((/* implicit */unsigned long long int) 2048271780651158053LL)) : (5107870830017593339ULL)))))));
                            arr_30 [i_3] [i_3] = ((/* implicit */signed char) (short)14845);
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [(unsigned short)2] [i_8 - 1]), (arr_10 [i_3] [i_8 - 1])))) ? (arr_10 [i_8] [i_8 - 1]) : (((/* implicit */unsigned long long int) (-(var_7))))));
                            var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_7])) < (((0) >> (((/* implicit */int) (_Bool)1))))))), ((unsigned short)27090)));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_17)), (6848324393031867493ULL))), (((/* implicit */unsigned long long int) ((var_7) > (((/* implicit */unsigned int) -16777216)))))))) ? (arr_1 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3779870367U)) < (15762598695796736ULL))))))))));
            }
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_35 |= ((/* implicit */signed char) ((unsigned char) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -952288984))))))));
                            var_36 = ((/* implicit */long long int) arr_28 [i_3]);
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_10] [i_11])) ? ((+((~(9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3])) >> (((/* implicit */int) arr_9 [i_11])))))));
                            arr_38 [7LL] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] &= arr_19 [i_3] [i_4] [i_4] [i_4] [i_12] [3LL];
                        }
                    } 
                } 
                arr_39 [i_3] [i_3] = ((/* implicit */short) 13338873243691958288ULL);
            }
            arr_40 [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 57511697)))) ? (((/* implicit */int) ((unsigned char) arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */int) arr_0 [i_4]))));
            var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_23 [0LL] [4LL] [i_4])))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_37 [i_3] [(unsigned char)3] [10ULL] [i_4] [i_4] [i_4] [(unsigned short)3])))))))) ? (((/* implicit */long long int) min((arr_12 [i_3]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_2 [i_4])))))))) : (-9223372036854775794LL)));
        }
        var_39 = ((/* implicit */unsigned int) var_9);
        var_40 = ((/* implicit */int) ((long long int) ((signed char) 1210826263594762614ULL)));
    }
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) (-(16996994552832743592ULL)))) ? (2147483647) : (((/* implicit */int) ((_Bool) var_13)))))));
        var_42 ^= ((/* implicit */short) ((((long long int) ((((/* implicit */int) var_17)) != (-16777216)))) < (((/* implicit */long long int) arr_41 [i_13]))));
        var_43 = ((/* implicit */int) ((unsigned short) ((long long int) ((((/* implicit */_Bool) -9223372036854775790LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_42 [(short)9]))))));
    }
}
