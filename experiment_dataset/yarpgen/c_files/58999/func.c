/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58999
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (((-(var_5))) & (((/* implicit */unsigned long long int) 0LL)))));
                arr_8 [i_0] [i_0] [i_0] = ((((-1734557953) == (((/* implicit */int) (unsigned short)13422)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1734557952)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)13424)))) * (((/* implicit */int) (unsigned short)41104))))) : (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_9)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 24; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_18 [i_2] [i_3] [i_2] = min((((((/* implicit */_Bool) var_3)) ? (arr_11 [i_3 - 2] [(unsigned short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_14 [3] [i_2] [i_4]), (((/* implicit */unsigned short) var_1)))))))));
                arr_19 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1818503078)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_3) << (((arr_11 [i_3] [i_2]) - (1378076953U)))))) * (((((/* implicit */_Bool) arr_9 [i_2])) ? (var_5) : (var_2))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -1734557944)) & (var_3)))))))));
                    arr_24 [i_2] [2LL] [(_Bool)1] [(unsigned char)14] |= (-(((((((/* implicit */int) arr_21 [i_2] [6U] [i_5] [1] [i_5] [6U])) << (((((/* implicit */int) arr_10 [i_4] [i_3])) - (79))))) ^ (((/* implicit */int) var_9)))));
                    arr_25 [i_2] [i_2] [i_2] [(unsigned short)12] [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_21 [i_5] [(unsigned short)11] [i_5] [i_5] [i_4] [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13422))) ^ (var_5))))), (((/* implicit */unsigned long long int) ((2643131906864611607LL) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_3 - 2]))))))));
                    arr_26 [i_5] [(unsigned short)10] [(_Bool)1] [i_3 + 1] [0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_3 + 1] [i_3] [i_3 + 1] [i_5]) & (((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1] [(signed char)4]))))) ? (((4389559758322900879LL) >> (((arr_15 [i_3 + 1] [i_3 + 1] [i_5] [i_3 + 1]) - (801410514))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (arr_15 [i_3 + 1] [18LL] [13] [i_5]))))));
                    arr_27 [2] [(unsigned char)14] [(unsigned char)14] [i_5] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                }
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((/* implicit */unsigned long long int) arr_13 [i_2] [(unsigned short)18] [0])), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [24U] [i_2]))) - (var_5))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24431))) >= (-1LL))))))))))));
            }
            arr_28 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) var_7)))), (arr_12 [6LL] [(signed char)12])));
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((11600265696006096423ULL) != (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3 - 1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) -1734557945)) ? (((/* implicit */int) (unsigned short)41104)) : (511))) : (1734557952)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-3340444402081998379LL)))) ? (arr_11 [i_3] [i_3 - 1]) : (min((((/* implicit */unsigned int) (unsigned short)24432)), (0U))))) : (3818604758U)));
        }
        arr_29 [i_2] = ((/* implicit */long long int) max(((unsigned short)41103), (((/* implicit */unsigned short) (unsigned char)0))));
        var_13 = (unsigned char)166;
        var_14 = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_32 [i_6] [i_6] = ((/* implicit */int) ((long long int) ((arr_31 [i_6]) % (-1994007264))));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)6412)) : (arr_12 [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -2643131906864611600LL))))) > (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned short) arr_23 [(unsigned char)24] [i_7] [(unsigned char)24]);
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_8]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_8])) : (arr_15 [i_8] [i_8] [i_8] [i_8]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            {
                var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6413))))));
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    arr_46 [i_9] [6LL] [(_Bool)1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((13481622766441476044ULL), (4965121307268075571ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 1) 
                    {
                        var_21 = (~(((/* implicit */int) (short)-32766)));
                        var_22 = ((/* implicit */long long int) 182371186U);
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) var_2);
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (short)1096))));
                        arr_51 [i_9] [i_9] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_9]))))) / ((-(arr_11 [i_9] [i_13])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)-6425)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1478032329)) ? (((/* implicit */int) var_7)) : (1361847929))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_9] [i_15 - 1] [i_9] [i_15 - 1] [i_15] [i_15 - 1]))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (var_4)));
                        }
                    }
                }
                /* vectorizable */
                for (short i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                {
                    var_28 = (+(-1361847930));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                    var_30 = ((/* implicit */short) (-(var_3)));
                    var_31 |= ((/* implicit */long long int) ((int) ((var_5) * (((/* implicit */unsigned long long int) 1361847929)))));
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                {
                    var_32 ^= ((/* implicit */unsigned int) var_6);
                    arr_62 [i_9] [i_9] [i_10] [(short)14] |= ((/* implicit */signed char) ((650058392U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_9] [i_10] [14] [i_9] [20LL])))));
                }
                for (long long int i_18 = 1; i_18 < 22; i_18 += 3) 
                {
                    arr_66 [i_9] [i_9] [i_10] [i_18 - 1] = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6978)) ? (((/* implicit */int) (short)-32383)) : (arr_15 [(signed char)1] [i_10] [i_18] [i_10])))), (((((/* implicit */_Bool) 476362538U)) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))))));
                    arr_67 [i_9] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)13443)) : (((/* implicit */int) (short)6983)));
                }
                var_33 = ((/* implicit */short) (unsigned char)253);
            }
        } 
    } 
}
