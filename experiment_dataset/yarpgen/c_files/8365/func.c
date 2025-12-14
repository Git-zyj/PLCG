/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8365
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) == (((/* implicit */int) ((short) (_Bool)1)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [(unsigned char)17] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(unsigned short)8] [(unsigned short)8] [i_2] [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((2135046548560385592LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        arr_8 [6ULL] = ((unsigned long long int) (-(((/* implicit */int) ((short) arr_2 [i_0] [(short)6])))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_16 = var_13;
        var_17 ^= ((/* implicit */unsigned char) 4318599961982776235ULL);
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) == (3581362614049220326ULL)));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_4] [i_5] [i_5]))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) arr_4 [(unsigned char)17] [i_4]);
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7 + 1])) * (((/* implicit */int) var_4))))) ? (15613163471306883463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7 + 1]))))))));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned char) (~(14865381459660331305ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) arr_14 [i_10])))))))));
                            arr_33 [i_4 - 1] [i_5] [i_6] [i_9] [i_5] = ((_Bool) ((min((-9223372036854775803LL), (((/* implicit */long long int) (unsigned char)0)))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_4] [i_4 + 2] [i_5])) | (var_8))))));
                        }
                    } 
                } 
                arr_34 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (+(var_8)));
            }
            var_24 = ((/* implicit */unsigned char) var_12);
        }
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            arr_37 [i_11] [i_11] [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4 - 1] [i_4])))) ? ((~(((unsigned long long int) 3581362614049220331ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_17 [5U] [i_11] [i_11])))))));
            arr_38 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_4 - 1])))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_48 [i_13] [i_13 + 2] [i_12] [i_12] [i_4] [i_4] = ((/* implicit */unsigned int) (+(13495669102209376884ULL)));
                        var_25 ^= ((/* implicit */long long int) min((14865381459660331270ULL), (((/* implicit */unsigned long long int) ((((int) 7122284472146255156LL)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12206))))))))));
                        var_26 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_4] [i_12] [i_13] [i_14])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)-32575)) : (((/* implicit */int) arr_22 [i_14] [i_14] [11ULL] [i_14]))))), (arr_36 [i_4] [i_13] [(unsigned char)4])));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) (unsigned short)62253);
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 16; i_15 += 1) 
    {
        arr_52 [(_Bool)1] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? ((-(var_3))) : (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) var_0))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_4 [i_15 + 1] [i_15 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))))));
    }
    var_29 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_65 [(unsigned char)4] [i_17] [i_18] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_41 [i_17]), (((/* implicit */int) arr_19 [i_18]))))) ? (((int) arr_24 [i_16] [i_17] [i_18] [i_19])) : (((/* implicit */int) (signed char)1))));
                            arr_66 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (short)-21574)) == (((((/* implicit */_Bool) max(((short)126), ((short)(-32767 - 1))))) ? (min((((/* implicit */int) (unsigned short)32640)), (arr_14 [i_19]))) : (((/* implicit */int) arr_46 [i_17]))))));
                            arr_67 [i_17] [i_17] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (short)-21574)) ^ (((/* implicit */int) var_6)))));
                            arr_68 [i_16] [i_17] [i_18] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_59 [i_17] [i_18])) > (var_3))))));
                        }
                    } 
                } 
                arr_69 [i_16] [i_17] [i_17] = ((/* implicit */_Bool) max((arr_14 [i_16]), ((+(arr_14 [i_17])))));
            }
        } 
    } 
}
