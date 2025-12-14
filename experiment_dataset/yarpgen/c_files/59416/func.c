/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59416
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_8), ((unsigned short)54450))))) >= (max((arr_0 [i_0]), (((/* implicit */long long int) var_1))))))) : (((/* implicit */int) var_13)));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_2 [i_0]))));
        var_17 *= ((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (arr_2 [i_0])))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2832479795U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (arr_0 [i_1]) : (((((/* implicit */_Bool) (short)-24406)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2832479795U))))) : (((/* implicit */int) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (2832479795U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (min((arr_6 [i_0] [i_0]), (((/* implicit */long long int) -2147483644))))))));
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((1462487501U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) var_11))))) || (((arr_9 [i_0] [i_0] [i_0] [i_0]) != (arr_9 [i_0] [i_1] [i_0] [i_0])))));
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 |= max((((long long int) min((-1087245817), (((/* implicit */int) arr_21 [i_4] [i_4] [4U] [i_5] [i_6 + 2]))))), (((/* implicit */long long int) min((min((-482957188), (((/* implicit */int) (unsigned char)116)))), (((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0])) && (((/* implicit */_Bool) 1045594384U))))) & ((+(((/* implicit */int) (short)(-32767 - 1)))))));
                            var_23 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_0] [i_0]))) : (2832479809U))) : (arr_7 [i_0] [i_4] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1400831109U)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) var_10);
                        var_26 = arr_3 [i_8];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 4; i_10 < 9; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) arr_18 [i_11] [i_10] [i_4] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((_Bool) var_3))) : (((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)110))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) var_14)))))));
                            var_30 = ((/* implicit */unsigned long long int) var_14);
                            var_31 ^= ((/* implicit */_Bool) arr_1 [i_0]);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((14152328406269760530ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2635846516U)))))))) < (((/* implicit */unsigned long long int) 1462487502U))));
                            var_33 = 4294967293U;
                        }
                        for (int i_14 = 1; i_14 < 11; i_14 += 4) 
                        {
                            var_34 |= ((/* implicit */unsigned char) 1462487502U);
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 158381563U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (4182756625U)))) ? (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)0]))) : (824227390U))) : (((((/* implicit */_Bool) var_0)) ? (1462487486U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                            var_36 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))))));
                        }
                        var_37 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)255)), ((~(((/* implicit */int) ((unsigned char) var_8)))))));
                        var_38 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_12))))));
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    {
                        var_39 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_28 [i_0] [i_15] [i_16])) ? (((/* implicit */int) arr_28 [i_0] [i_16] [i_17])) : (((/* implicit */int) var_3))))));
                        arr_51 [i_17] [i_15] [i_15] [i_0] |= ((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)135)))), ((~(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_16]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_15] [i_16])) ? (arr_9 [i_0] [i_15] [1U] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        var_40 = max((((((-9181549325945054001LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_42 [i_17] [i_16] [i_16] [i_15] [i_0] [i_0])) - (58749))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [(unsigned char)2] [i_15] [i_17])) : (-482957188)))));
                        var_41 ^= ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_28 [i_15] [i_16] [i_17]))));
                    }
                } 
            } 
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56940)) ^ (((/* implicit */int) min((((/* implicit */short) arr_28 [i_0] [i_0] [3])), (arr_13 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1] [i_15] [i_15]))) : (((((/* implicit */_Bool) (short)-19404)) ? (arr_7 [i_15] [i_15] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))))));
            var_43 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_15] [i_15] [6LL] [i_0])) : (((/* implicit */int) (unsigned short)65521)))), (((/* implicit */int) arr_42 [i_0] [i_15] [(unsigned short)10] [i_0] [i_15] [i_15]))));
            var_44 = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_16 [i_0])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0] [i_0] [5LL] [i_15] [7U]))))));
        }
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        var_45 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((-(-435530653))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_18]))) == (arr_54 [i_18]))))))), (arr_54 [i_18])));
        var_46 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_18] [i_18])) ? (arr_54 [(_Bool)1]) : (var_9)))) / (var_5)))));
        arr_56 [i_18] = arr_54 [i_18 - 1];
        var_47 += arr_54 [i_18];
    }
    /* LoopNest 2 */
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
    {
        for (unsigned char i_20 = 2; i_20 < 23; i_20 += 1) 
        {
            {
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)16463)) >> (((((/* implicit */int) arr_60 [i_20])) - (80)))))) : (min((((/* implicit */unsigned int) var_2)), (arr_55 [(unsigned char)5] [i_19 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))))) || (((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 9181549325945054000LL))))))))));
                var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (unsigned short)32))));
                var_50 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_20 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) ((unsigned short) var_14))))))));
            }
        } 
    } 
}
