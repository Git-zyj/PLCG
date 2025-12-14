/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7161
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
    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12)))))) / (var_9)))) ? (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_9))))) : (((/* implicit */unsigned long long int) (+(var_8))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned int) var_1);
        var_20 = ((/* implicit */unsigned long long int) ((int) min((min((var_15), (var_16))), (((unsigned long long int) var_15)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) >> (((/* implicit */int) (unsigned char)22))))), (4294967265U)));
            arr_6 [i_1] = (((~(((/* implicit */int) (unsigned short)6941)))) | (((/* implicit */int) min((((/* implicit */short) ((signed char) arr_5 [(unsigned short)15] [i_0]))), (arr_5 [i_0] [i_0 + 1])))));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_22 = ((8589934591ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)22), ((unsigned char)224))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]);
                var_23 = ((/* implicit */_Bool) var_12);
                var_24 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))), (((unsigned long long int) (short)32767))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)204)))) >> (((/* implicit */int) var_4))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20722))) / (8589934591ULL)))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_25 += var_1;
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min(((+(min((var_16), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)238))))))))));
                            var_27 = ((/* implicit */_Bool) max((7863281897087062042ULL), (((/* implicit */unsigned long long int) (short)-31327))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1] [i_6] [5] [5])) ? (((/* implicit */int) (unsigned short)43694)) : (((/* implicit */int) (unsigned char)8))))), (((((/* implicit */_Bool) 4294967265U)) ? (var_7) : (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_2] [9ULL] [7ULL] [7ULL])))))))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15463221400764877249ULL)) ? (var_12) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                            var_30 = ((/* implicit */_Bool) ((unsigned int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)255));
                    var_32 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned char)255))))), (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((arr_7 [i_0 - 1] [i_9 + 1]) >= (8589934591ULL))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned int) arr_5 [i_9] [i_0])), (((unsigned int) (_Bool)1))))));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)159)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (short)3170)))))));
                    var_35 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) * (var_12)));
                }
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) (-((+(((int) var_6))))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (~(arr_3 [i_6] [i_11]))))));
                    var_38 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)49)) >= (((/* implicit */int) (short)7247))))) : ((-(((/* implicit */int) (unsigned char)44))))))));
                }
            }
        }
    }
    for (signed char i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_39 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) > (((unsigned long long int) (signed char)0)))))) < (var_0)));
        var_40 -= ((/* implicit */unsigned char) var_10);
        /* LoopNest 3 */
        for (unsigned char i_13 = 3; i_13 < 20; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (2147483647))) >> ((((~(((/* implicit */int) var_14)))) + (53)))));
                        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(-1680112591))))));
                        /* LoopSeq 2 */
                        for (int i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
                        {
                            var_43 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)83)) ? (2147483647) : (((/* implicit */int) (unsigned char)188))))));
                            var_44 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_40 [(unsigned short)19] [i_12]))), (arr_40 [i_13] [i_12]))), (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22289))) : (arr_4 [i_16 + 3] [i_12 - 1])))));
                            arr_48 [(_Bool)1] [i_13 - 1] [i_15] [i_13 - 1] [i_14] [i_13] |= ((int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) arr_39 [i_12 - 1] [i_15]))));
                        }
                        for (int i_17 = 1; i_17 < 20; i_17 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_15))));
                            var_46 = ((/* implicit */unsigned char) (((-(min((var_16), (var_9))))) > (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_2)), (var_12))) & ((~(var_12))))))));
                            arr_51 [i_15] [i_13 + 3] [i_14] [i_15] [i_12] [6ULL] [i_17] = ((/* implicit */_Bool) ((16226473039947446594ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                } 
            } 
        } 
        arr_52 [i_12] = ((/* implicit */_Bool) arr_49 [i_12 - 1]);
        var_47 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)127)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (191689926U) : (4294967281U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) (unsigned short)44180))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_48 &= ((/* implicit */short) ((((((/* implicit */_Bool) -1680112591)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)20)))) >= (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                {
                    var_49 += (~(var_17));
                    var_50 = ((((/* implicit */_Bool) arr_41 [i_18] [i_19])) ? (2690724739942109270ULL) : (((/* implicit */unsigned long long int) var_8)));
                    arr_60 [i_18] = ((/* implicit */signed char) arr_27 [(unsigned char)12] [i_18] [i_19] [i_20]);
                }
            } 
        } 
    }
    var_51 ^= ((/* implicit */signed char) min((max(((-(var_9))), ((~(16109321126567192101ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8176)))))));
}
