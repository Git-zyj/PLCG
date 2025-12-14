/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93383
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
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)-13604)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_2))))), ((short)28177))))));
    var_20 &= ((/* implicit */long long int) (unsigned short)31408);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (5855897632319153841LL) : (((/* implicit */long long int) var_18)));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) -1667508726)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18820))) : (arr_2 [i_0])))));
        arr_4 [i_0 - 1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) var_15)))));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((((((/* implicit */_Bool) 17984356461672772647ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) & ((~(((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_13 [(unsigned short)12] [i_2] [i_1] = max((((var_4) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13729))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_8 [i_1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)1512))) == (var_0)))) << ((+(((/* implicit */int) ((5855897632319153835LL) > (((/* implicit */long long int) -1667508731)))))))));
                                var_23 -= ((/* implicit */unsigned long long int) (+(5855897632319153841LL)));
                                var_24 = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) var_5);
                    arr_21 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) || (((/* implicit */_Bool) -1LL)))))));
                    arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8970)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) ^ (17592186044415LL)))))) : (((((((/* implicit */int) (unsigned short)55005)) != (var_18))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (var_16)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (int i_6 = 3; i_6 < 15; i_6 += 1) 
    {
        arr_25 [i_6 - 2] [i_6 - 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((255U), (((/* implicit */unsigned int) arr_5 [i_6 - 1] [i_6 - 2]))))) != (max((((/* implicit */long long int) (unsigned char)211)), (var_11)))));
        /* LoopSeq 4 */
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((int) (~((~(((/* implicit */int) arr_1 [i_6] [i_6])))))))));
            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((5855897632319153845LL), (((/* implicit */long long int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) 4294967062U)) : (arr_24 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15836232584242628872ULL)))))))) == (((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */long long int) 1756867927U)) : (((((/* implicit */_Bool) -740556222313459399LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55017))) : (var_0)))))));
            arr_29 [1] [i_7] [(unsigned char)0] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (var_18))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3))))) < ((-(var_12))))))));
            arr_30 [(signed char)11] = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2]))) : (var_4))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2])))))));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_33 [i_6] [13LL] [i_8] &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
            var_27 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [i_8]) | (var_4)))) ? ((~(arr_28 [i_6] [i_6 - 1] [i_8]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))))));
            var_28 = ((/* implicit */short) ((unsigned long long int) ((1667508730) - (((/* implicit */int) arr_5 [i_6 + 1] [i_6 + 1])))));
            arr_34 [i_8] &= ((/* implicit */unsigned long long int) ((long long int) (+(9926312540250787536ULL))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_9] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [9U] [i_6] [i_6 + 1])) && (((/* implicit */_Bool) max((arr_38 [i_6] [i_9] [i_9]), (((/* implicit */unsigned short) arr_12 [i_6 - 1] [i_6 - 1])))))))) : (min((1999317368), (((/* implicit */int) (short)16320))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (+(min((1667508730), (((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */_Bool) 1667508730)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_9] [i_9]))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_41 [i_10] [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (8997120036909023510ULL))), (((/* implicit */unsigned long long int) min((arr_32 [i_6 - 3]), (((/* implicit */unsigned int) (_Bool)1)))))));
            arr_42 [i_6] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 15030412360463179064ULL)))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_44 [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_43 [i_11] [i_11])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)-2)))))) == (min((var_12), (((/* implicit */unsigned long long int) 415538607U))))))) : (((/* implicit */int) var_7))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((9223372036854775799LL), (((/* implicit */long long int) (short)-1))))), (arr_43 [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)65535)) != (((/* implicit */unsigned long long int) (-(1331325877)))))))) : (((8841086524581523344ULL) ^ (((/* implicit */unsigned long long int) 1999317375)))))))));
        var_32 = ((/* implicit */short) (~(((/* implicit */int) (!(((var_18) == (((/* implicit */int) (short)-9)))))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
    {
        var_33 = (+(((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) var_18))))));
        arr_51 [i_12] = ((/* implicit */unsigned int) arr_45 [14]);
    }
}
