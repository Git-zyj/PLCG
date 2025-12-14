/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6867
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(5714585906350942243ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12732158167358609384ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0])))))));
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_8))));
                                arr_15 [i_1] [i_2] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_4 - 2] [i_3] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [(short)3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_0))))) : (12732158167358609360ULL)));
                                var_14 |= ((/* implicit */unsigned short) (-((+(12732158167358609384ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) ((unsigned char) var_4));
                        var_16 = ((/* implicit */unsigned long long int) max(((+(arr_16 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_2]))), (max((arr_16 [i_6 + 1] [i_6 - 1] [i_6 + 2] [i_2]), (arr_16 [i_6 + 4] [i_6 + 3] [i_6 + 2] [i_2])))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        arr_22 [i_3] [i_2] [14U] [i_7 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [(unsigned char)10] [11] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */int) (unsigned short)9)) << (((/* implicit */int) (_Bool)0))))));
                        var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24021))) : (var_5))));
                        arr_23 [i_1] [1ULL] [i_2] [i_2] [i_3] = ((/* implicit */short) 5714585906350942232ULL);
                        arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) min((4294967293U), (((/* implicit */unsigned int) (signed char)80))))) : (var_1)));
                    }
                    /* LoopSeq 3 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) min(((+(12732158167358609381ULL))), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_8 + 1] [i_2] [i_8 + 1])), (arr_12 [i_2] [i_2] [i_3] [i_8 - 1] [17ULL])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) var_4)), (5714585906350942234ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_3]), ((unsigned char)4)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1] [i_3] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2968349313U)) : (5714585906350942234ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))));
                        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_9]))));
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_1] [i_2] [i_3]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_2] [i_3] [i_2] [(unsigned char)9]))) : (arr_25 [i_1] [i_2] [i_1] [i_1]))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                        var_24 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)51))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_36 [i_2] = ((/* implicit */short) arr_18 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [2ULL] [i_1]);
                        arr_37 [0LL] [i_11] [i_1] [i_11] |= ((/* implicit */short) (+(arr_16 [i_11] [i_3] [i_2] [i_11])));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8652705511171373096LL)) ? (((/* implicit */int) var_9)) : ((-(((((/* implicit */_Bool) arr_30 [i_1] [i_3] [i_11] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))))));
                        var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5714585906350942256ULL)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) arr_29 [i_1] [14ULL] [i_2] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))));
                            var_28 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) <= (((((arr_16 [i_1] [i_2] [i_3] [i_2]) > (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_2] [i_1]))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [(short)15] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (5714585906350942255ULL))))));
                            arr_40 [i_1] [i_2] [i_2] [(_Bool)1] [(short)2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_14 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) arr_39 [i_1] [i_1] [i_11] [i_1] [i_1] [i_1]))))) * (((/* implicit */int) ((unsigned char) 190126686U)))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2376807734U))))));
                        }
                        for (short i_13 = 3; i_13 < 16; i_13 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) arr_27 [i_11] [i_2] [i_3] [i_11] [(unsigned char)10] [i_2])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))) == (((((/* implicit */_Bool) arr_30 [i_13] [i_13] [i_13] [i_13 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_30 [i_1] [i_1] [(unsigned short)13] [i_13 + 2]))))));
                            var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1] [i_13] [i_3])) ? (((((/* implicit */_Bool) ((arr_34 [i_11] [i_2] [i_3] [i_3]) >> (((((/* implicit */int) var_4)) - (49020)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((arr_41 [i_13 - 2] [(_Bool)1] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_30 [16ULL] [i_2] [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) var_1))), (((long long int) 1743016838U)))))));
                            var_32 = ((/* implicit */_Bool) max(((short)15051), (((/* implicit */short) (unsigned char)42))));
                            arr_43 [i_2] [i_2] [i_3] [i_11] [i_13] = ((/* implicit */int) ((unsigned short) max((arr_11 [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 2] [i_2] [i_13 - 1]), (((/* implicit */unsigned short) var_10)))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 3; i_14 < 17; i_14 += 2) 
        {
            for (short i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                {
                    arr_49 [i_1] [i_14] [i_15] = ((/* implicit */unsigned char) ((short) (((+(arr_21 [i_1] [i_1] [i_14]))) - ((((_Bool)1) ? (arr_31 [i_1] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    var_33 = ((/* implicit */_Bool) arr_31 [(signed char)4] [i_14] [i_15]);
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) max((arr_17 [i_1] [(short)1] [(unsigned char)15] [i_14] [i_17]), (((/* implicit */unsigned short) (short)-22))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3885228340351777004ULL))) : (((/* implicit */unsigned long long int) (+((+(2147483647))))))));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2012682134U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)7))))) ? ((~(6541209448612462327ULL))) : (((/* implicit */unsigned long long int) max((arr_31 [i_15 - 1] [i_15 + 1] [i_15 - 1]), (((/* implicit */unsigned int) arr_46 [i_15])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) (+(var_5)));
                                arr_61 [i_18] [(_Bool)1] [(_Bool)1] [i_18] [(short)6] [i_18] |= ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_37 = var_8;
                }
            } 
        } 
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)1))))));
        var_39 = ((/* implicit */signed char) ((short) (_Bool)1));
    }
    var_40 = (signed char)-121;
    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
}
