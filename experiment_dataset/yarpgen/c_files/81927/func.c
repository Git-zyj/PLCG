/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81927
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 |= ((/* implicit */unsigned long long int) ((var_2) < (((2147483647) / (var_9)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */unsigned long long int) var_6)) + (arr_1 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_11 &= ((/* implicit */unsigned long long int) var_6);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_3] [i_1] [i_3] [i_2] = ((/* implicit */signed char) var_2);
                    arr_11 [i_2] = ((/* implicit */_Bool) (signed char)127);
                    arr_12 [i_1] [i_2] [i_3] = max((((/* implicit */int) ((arr_1 [i_2] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2])))))), (((((/* implicit */_Bool) arr_4 [i_3])) ? ((+(0))) : ((~(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
        var_12 ^= max((((/* implicit */long long int) var_3)), (arr_6 [i_1]));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (var_2) : (((/* implicit */int) (unsigned char)156))))) * ((+(arr_1 [i_5] [i_7])))));
                        arr_23 [i_4] = ((/* implicit */_Bool) ((short) (_Bool)1));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) (_Bool)1);
                            arr_28 [i_4] [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)23340)) ? (((/* implicit */int) arr_15 [i_6 - 2])) : (((/* implicit */int) var_5))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_14 [i_4] [i_9]))));
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_5))));
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 4; i_13 < 13; i_13 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) var_5));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_11] [i_12] [i_13]) : (((/* implicit */unsigned long long int) -1068404599)))))))) < (6144)));
                        arr_46 [i_10] [i_10] [i_11] [i_11] [i_12] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (7433890275771826777ULL) : (((/* implicit */unsigned long long int) var_3))))))) ? ((~(((/* implicit */int) ((signed char) (_Bool)1))))) : (((((/* implicit */int) arr_30 [i_12] [i_12] [i_13] [i_13 - 4] [i_13] [i_13])) * (var_6)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 18446744073709551615ULL))));
                        var_20 = ((/* implicit */int) var_0);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) 15728640);
                        var_22 ^= ((/* implicit */unsigned long long int) max((max(((~(var_2))), (((/* implicit */int) max((((/* implicit */short) arr_44 [i_10] [i_11] [i_15] [i_15])), (arr_13 [i_11])))))), (((/* implicit */int) ((signed char) (short)-23329)))));
                    }
                    arr_53 [i_10] [i_11] [i_12] [i_12] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_11]))) > (7710041526873349575ULL))))));
                    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(10736702546836202022ULL)))) ? (((/* implicit */long long int) ((arr_42 [i_10] [i_11] [i_12] [i_12]) % (((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_12] [i_10])), (var_2))))))) : (arr_6 [i_10])));
                    var_24 = ((/* implicit */int) arr_14 [i_10] [i_12]);
                }
            } 
        } 
        arr_54 [i_10] [i_10] = ((/* implicit */int) (((+(((/* implicit */int) arr_9 [i_10] [i_10])))) <= (((arr_9 [i_10] [i_10]) ? (((/* implicit */int) arr_9 [i_10] [i_10])) : (((/* implicit */int) arr_9 [i_10] [i_10]))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 3) 
            {
                {
                    var_25 &= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_48 [i_16] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446743523953737728ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (9LL))))))));
                    arr_60 [i_10] [i_10] [i_10] = (-(min((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (arr_7 [i_10] [i_16] [i_17])))), ((-(var_3))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_18 = 3; i_18 < 15; i_18 += 4) 
    {
        for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            {
                var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(-2147483631)))), ((~(5482065101913627706ULL)))));
                arr_65 [i_18] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_61 [i_18]))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_62 [i_18]), (((/* implicit */short) arr_61 [i_18]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) < (-9011486947907326250LL))))));
                arr_66 [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [i_18] [i_18] [i_18])) ? (((((/* implicit */_Bool) 1637698911)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (2376287316777869686LL)))) : (((((/* implicit */_Bool) arr_0 [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (5482065101913627690ULL))))) : (((/* implicit */unsigned long long int) ((-1863742965) - (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_27 += ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), ((-(((long long int) 480062635))))));
}
