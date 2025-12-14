/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87014
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_0 + 2])))))) <= (0LL)));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 4])) ? (((unsigned long long int) ((144115188074807296LL) / (-4348992472016607821LL)))) : (((/* implicit */unsigned long long int) (+(4348992472016607820LL))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4))) * (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0 + 2] [i_0] [i_2 - 3])))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((-4348992472016607821LL) != (-4348992472016607821LL))))) ? (((arr_1 [i_0]) >> (((/* implicit */int) arr_3 [i_3])))) : (-528842758)));
                            var_16 = ((((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_2 - 4]) / (((/* implicit */int) (signed char)118))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (1184793729U));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_17 += ((/* implicit */short) ((((/* implicit */long long int) arr_14 [i_0 + 4] [i_0 + 4] [i_0] [i_0] [i_0])) - (-4348992472016607821LL)));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 3013705208U))));
                            var_19 += ((/* implicit */long long int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [7LL] [i_3] [i_0] [i_0] [i_0]))))))));
                            arr_16 [i_0] [(short)21] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_2] [i_0] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2])));
                        }
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)18435)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28672))) : (1281262087U)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18435))) | (12621476964846171096ULL))) : (11135280792823876170ULL)));
                            var_21 += ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551602ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3] [1U] [i_2] [(_Bool)1] [i_0]))) % (arr_19 [i_2] [i_6])))) : (max((68685922304ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [19ULL] [2] [(unsigned short)5])))))) << (((((/* implicit */int) (unsigned char)80)) & (var_1)))));
                            var_22 += ((/* implicit */unsigned long long int) (unsigned short)65535);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_7 = 4; i_7 < 20; i_7 += 3) 
        {
            var_23 = ((((/* implicit */_Bool) ((signed char) 9223372036854775795LL))) ? (((/* implicit */int) ((((arr_7 [(unsigned short)9] [14U] [i_0] [12U] [i_0] [(short)21]) && (((/* implicit */_Bool) 18446744073709551615ULL)))) || ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 2] [i_7]))))));
            var_24 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0]);
            var_25 += ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)12] [i_0]);
            var_26 = ((/* implicit */short) (+(528842758)));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(var_5))))));
                var_28 = ((/* implicit */unsigned short) min(((~(arr_4 [i_9 + 1] [i_0] [i_9 + 1]))), (((/* implicit */unsigned long long int) var_0))));
            }
            /* vectorizable */
            for (short i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0 - 1] [i_0 + 2]));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_7)));
                    var_31 = ((/* implicit */unsigned int) ((((int) var_10)) < (((/* implicit */int) var_3))));
                }
                var_32 = ((/* implicit */_Bool) var_11);
            }
            for (short i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_44 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(8168730052276786556ULL)))) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) (signed char)2))));
                            var_33 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((~(8792692258508660530LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            var_34 = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_13] [i_0 - 2]))))) <= (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228)))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0 - 1] [i_0 - 2]))))));
                            arr_45 [i_0] [i_0] [i_13] [i_0 + 3] [i_0] = ((/* implicit */long long int) 5525558799136317981ULL);
                        }
                    } 
                } 
                arr_46 [i_0] [i_0] [(unsigned short)17] [i_12] = ((/* implicit */unsigned int) min((var_5), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_1)))))))));
                var_35 = ((/* implicit */long long int) arr_6 [i_0] [i_8] [i_12]);
                arr_47 [i_0] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_12] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12]))), (((((/* implicit */_Bool) (unsigned short)9094)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_12])) ? (6839721851922753091ULL) : (((/* implicit */unsigned long long int) -8792692258508660531LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            }
            for (short i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                arr_52 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((4055447706826385355LL) >= (arr_5 [i_0] [i_0] [i_8] [i_0])))))) & (((((/* implicit */_Bool) ((17185124858497452827ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (signed char)-68))))))));
                var_36 = ((/* implicit */signed char) (+((-(((unsigned long long int) arr_36 [i_0] [i_0 + 3] [i_0] [i_0]))))));
                var_37 = ((/* implicit */unsigned long long int) ((((var_5) + (9223372036854775807LL))) >> (((/* implicit */int) ((arr_27 [i_0 + 4] [i_0 + 4]) >= (var_0))))));
            }
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) <= (((/* implicit */long long int) arr_51 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 3]))))))))));
        }
    }
    var_39 = ((/* implicit */unsigned int) var_5);
}
