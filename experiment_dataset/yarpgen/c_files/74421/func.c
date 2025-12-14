/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74421
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
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-31097)), (var_6)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            arr_15 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((5962435370055461656ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))), (arr_14 [i_4 + 3] [i_1] [i_1] [i_3] [3ULL])));
                            arr_16 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_2]);
                        }
                        for (int i_5 = 4; i_5 < 8; i_5 += 2) /* same iter space */
                        {
                            var_15 -= ((/* implicit */unsigned int) arr_0 [i_2] [i_0]);
                            var_16 += ((/* implicit */signed char) var_1);
                        }
                        for (int i_6 = 4; i_6 < 8; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_0 + 1] [(signed char)2] [(signed char)2] [i_6] [i_2] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11463955840584635218ULL)) ? (max((((12484308703654089960ULL) / (12484308703654089956ULL))), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1757561645441728653ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 5962435370055461656ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (2745941876U))))))));
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_3)))) / (((long long int) arr_7 [i_3] [i_2] [i_1]))))) ? ((~(((/* implicit */int) (signed char)32)))) : (((((/* implicit */_Bool) (-(var_9)))) ? ((-(var_3))) : (((/* implicit */int) arr_0 [i_6 - 3] [i_0 + 1]))))));
                        }
                        for (int i_7 = 4; i_7 < 8; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) 1378789856);
                            var_18 = ((/* implicit */short) min((((((/* implicit */int) arr_12 [i_7] [i_1] [9] [i_7 + 2] [i_1] [i_0 + 1])) ^ (((/* implicit */int) arr_12 [i_7] [i_1] [3U] [i_7 + 2] [i_1] [i_0 - 1])))), (((/* implicit */int) (signed char)28))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_7] [i_7])) ? (((/* implicit */int) arr_13 [i_3] [i_1] [i_2] [i_3] [2])) : (-1378789856)))) : (((/* implicit */unsigned long long int) min(((~(1755509742U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_8))))))))))));
                            arr_27 [i_0] [i_1] [i_2] [i_7] [(unsigned short)5] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_18 [i_3] [i_3] [10] [i_7 - 2] [i_7 - 4] [i_7]))))));
                        }
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(4259489765U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (263761363)))))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) ? ((-(((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 1] [i_0 - 1] [0ULL])))) : (min((1276286341), (1599547626))))))));
                        arr_28 [i_0] [i_1] [i_2] [(signed char)1] [i_2] = ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (var_3)))) : (35477561U))) - (max((((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0 + 1] [9])) - (arr_4 [(short)10] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                arr_35 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-359335422)))) ? (min((((35477561U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_8]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                arr_36 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_29 [i_0 + 1] [i_8]), (arr_29 [i_0 + 1] [i_8])))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) arr_29 [i_0 - 1] [i_8]))));
                arr_37 [0U] [(signed char)10] [0U] [10ULL] &= ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_23 -= ((/* implicit */signed char) ((int) arr_1 [i_0 - 1] [i_0 - 1]));
                arr_40 [i_0 - 1] [i_8] [i_8] [i_10] = ((/* implicit */long long int) var_11);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned int) var_4)))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 95953020)) ? (16284691555698156382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((((/* implicit */_Bool) -359335408)) || (((/* implicit */_Bool) 1378789856)))) ? (((arr_6 [i_8] [i_8] [i_10] [i_10]) ? (((/* implicit */int) arr_7 [6U] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_10] [i_8])))) : (((var_11) ? (arr_31 [i_0] [i_8] [i_10] [i_10]) : (((/* implicit */int) arr_20 [i_0] [(signed char)7] [i_10] [i_8] [i_10] [i_8] [i_8])))))) : (((/* implicit */int) ((_Bool) arr_39 [2ULL] [i_0 - 1] [i_8])))));
            }
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                arr_43 [i_8] [0U] = (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (95953027))))))));
                /* LoopSeq 1 */
                for (int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) % (-95953021))))));
                    arr_47 [i_8] [i_8] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_32 [i_0] [i_8] [i_11] [(unsigned short)7]), (arr_32 [i_0] [i_0] [i_11] [(signed char)5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) (-(arr_3 [i_12])))), (min((var_4), (((/* implicit */unsigned long long int) arr_22 [i_8] [i_11] [i_12]))))))));
                    var_27 = ((/* implicit */unsigned int) (signed char)126);
                    var_28 ^= ((/* implicit */int) (signed char)-56);
                }
                arr_48 [i_0] [i_8] [0U] [i_8] = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)234)) : (-1)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((-359335408) + (2147483647))) >> (((var_9) - (6797248348996675987ULL)))))) <= (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) : (0ULL))))))));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) 359335407)) < (((3U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
            }
        }
    }
}
