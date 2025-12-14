/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89826
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
    var_13 = (_Bool)1;
    var_14 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (((unsigned int) (signed char)7)) : (var_6))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_8))))));
    var_15 = min((max((((/* implicit */unsigned int) (_Bool)1)), (1277598585U))), (((/* implicit */unsigned int) var_4)));
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) >= (((((/* implicit */_Bool) 2653988335U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4032U))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 268435392U);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6)))) ? (min((1145656928U), (((/* implicit */unsigned int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3017368725U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) > (var_2)))))));
    }
    for (int i_1 = 2; i_1 < 7; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_4 [1U]);
        var_19 ^= ((/* implicit */unsigned int) arr_2 [2LL]);
        var_20 = ((/* implicit */_Bool) 2493857986U);
        arr_7 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [i_1 + 2]))))), ((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256))) : (arr_6 [i_1] [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 7; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (unsigned short)65520);
        arr_13 [2U] |= ((/* implicit */long long int) arr_0 [i_2 + 3]);
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)10])))))))) ? (((max((17175674880LL), (((/* implicit */long long int) -1829251041)))) >> ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) : (1603385542U))) - (4294967252U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)8] [6]))))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
            {
                var_22 *= (~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1)))));
                var_23 -= arr_6 [i_2 + 3] [i_4];
                var_24 ^= var_8;
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) >> (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)248)), ((unsigned short)18663)))) : (((/* implicit */int) arr_17 [i_5] [i_2] [i_2 + 2] [i_2 + 2]))))) : (((((long long int) 1277598603U)) - (((/* implicit */long long int) ((arr_8 [i_2] [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
                    arr_23 [i_3] [i_5] [i_5] [i_5] &= ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)28)))) + (((/* implicit */int) max(((unsigned short)49269), ((unsigned short)7487)))))) > ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22867))) <= (var_5))))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) % (1124680641U)));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                {
                    var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((878448570U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23514)))))) || (var_0)));
                    arr_28 [i_2] [i_3 - 1] [(unsigned short)6] [i_7] [i_7] [i_2] = ((/* implicit */int) ((unsigned int) (unsigned short)59663));
                }
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    arr_31 [i_2] = ((/* implicit */short) ((((int) (-(((/* implicit */int) var_10))))) | (((((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)28354)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (unsigned short)23514))))));
                    var_28 *= ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned int) -1073741824)) | (2232954140U))), (((/* implicit */unsigned int) (short)-16661))))));
                    arr_32 [i_2] [i_3] [i_3 + 1] [i_2] [i_5] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8218))) ^ (3017368707U))))))) + (((/* implicit */int) (signed char)-54))));
                }
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 7; i_10 += 2) 
                    {
                        arr_39 [4] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1544784369U)) ? (min((((/* implicit */unsigned int) (signed char)-4)), (3671690632U))) : (3912773682U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((1277598573U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))) <= (3017368727U))))) : ((((~(var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))))));
                        var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_34 [i_2] [i_3] [(unsigned short)6] [i_2] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (var_6) : (((var_3) - (var_5)))))));
                    }
                    arr_40 [i_2] [i_3 - 1] [i_9] = ((((/* implicit */_Bool) 65280U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) | (((/* implicit */int) (unsigned short)7506))))) : (((var_2) & (27043441U))));
                    var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) ^ (4290772992U)))))) || (((/* implicit */_Bool) arr_33 [i_2] [9]))));
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_30 [i_2] [i_2] [i_5] [i_11]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (4290772992U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)1016)))))))) : (arr_30 [i_2 + 2] [4U] [i_5] [i_12]))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_7))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        arr_52 [(unsigned short)8] [i_3] [i_3] [i_5] [i_13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_13] [i_2 + 1])) ? (arr_15 [i_5] [i_2 + 1]) : (arr_15 [i_5] [i_2 + 1])));
                        var_33 += ((/* implicit */unsigned int) (_Bool)1);
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 1; i_14 < 7; i_14 += 3) 
                    {
                        var_34 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) >> (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64520))))) > (((((/* implicit */_Bool) arr_54 [i_2] [i_11] [1U] [i_5] [i_14] [i_14])) ? (arr_43 [i_2] [i_2] [i_5] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64544))))))))));
                        arr_55 [i_2] [i_3] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((((/* implicit */_Bool) min((-586857403587622285LL), (((/* implicit */long long int) arr_42 [(unsigned char)8] [0U] [i_5] [i_3]))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)39758))))))) : (var_2)));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 7; i_15 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) (-(var_6)));
                        var_36 = ((/* implicit */int) max((var_36), (((arr_1 [i_11]) + (((/* implicit */int) (unsigned short)1016))))));
                    }
                    for (int i_16 = 2; i_16 < 7; i_16 += 3) /* same iter space */
                    {
                        arr_62 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) max(((-((~(((/* implicit */int) (unsigned short)998)))))), (((/* implicit */int) ((((/* implicit */int) (!(arr_22 [i_3] [i_5] [i_5] [i_2] [i_5] [0U])))) < ((+(2080374784))))))));
                        var_37 = ((var_3) & (((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)1))))))));
                        arr_63 [(_Bool)1] [i_3] [i_5] [i_11] [i_5] |= (!(((/* implicit */_Bool) ((long long int) var_10))));
                        var_38 *= min((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_2] [i_5] [i_11] [i_16 + 2])) ^ (((/* implicit */int) (unsigned short)23498))))), (var_1));
                    }
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((402653184) >> (((((/* implicit */int) (unsigned short)966)) - (966)))))), (((2145386496U) ^ (((/* implicit */unsigned int) 368399591))))))) ? (min((((/* implicit */unsigned int) -311933182)), (((((/* implicit */_Bool) (unsigned char)240)) ? (var_1) : (arr_20 [i_2] [(unsigned char)8]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % ((-(((/* implicit */int) (short)-1526)))))))));
                }
                for (signed char i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)23504)))))) : (159407588U)))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 596364266U)) ? (402653184) : (((/* implicit */int) (unsigned short)40796)))) ^ (((/* implicit */int) arr_66 [i_2 - 2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) 159407588U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)991))))) : (3696761883U)))));
                    var_41 = ((/* implicit */_Bool) ((unsigned int) var_3));
                    arr_67 [3LL] [i_2] [i_2] [i_2] = ((/* implicit */int) (signed char)-11);
                    arr_68 [i_2] [i_2] [i_2] [i_5] [i_5] &= ((/* implicit */unsigned int) (unsigned short)26544);
                }
                arr_69 [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 536870912)) ? (2015137263U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_3 + 3])))));
            }
            var_42 = arr_21 [i_2 + 3] [i_3 + 3];
        }
    }
}
