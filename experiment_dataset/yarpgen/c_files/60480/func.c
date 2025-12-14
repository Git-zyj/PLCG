/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60480
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
    var_10 &= ((((/* implicit */_Bool) min((min((16090162970827466299ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)68)) % (((/* implicit */int) (_Bool)1)))))))) ? (min((((((/* implicit */_Bool) (signed char)8)) ? (8881064055595416414LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54643))))), (var_6))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (min((2047839269U), (((/* implicit */unsigned int) (unsigned short)55458))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 *= ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */signed char) (!(arr_0 [i_0])));
            arr_6 [i_1] [(short)2] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) | (3271506144U)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_7 [i_0] [i_0] [i_2]))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    arr_15 [i_0] [i_2] [i_2] [i_0] [i_0] = ((short) ((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)10] [i_0]))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
                    {
                        var_15 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_5] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 2])) + (20331))) - (7)))));
                        arr_18 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                        arr_19 [i_0] [i_0] [(_Bool)1] [10ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2] [i_4] [(short)9] [i_5 + 1] [i_5 + 1])) && (((/* implicit */_Bool) arr_13 [(signed char)4] [0ULL] [(short)0] [i_5 - 1] [i_5 + 1]))));
                    }
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_6] [i_4] [i_4] [0ULL] [i_4] [0ULL] &= ((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_2] [(unsigned short)0]);
                        var_16 &= ((/* implicit */signed char) ((-5314053640663449406LL) != (((/* implicit */long long int) 2247128026U))));
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_17 += ((/* implicit */long long int) var_5);
                    arr_27 [i_0] [i_0] [i_0] [10LL] [i_3] &= ((/* implicit */_Bool) var_0);
                }
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_18 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6175108120685190732ULL)) ? (((/* implicit */int) arr_20 [i_3])) : (arr_29 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_0])))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2247128012U)) - (arr_21 [i_0] [i_0])))) ? (((/* implicit */int) arr_11 [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0] [(short)9] [(_Bool)1])) : (((/* implicit */int) var_5))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_37 [i_0] [i_0] [i_2] [i_0] [i_3] [i_9] [i_10] = ((/* implicit */long long int) 230630082);
                        arr_38 [i_0] [(signed char)10] [9ULL] [(_Bool)0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_29 [(short)9] [(short)9] [i_3] [(short)9])) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >= (((/* implicit */unsigned long long int) var_6))));
                        arr_39 [i_0] [i_0] [i_3] [i_0] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (2047839290U)));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_44 [i_0] [i_3] &= ((/* implicit */short) (((~(-210678791))) ^ (((((/* implicit */int) arr_22 [i_11] [(signed char)2] [i_3] [(short)4] [i_11])) ^ (((/* implicit */int) (short)-32753))))));
                        var_20 = ((/* implicit */short) arr_5 [i_0]);
                    }
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_9] [i_2] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_0] [i_3]))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_0])) ? (arr_41 [i_2]) : (arr_41 [i_3]))))));
                    arr_45 [8ULL] [0ULL] [i_0] [3LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) && (arr_9 [i_0])))))));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 7; i_12 += 3) 
                {
                    for (unsigned char i_13 = 3; i_13 < 8; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_13 + 1] [i_13 + 1] [i_13] [i_3])) ? (arr_3 [i_3] [i_12 + 2]) : (arr_31 [i_13 + 2] [i_13] [0ULL] [i_3]))))));
                            arr_50 [i_0] [i_2] [i_3] [i_12] [(signed char)4] = ((/* implicit */long long int) ((arr_0 [i_2]) ? (5440590165186751480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_24 = ((/* implicit */unsigned long long int) arr_13 [10LL] [i_12] [i_3] [7LL] [i_0]);
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_31 [i_2] [i_12 + 4] [i_13 + 2] [i_3]) : (arr_26 [i_12] [i_12 + 1] [i_13 + 3] [i_13] [i_13] [i_3])));
                        }
                    } 
                } 
                arr_51 [i_0] [i_2] = var_2;
                var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (arr_28 [(unsigned short)2] [(unsigned short)2] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_46 [i_0] [i_2] [i_3] [i_3])));
            }
            for (int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_27 -= ((/* implicit */unsigned char) -230630083);
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [7LL] [i_0] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0])));
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_0] [i_0] [5ULL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_40 [i_0])) ? (((/* implicit */unsigned long long int) -1612505078393769779LL)) : (arr_47 [i_0] [i_15] [(_Bool)1] [i_0] [i_15] [(_Bool)1])))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) (short)32752)) ? (arr_14 [10ULL] [10ULL] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_31 *= arr_16 [(_Bool)1];
            var_32 = (-(arr_3 [(_Bool)1] [(_Bool)1]));
            var_33 ^= ((/* implicit */unsigned short) ((signed char) arr_28 [i_0] [i_0] [(signed char)6]));
            var_34 = ((/* implicit */unsigned int) ((230630082) <= (((/* implicit */int) var_2))));
        }
    }
    for (long long int i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
    {
        arr_61 [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_59 [i_17] [i_17]), (var_7)))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_59 [i_17] [i_17])))))));
        arr_62 [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((3225653335U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_17]))) >= (arr_58 [i_17])))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned int) arr_59 [i_17] [i_17])), (1343884593U)))))) : (min((((/* implicit */unsigned long long int) ((var_1) || (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_58 [i_17])) ? (arr_58 [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(short)1] [(short)1]))))))));
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned long long int) (signed char)4);
        var_35 = (unsigned short)600;
    }
    for (long long int i_18 = 0; i_18 < 19; i_18 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [(signed char)13])) ? (arr_64 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (var_9))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_59 [i_18] [i_18]))))))))))));
        var_37 = ((/* implicit */unsigned int) (unsigned short)47572);
        arr_66 [i_18] [i_18] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) * (((unsigned long long int) 12730710413089038224ULL)))), (((/* implicit */unsigned long long int) arr_64 [i_18])));
    }
}
