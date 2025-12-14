/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62201
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
    var_11 = ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((signed char) var_6));
        var_13 = ((/* implicit */_Bool) (short)30766);
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)30763)) : (arr_0 [i_0] [i_0])));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30767))) * (var_3))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_15 |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_5)))));
        var_16 |= ((((/* implicit */_Bool) max(((short)-30769), (((/* implicit */short) var_0))))) ? (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1] [i_1])))), (((/* implicit */int) max((arr_6 [i_1]), ((unsigned short)65280)))))) : (((/* implicit */int) arr_2 [i_1] [1LL])));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1] [i_1])), (((((/* implicit */_Bool) 6622204547958712183ULL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) var_6))))), (var_10))))));
    }
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) | (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) <= (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30781))) : (var_2)))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_4 [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_15 [(short)6] [(short)6] = ((/* implicit */unsigned int) var_1);
            var_18 = ((max(((+(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_0))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_11 [i_2] [i_3]) : (arr_9 [i_3] [i_2])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        arr_24 [3U] [3U] [i_6 - 1] [i_6 + 2] [(signed char)1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) | (((/* implicit */int) arr_4 [i_2]))));
                        var_19 = ((/* implicit */int) ((((/* implicit */int) (signed char)-6)) < (((/* implicit */int) (signed char)38))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_5] [i_6 + 1])) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_2))))))));
                        var_21 = ((/* implicit */long long int) arr_10 [i_6]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */short) 4225950267U);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (var_2) : (((/* implicit */unsigned long long int) arr_27 [i_7] [i_5] [i_2] [i_4] [i_3] [i_2] [i_7]))))) ? ((+(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_5)))))));
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-103))));
                        arr_28 [i_2] [i_7] [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((+(var_8))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-121)) | (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) var_1)))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30771))) : (13358779378461320836ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */int) var_10);
                        arr_34 [i_9] [i_5] [i_4 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_29 [i_2] [i_9] [i_5] [i_2] [i_9]))))));
                        arr_35 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */long long int) var_7)) & ((-9223372036854775807LL - 1LL))))));
                    }
                    var_27 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_28 = ((/* implicit */signed char) var_2);
                }
                var_29 = ((/* implicit */int) (~((+(arr_20 [i_3])))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            arr_42 [i_2] [i_3] [i_2] [i_4] [i_10] [(unsigned short)6] |= ((/* implicit */long long int) var_3);
                            arr_43 [i_2] [i_2] [5] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (16162987125329372294ULL)))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 1; i_12 < 13; i_12 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_26 [i_12] [i_2] [8] [i_2] [i_2]))));
                var_31 = ((/* implicit */unsigned long long int) var_6);
            }
            arr_47 [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)111);
        }
        arr_48 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), ((+((+(7877045203694356180ULL)))))));
        var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_4 [i_2])), (var_3))), (((/* implicit */unsigned long long int) (!(var_5))))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    /* LoopSeq 4 */
    for (int i_13 = 2; i_13 < 9; i_13 += 4) 
    {
        var_33 -= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-194626391) : (((/* implicit */int) arr_6 [i_13]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : ((~(9223372036854775807LL)))))) : (((max((((/* implicit */unsigned long long int) var_9)), (16772034679832441941ULL))) >> (((((/* implicit */int) var_4)) + (18992))))));
        var_34 = ((/* implicit */unsigned char) (~(var_7)));
        arr_53 [i_13] [i_13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(var_7))), (((/* implicit */unsigned int) (signed char)32))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15131))) / (-9223372036854775802LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2408562604760643675LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-30763)) : (((/* implicit */int) (short)27287))))) : (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)))));
            var_36 &= ((/* implicit */int) (+(((((/* implicit */_Bool) -18560269)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (2096640ULL)))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_13 - 2])) ? ((~(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_9))))));
        }
        for (signed char i_15 = 3; i_15 < 9; i_15 += 2) 
        {
            var_38 = ((/* implicit */unsigned char) var_8);
            arr_58 [i_13 - 1] = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30743))) == (var_7)))))) * (max((((((/* implicit */_Bool) 4503599090499584LL)) ? (((/* implicit */int) arr_16 [i_13] [i_13] [i_15 + 1])) : (((/* implicit */int) (short)-30763)))), (((/* implicit */int) min((var_4), (((/* implicit */short) var_6)))))))));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_0))));
        }
    }
    for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
    {
        var_40 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((arr_60 [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) : (var_8)))))));
        var_41 = ((/* implicit */signed char) var_3);
        var_42 = ((/* implicit */unsigned long long int) max((var_42), ((+(var_3)))));
        var_43 ^= ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (4ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_60 [i_16])), (max((-9223372036854775794LL), (var_8))))))));
        /* LoopNest 3 */
        for (long long int i_17 = 4; i_17 < 16; i_17 += 4) 
        {
            for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    {
                        arr_69 [i_16] [i_16] [i_16] [i_16] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (min((((/* implicit */unsigned long long int) var_9)), (var_3)))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [(_Bool)1]))) & (min((((/* implicit */unsigned long long int) ((arr_60 [i_16]) ? (arr_0 [i_16] [i_17]) : (((/* implicit */int) var_10))))), ((+(var_3)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            arr_74 [i_20] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))));
            arr_75 [i_20] [i_20] [i_21] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6606227922235013216ULL)));
        }
        arr_76 [i_20] = ((/* implicit */_Bool) var_6);
        var_45 = ((/* implicit */int) (((~(var_3))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
    }
    for (long long int i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
    {
        arr_79 [i_22] = ((/* implicit */short) (+((+(var_8)))));
        arr_80 [i_22] [i_22] = ((/* implicit */short) max((max((max((var_2), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-6))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned short)46161)))))));
    }
}
