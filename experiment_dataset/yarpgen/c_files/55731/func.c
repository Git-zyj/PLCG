/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55731
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)252)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6566))) : (-6276793134777919876LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(signed char)4] [(signed char)4]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1460170157414152151LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (min((((/* implicit */long long int) arr_1 [9LL] [i_0])), (var_5)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((-1460170157414152152LL), (((/* implicit */long long int) (short)31980)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_11 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1]), (((/* implicit */short) var_7))))), (((((((/* implicit */int) arr_12 [i_3] [i_3 + 2] [i_3] [i_3] [7ULL])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 2])) + (8955)))))));
                                arr_14 [i_2] [i_0] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)))))), (max((((/* implicit */unsigned long long int) var_13)), (arr_7 [(short)0] [i_1] [(short)0] [i_1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((1460170157414152172LL), (var_3))) | (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65283), (((/* implicit */unsigned short) arr_12 [i_0] [i_2 + 3] [(_Bool)1] [(unsigned short)1] [i_1])))))))))));
                    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_1] [(_Bool)1] [i_2 + 2] [(short)11])) : (((/* implicit */int) var_13))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_1))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_25 [i_8] [i_6] [i_7] [i_8] |= ((/* implicit */unsigned long long int) arr_1 [(short)13] [i_8]);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((8796093022080ULL), (((/* implicit */unsigned long long int) var_6))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_9 [(short)6] [i_5] [i_5]), (((/* implicit */short) var_4))))) ? (min((var_11), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((min((1460170157414152141LL), (((/* implicit */long long int) arr_23 [i_5] [(signed char)8] [i_5] [i_5] [i_5])))) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)6] [i_5] [i_5] [i_5] [i_5])))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((18446735277616529536ULL) != (((/* implicit */unsigned long long int) var_3)))))))) - (min((((/* implicit */unsigned long long int) var_5)), (18446735277616529523ULL)))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (!(arr_21 [i_12] [i_12] [i_12] [i_13 + 2]))))));
                            arr_38 [i_10] [i_10] = ((/* implicit */signed char) arr_30 [(unsigned short)0] [i_11] [i_13]);
                            var_26 = ((/* implicit */_Bool) (signed char)-54);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max(((unsigned short)65299), ((unsigned short)252))))));
            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_27 [i_10]), (arr_27 [i_9]))))));
            var_29 = ((/* implicit */signed char) var_11);
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    {
                        arr_44 [i_14] [i_10] [i_14] [(signed char)0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_42 [i_9] [i_10] [i_14] [i_14] [i_14] [i_15])) : (((/* implicit */int) arr_42 [i_9] [i_10] [i_10] [(short)5] [(unsigned short)17] [0LL]))))), (var_11)));
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) arr_22 [i_9] [i_9] [(short)15] [(short)15])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (signed char)56))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_14])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))))))) : (((/* implicit */int) var_6))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)164)) ? (((((/* implicit */_Bool) ((36028794871480320LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-86))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) + (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                        var_32 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_15 [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_23 [i_9] [(signed char)15] [(signed char)15] [i_14] [i_9])) : (((/* implicit */int) var_16))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10] [i_14] [i_15]))) % (18446735277616529535ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60739)) >> (((arr_17 [(short)6] [i_10] [i_15]) + (3298020605847010481LL))))))));
                        var_33 = ((_Bool) (unsigned short)260);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_16 = 3; i_16 < 17; i_16 += 2) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_9] [i_9]))))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9]))))));
            /* LoopSeq 4 */
            for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                var_35 *= var_16;
                arr_49 [i_9] [i_16] [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) ((var_9) ? (arr_5 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)279))))));
                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) arr_10 [i_9] [i_9] [(short)8] [i_9])) ? (((/* implicit */unsigned long long int) -4087303292764347185LL)) : (arr_10 [i_9] [i_16] [i_16] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))))));
            }
            for (signed char i_18 = 2; i_18 < 16; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)64885)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_19 [i_9] [i_9] [i_9]))))));
                            var_38 ^= ((/* implicit */unsigned long long int) 1460170157414152172LL);
                        }
                    } 
                } 
                var_39 += ((/* implicit */short) (signed char)14);
            }
            for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 2; i_23 < 16; i_23 += 1) 
                    {
                        {
                            var_40 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)64))));
                            arr_69 [i_9] [(signed char)12] [i_21] [i_16] [i_23] = ((/* implicit */short) (unsigned short)59137);
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((((/* implicit */_Bool) arr_57 [(short)16] [i_22] [i_21] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_23 - 1] [i_23] [i_23]))) : (var_14)))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)66))));
            }
            for (unsigned long long int i_24 = 2; i_24 < 14; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 3) 
                    {
                        {
                            arr_76 [i_9] [i_16] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_50 [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (36028794871480320LL)))));
                            arr_77 [i_9] [i_9] [i_9] [i_9] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                            arr_78 [i_9] [i_16] = ((/* implicit */unsigned char) (~(((18446735277616529546ULL) >> (((((/* implicit */int) var_13)) + (103)))))));
                            var_43 = ((/* implicit */short) -36028794871480314LL);
                            arr_79 [i_24] [i_16] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_22 [(short)0] [i_24] [i_24 + 4] [i_24])) : (((/* implicit */int) arr_22 [i_24] [i_24] [i_24 - 1] [i_24]))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)239)) ^ (((/* implicit */int) arr_51 [i_9] [i_24 + 3] [(unsigned char)4])))))));
                var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_52 [i_24] [i_24 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9] [i_24] [i_24] [i_24] [i_24 + 4] [i_24 + 1])) ? (((/* implicit */int) arr_43 [i_9] [i_9] [i_24] [i_24] [i_24] [i_24 + 2])) : (((/* implicit */int) arr_9 [i_24] [i_16 - 3] [i_24])))))));
            }
        }
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)12)) << ((((-(((/* implicit */int) arr_26 [i_9] [i_9])))) + (114)))));
    }
    var_48 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-17770)))) / (var_14))) > (min((var_14), (((/* implicit */unsigned long long int) (+(var_3))))))));
}
