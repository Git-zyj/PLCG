/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59151
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
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */signed char) 15883292095473046879ULL);
                arr_4 [17ULL] [i_1] = ((/* implicit */signed char) (+(771194373)));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            var_17 *= ((/* implicit */signed char) var_6);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((-771194374) + (2147483647))) >> (((771194373) - (771194361))))))));
                            var_19 -= ((((/* implicit */unsigned long long int) 0U)) | (((arr_1 [i_0 - 4] [i_0]) ^ (arr_8 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_1] [i_5]));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_3 [i_0 - 1])))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_5))) * (((/* implicit */int) ((((/* implicit */int) (short)-1756)) <= (((/* implicit */int) var_5))))))))));
                            var_21 -= ((/* implicit */unsigned char) ((((unsigned long long int) arr_16 [i_2 - 1] [i_2] [i_1] [i_0 + 1] [i_0] [i_0] [i_0])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((unsigned int) ((unsigned long long int) var_5))), (((/* implicit */unsigned int) ((arr_19 [i_6] [i_6] [i_6 - 1] [i_2] [i_0 - 4]) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15))))))))))));
                            arr_20 [i_0] [i_1] [i_3] &= ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) min((((/* implicit */unsigned int) -771194373)), (7U)))), (((((/* implicit */long long int) arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_3])) + (-4086079679130495709LL)))))));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) arr_15 [(signed char)16]))), (0U)))) ? (((((/* implicit */_Bool) ((signed char) var_2))) ? ((+(var_15))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (771194373) : (((/* implicit */int) var_9))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_24 |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 - 1] [(unsigned short)2]);
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((16885006247463141227ULL) - (16885006247463141215ULL)))))) < ((~(4294967279U)))));
                        var_26 = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1756)) <= (((/* implicit */int) (_Bool)0))))))));
                        var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)));
                    }
                    var_28 = arr_19 [i_0 - 4] [i_0 - 4] [i_1] [i_2 + 1] [i_2];
                }
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_25 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */short) var_0)), (arr_15 [i_0 + 1]))));
                    var_29 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_1] [i_8]) != ((-((-(-510634746310507340LL)))))));
                    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                }
                for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (((+(((/* implicit */int) (signed char)106)))) <= (((/* implicit */int) var_4)))))));
                    arr_29 [i_0] [i_1] [i_9] [i_0] |= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)60));
                    var_32 -= ((/* implicit */signed char) ((long long int) var_1));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 4; i_11 < 20; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_26 [i_1] [i_10]))));
                            arr_35 [i_0] [i_1] [i_9] [i_10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_2))));
                            var_34 = ((/* implicit */long long int) var_2);
                        }
                        arr_36 [i_0] [i_10] [i_9] = ((/* implicit */_Bool) arr_0 [i_9]);
                        var_35 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_6))) : (min((((/* implicit */unsigned int) (signed char)76)), (var_15))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_36 = (+(max((((/* implicit */unsigned long long int) (signed char)7)), (10228626632290612475ULL))));
                        arr_41 [i_1] [i_9] = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) arr_32 [i_0] [i_1] [i_1] [i_0])), (arr_21 [i_0 - 4] [i_12] [i_9]))), (((/* implicit */unsigned short) ((14U) < (arr_11 [i_1] [i_1] [i_1] [i_12]))))));
                        var_37 = ((/* implicit */_Bool) arr_6 [i_12] [i_9 - 1] [i_1] [i_12]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 1) 
                    {
                        arr_44 [i_1] [i_1] = ((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)8] [(unsigned short)8] [i_13] [(unsigned short)8] [i_1] [i_0]);
                        var_38 += ((/* implicit */signed char) ((short) arr_7 [i_13 + 1]));
                        arr_45 [i_0] [i_0] = ((/* implicit */signed char) (~((+(1027580917U)))));
                    }
                }
                for (unsigned char i_14 = 1; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    arr_49 [i_14] [i_14] = ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_12 [i_0] [i_14] [i_0 - 1] [i_14] [i_0])));
                    arr_50 [i_14] = arr_31 [i_1] [i_14 + 2] [i_14 - 1] [i_1];
                    var_39 = ((/* implicit */signed char) ((_Bool) 3440220159U));
                }
                var_40 ^= ((/* implicit */int) 12304604016453880613ULL);
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (short i_15 = 1; i_15 < 20; i_15 += 2) 
    {
        for (unsigned int i_16 = 2; i_16 < 21; i_16 += 2) 
        {
            {
                var_42 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_15 + 1] [14ULL] [i_16 - 2] [i_16])) && (((/* implicit */_Bool) arr_14 [i_16] [i_16] [i_15 + 1] [i_16] [i_15])))))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        {
                            arr_61 [i_18] [i_17] [i_17] [i_16 - 1] [i_15] = ((/* implicit */_Bool) var_13);
                            arr_62 [i_15] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((signed char) (unsigned short)6825));
                        }
                    } 
                } 
                arr_63 [i_15] [i_16] = ((/* implicit */int) ((unsigned long long int) ((((long long int) arr_40 [i_15 + 1] [i_15] [i_16 + 1])) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_15] [i_15] [i_15 + 1] [i_15] [i_15 - 1]))))));
                arr_64 [i_16] = ((/* implicit */unsigned short) ((signed char) 510634746310507340LL));
                var_43 = ((/* implicit */unsigned char) (-(var_15)));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned long long int) var_15);
}
