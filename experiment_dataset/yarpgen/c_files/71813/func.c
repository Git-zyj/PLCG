/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71813
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 &= (((!(((/* implicit */_Bool) var_11)))) ? (var_9) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) (short)7871)), (var_2)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [(short)2] [(unsigned char)5] = ((/* implicit */signed char) (((+(var_5))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned char)33))))) - (1)))));
        var_15 -= (unsigned char)225;
        var_16 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (~(-1962954835)));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6204925939111860600ULL)) ? (6204925939111860611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2])))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) % (arr_6 [i_1] [i_2] [i_1]))))));
        }
        for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_0 [i_1]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3 - 2]))) <= (12241818134597691005ULL))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_4 - 2] [i_3] [i_3 + 1])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_3] [6U] [i_4 - 2] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_10)))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? ((~(((/* implicit */int) arr_12 [i_1] [i_3 - 2] [i_4] [i_6])))) : (((/* implicit */int) ((283726776524341248LL) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    arr_18 [i_1] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_4 + 1] [i_4 - 1] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 6; i_7 += 4) 
                    {
                        var_24 ^= ((/* implicit */short) arr_1 [i_1]);
                        var_25 += ((/* implicit */unsigned long long int) var_4);
                    }
                }
                var_26 = ((/* implicit */unsigned char) ((1080863910568919040ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 7; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_27 ^= ((/* implicit */signed char) (unsigned short)44596);
                            arr_26 [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((var_11) - (14196401360814091734ULL)))))) != ((~(arr_4 [i_1])))));
                            arr_27 [i_4] = ((/* implicit */unsigned char) 1469523820U);
                            arr_28 [i_3] [i_4] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)510))));
                var_29 = ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4]))) : (((unsigned int) (_Bool)1)));
            }
            for (long long int i_10 = 2; i_10 < 6; i_10 += 1) 
            {
                arr_31 [i_10 + 1] [i_3 - 2] [i_3] [i_1] = ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_10 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3 - 2] [i_3 - 2]))) : (arr_6 [i_1] [i_3] [i_1]));
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_38 [i_1] [i_1] [9LL] [i_3 - 2] [i_12] [i_10] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18))));
                            arr_39 [i_1] [i_3] [(_Bool)1] [4] = ((/* implicit */unsigned short) ((arr_6 [i_3 - 2] [i_3] [i_3 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10 + 1] [(short)8] [i_1])))));
                            arr_40 [1U] [1U] [(unsigned char)6] [i_11] [i_11] = ((((/* implicit */_Bool) 11958811754744009098ULL)) ? (((/* implicit */int) (signed char)30)) : (((((((/* implicit */int) var_3)) + (2147483647))) >> (((577210774U) - (577210753U))))));
                            var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 283726776524341257LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [i_1] [0U] [i_10 + 4] [i_11 - 1]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) var_3);
                arr_41 [i_1] [i_3] [i_10] [i_10 - 2] = var_8;
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(var_9))))));
            }
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_37 [i_1]))));
            var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)255)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)23888)))))));
        }
        for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)226)))));
            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_1]))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (unsigned short)21389)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [2ULL] [2ULL] [i_13]))) : (var_11)))));
        }
        for (signed char i_14 = 1; i_14 < 7; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_15 = 2; i_15 < 7; i_15 += 2) 
            {
                arr_50 [(unsigned char)4] [i_14 + 2] [(unsigned char)4] [i_1] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_15] [i_14] [i_1])) && (((/* implicit */_Bool) (unsigned char)2)))) ? (arr_25 [i_15] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))));
                var_37 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_23 [i_15])))) || (((/* implicit */_Bool) arr_32 [(unsigned short)7] [(unsigned short)7] [i_14 + 1]))));
            }
            arr_51 [4U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
        }
        var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)40365))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        arr_55 [i_16] = ((/* implicit */int) arr_53 [i_16]);
        /* LoopNest 2 */
        for (unsigned int i_17 = 2; i_17 < 16; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_17 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17 - 2])))));
                    var_40 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_41 = ((/* implicit */int) var_5);
}
