/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88625
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((((var_11) + (2147483647))) >> (((var_6) + (118182879))))), (((/* implicit */int) (short)16))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((var_1) + (((/* implicit */unsigned int) var_4))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned short)11])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
            var_17 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]);
            var_18 = ((/* implicit */int) ((_Bool) ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0])) - (23128))))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (short)-32752);
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)25))) - (3515217304U))) / (((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (var_11))))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [5LL])) : (((/* implicit */int) (unsigned short)0))));
            var_19 = ((/* implicit */long long int) var_9);
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        arr_16 [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1] [i_3])) << (((/* implicit */int) ((arr_5 [i_0]) && (((/* implicit */_Bool) 503316480U)))))));
                        arr_17 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2] [8ULL] [i_4] [i_5])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)33904))))) : (((unsigned int) var_4))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [(signed char)14] [i_4] [i_6]))) < (((arr_19 [i_0] [i_3 + 1] [i_3] [i_4] [i_6] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_4] [i_6]))) : (503316480U)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_3 + 1] [i_3] [i_4] [12LL] [i_7]))) : (((((/* implicit */_Bool) -140522420)) ? (3515217304U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28814))))))))));
                        arr_23 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) var_8);
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_4] [i_2] [i_3])))))));
                        arr_24 [i_0] [i_2] [(signed char)1] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    }
                    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_3 + 1]))));
                }
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_31 [i_2] [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), ((+(var_12)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_3] [i_8] [i_9] [i_9])) ? (var_12) : (3515217304U)))) / ((-(arr_12 [i_0] [i_2] [i_8] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (arr_1 [i_0])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        arr_32 [i_0] [i_0] [i_0] [(_Bool)1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (unsigned char)153)) ? (-1) : (((/* implicit */int) var_14)))) : (-758206519)));
                    }
                    arr_33 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) << (((((arr_18 [i_0] [i_0] [i_3 + 1] [i_8] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)8] [i_3])) : (((/* implicit */int) var_7)))) + (5278)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [4] [(unsigned char)14] [i_0] [i_2] [i_3]))))) : (((((_Bool) arr_30 [i_0] [7ULL] [i_0] [i_8] [7ULL] [4LL])) ? (((/* implicit */unsigned long long int) (-(383595236)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (15764617892847820127ULL)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) << (((((((arr_18 [i_0] [i_0] [i_3 + 1] [i_8] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)8] [i_3])) : (((/* implicit */int) var_7)))) + (5278))) - (5256)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [4] [(unsigned char)14] [i_0] [i_2] [i_3]))))) : (((((_Bool) arr_30 [i_0] [7ULL] [i_0] [i_8] [7ULL] [4LL])) ? (((/* implicit */unsigned long long int) (-(383595236)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (15764617892847820127ULL))))))));
                }
                for (long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    var_27 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((var_6), (((/* implicit */int) var_5)))) / (((/* implicit */int) min((arr_27 [i_0] [i_0] [i_0] [i_10 - 1]), (var_14)))))))));
                    var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_7 [i_0]) & (arr_25 [9])))) ? (((/* implicit */unsigned int) ((arr_2 [i_2] [i_2]) / (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (unsigned short)37693)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [1] [1]))) : (var_12))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [(unsigned char)7] [i_10 - 1])))))))));
                    arr_36 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19))))) | (((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_0] [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)33904)) : (arr_26 [i_0] [i_3]))))) : (((/* implicit */int) ((((int) arr_21 [(unsigned short)13] [i_2] [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [i_0] [i_10])) < ((+(var_4))))))));
                    var_29 = ((/* implicit */unsigned char) var_12);
                }
                var_30 = ((/* implicit */short) (~((~((+(((/* implicit */int) arr_28 [i_0] [i_2] [i_3 + 1] [i_2] [i_3 + 1] [i_3 + 1]))))))));
                arr_37 [i_0] [(unsigned char)6] [(_Bool)1] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(arr_1 [(_Bool)1])))) ? (arr_26 [i_0] [i_2]) : (((/* implicit */int) (!(((/* implicit */_Bool) 754751395U)))))))));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    var_31 = ((/* implicit */short) (unsigned short)0);
                    arr_42 [i_11] [i_11] [i_11] [i_12] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4092LL) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18))))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) -2147483647))))) : ((-9223372036854775807LL - 1LL))))));
                    var_32 -= ((/* implicit */unsigned char) max(((unsigned short)33902), (((/* implicit */unsigned short) (_Bool)1))));
                }
                var_33 &= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) max((arr_41 [i_0] [i_0] [i_2] [i_11] [i_0]), ((unsigned short)65280)))), ((~(10U))))), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_2] [(_Bool)0] [i_11]))));
                var_34 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [4LL])))), ((~(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) arr_34 [i_0] [i_2] [i_11] [i_0] [i_11]))))))));
            }
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_35 = arr_29 [i_0] [i_13] [i_0] [i_13] [i_0];
            arr_46 [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((16742708629688346713ULL) % (((/* implicit */unsigned long long int) 1095216660480LL))))) ? (69805794224242688LL) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-10502)) + (2147483647))) << (((arr_38 [i_0] [i_0] [i_0]) - (2881760892U))))))));
            arr_47 [(unsigned short)4] &= ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_13] [i_13] [(unsigned short)14] [(unsigned char)14]);
            arr_48 [i_0] [i_0] = (-(((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_13] [6LL] [i_13]))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned short)112)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (1998941799)))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((-1LL) - (((/* implicit */long long int) 754751395U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967293U))))));
            var_38 = ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])));
        }
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((((12582912) & (((/* implicit */int) arr_15 [i_0] [(short)0] [i_0] [8U] [(signed char)14])))) - (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [4ULL] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36721))))) ? (((arr_30 [i_0] [(short)13] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [4])) : (((/* implicit */int) var_9)))) : (arr_40 [i_0] [(short)2] [i_0] [i_0] [i_0] [(unsigned short)9]))) - (121))))))));
        var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [6LL] [i_0])) + ((~(((/* implicit */int) ((unsigned char) var_1)))))));
    }
    var_41 = ((/* implicit */long long int) var_9);
    var_42 &= ((/* implicit */signed char) (-(var_1)));
}
