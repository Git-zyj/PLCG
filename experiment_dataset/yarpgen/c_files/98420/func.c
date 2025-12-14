/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98420
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] &= ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))) : ((~(var_7))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1952320158175814381LL)) ? (((long long int) arr_1 [i_0 + 3])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23023))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) -3521737210756698835LL)) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 2]))))));
        var_19 = ((/* implicit */short) 7820234038778356124LL);
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1 + 2])))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7820234038778356124LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-6483)))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((-7820234038778356116LL), (((/* implicit */long long int) (_Bool)1))));
        var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), (arr_1 [(_Bool)1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned short)65524))));
    }
    var_23 -= var_11;
    var_24 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-7820234038778356129LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3])))));
            arr_14 [i_3] [i_4] [i_4] = (short)21283;
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_26 = ((/* implicit */long long int) var_9);
                arr_18 [i_3] [i_3] [i_3] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)28174))))));
            }
            for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) ((short) (unsigned short)48693)))));
                            var_28 = var_9;
                            var_29 = ((/* implicit */long long int) ((arr_7 [i_3]) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_0))) % ((~(((/* implicit */int) var_4))))));
                arr_27 [i_3] [i_3] [(_Bool)1] = ((unsigned short) var_5);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) (~(((/* implicit */int) (short)-3289))));
                            var_32 = ((/* implicit */short) ((arr_8 [(unsigned short)7]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)55895))));
                        }
                    } 
                } 
                var_33 ^= ((/* implicit */unsigned char) ((var_0) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_6])))));
            }
            for (short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)45229))));
                var_35 *= ((/* implicit */short) arr_7 [i_11]);
            }
        }
        for (short i_12 = 4; i_12 < 11; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            arr_46 [i_14] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && (var_4)));
                            arr_47 [i_14] [i_12 + 1] [i_12] [i_13] [i_14] [i_12 + 1] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                arr_50 [i_3] [i_12 - 4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_12 + 1] [i_12] [(short)0] [i_12 - 2])) / (((/* implicit */int) arr_29 [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 3]))));
                var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_7)));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_3] [i_12] [i_3] [i_17]))));
                    arr_53 [i_3] [i_3] [(unsigned short)1] [(short)5] = ((/* implicit */long long int) arr_25 [i_3] [11LL] [i_3] [11LL] [11LL] [11LL] [i_17]);
                    var_39 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_3] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (arr_31 [i_12 + 1] [i_16])));
                    var_40 = 7820234038778356128LL;
                }
                for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1]))));
                    arr_56 [i_3] [i_3] [i_18] [i_3] = arr_20 [i_12 + 2];
                    var_42 = ((/* implicit */long long int) ((short) arr_49 [i_3] [i_3]));
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                var_43 = ((1952320158175814393LL) | (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))));
                var_44 = ((/* implicit */short) (-(-3389358207236202688LL)));
            }
            for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (short i_21 = 1; i_21 < 11; i_21 += 4) 
                {
                    for (short i_22 = 3; i_22 < 11; i_22 += 3) 
                    {
                        {
                            arr_66 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_44 [i_22] [i_22] [i_22] [i_22] [i_22]);
                            arr_67 [i_3] [i_12] [i_21] [i_3] = ((/* implicit */long long int) (short)28977);
                            var_45 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_12 + 1] [i_12 - 3] [i_12 + 2])) ? (((/* implicit */int) arr_21 [i_12 - 4] [i_12 - 1] [i_12 - 4])) : ((~(((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_3] [i_3] [i_20] [i_3] [i_12 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_12] [i_12] [i_12 - 1] [i_12 - 4]))) : (var_7)));
            }
            var_47 = arr_63 [i_3];
            arr_68 [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_3])))));
            var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_12] [i_12 - 4] [i_12 - 3] [i_12 - 3])))))));
        }
        /* LoopSeq 2 */
        for (long long int i_23 = 3; i_23 < 12; i_23 += 2) 
        {
            /* LoopNest 3 */
            for (short i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                for (short i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    for (unsigned char i_26 = 1; i_26 < 11; i_26 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */short) (_Bool)1);
                            arr_80 [i_26] [i_23] [i_23] [i_23] [(_Bool)1] = ((/* implicit */long long int) ((short) arr_10 [i_23 - 2]));
                            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((-1952320158175814381LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (24352))))))));
                            var_51 += ((/* implicit */short) var_15);
                            arr_81 [i_3] [i_26] [(short)2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)45)) - (33)))))));
                        }
                    } 
                } 
            } 
            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */int) arr_72 [i_23 - 3] [i_23 - 2])) : (((/* implicit */int) arr_30 [i_23 - 3] [i_23 - 3] [i_23 - 1])))))));
            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) (-(((/* implicit */int) var_9)))))));
        }
        for (short i_27 = 0; i_27 < 13; i_27 += 3) 
        {
            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (short)17967)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7168))) : (arr_82 [i_3] [i_3] [i_27])));
            arr_84 [i_3] [i_3] = ((/* implicit */short) ((-3209538290290628680LL) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_3] [i_3] [i_3] [i_3])))));
        }
        var_55 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58366)))))));
    }
}
