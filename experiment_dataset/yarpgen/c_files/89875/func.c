/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89875
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
    var_19 = ((/* implicit */unsigned long long int) (+(436334549U)));
    var_20 = ((/* implicit */short) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [2LL] = ((/* implicit */unsigned short) ((1975755073U) / (2839292857U)));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            var_21 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)7913))));
                            arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-29508)) : ((-2147483647 - 1))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_18)))) | (((2839292857U) >> (((2147483640) - (2147483611)))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_7)))))));
                            var_24 = ((/* implicit */short) 2319212223U);
                            var_25 = ((/* implicit */short) var_15);
                        }
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_22 [i_3] &= (~(arr_4 [i_6 + 1] [i_0 + 1]));
                            arr_23 [i_0] [16] [i_6] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((686533944) + (((/* implicit */int) (short)-29508))));
                            arr_24 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) var_14))))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 20; i_7 += 2) 
                        {
                            arr_28 [i_7] [i_7] [i_1] [i_7] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) || (((/* implicit */_Bool) ((152836072U) & (152836072U))))));
                            arr_29 [i_7] [i_7] = ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0])) ? (arr_17 [i_0] [i_1]) : (((/* implicit */long long int) var_9)));
                            var_26 = ((/* implicit */long long int) arr_2 [i_2]);
                            arr_30 [i_7] [i_1] [i_2] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21183)) >= (((/* implicit */int) arr_25 [i_2 + 2] [i_2] [i_2 + 1]))));
                            var_27 -= ((/* implicit */_Bool) (unsigned char)64);
                        }
                        var_28 = ((/* implicit */unsigned long long int) (+(arr_20 [i_0 - 1])));
                    }
                } 
            } 
            arr_31 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (short)-29508)) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) arr_20 [i_0])) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
        }
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0] [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
            var_30 = ((/* implicit */short) 9223372036854775805LL);
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29508)) ? (4504393170232673912ULL) : (((/* implicit */unsigned long long int) 36028788429029376LL))));
            var_32 = ((/* implicit */unsigned short) ((unsigned int) arr_32 [i_0]));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (short)-32747))));
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_42 [i_0] [i_9] = ((/* implicit */unsigned short) (+(arr_8 [i_0] [i_0] [i_0])));
                var_34 = ((int) var_1);
                arr_43 [i_9] [i_10] = ((/* implicit */long long int) ((unsigned int) -390509672));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_35 = ((/* implicit */short) (+(var_9)));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_36 = ((/* implicit */short) arr_44 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((unsigned short) ((1048575) >> (((410273891) - (410273880))))))));
                }
                var_38 = ((/* implicit */int) ((unsigned short) 1184416886U));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    arr_53 [i_13] = ((/* implicit */short) 152836072U);
                    /* LoopSeq 2 */
                    for (long long int i_14 = 3; i_14 < 20; i_14 += 1) /* same iter space */
                    {
                        var_39 += ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-32764)) + (2147483647))) >> (((36028788429029381LL) - (36028788429029370LL)))));
                        var_40 = ((/* implicit */long long int) ((-399639749) / (-278928109)));
                        arr_57 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((int) ((7U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9]))))));
                        arr_58 [i_0] [i_0] [19U] [i_0] [(unsigned short)5] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) var_12))))));
                    }
                    for (long long int i_15 = 3; i_15 < 20; i_15 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) >= (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_15])))));
                        arr_61 [i_0] [i_9] [i_15] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((long long int) (short)-16913));
                        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_41 [i_0] [i_9] [i_11 - 1] [i_13]))));
                        var_43 = ((/* implicit */unsigned int) ((int) arr_5 [i_0 - 1] [i_11 - 1] [i_11]));
                        var_44 = (unsigned short)30788;
                    }
                    var_45 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) ? (arr_14 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11]) : (arr_14 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1])));
                }
            }
            var_47 = ((/* implicit */unsigned int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
    }
    /* LoopSeq 2 */
    for (short i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        var_48 = ((/* implicit */unsigned int) min((min((var_5), (((/* implicit */unsigned long long int) (+(152836081U)))))), (((/* implicit */unsigned long long int) min(((unsigned short)30788), ((unsigned short)21183))))));
        arr_65 [i_16] = ((/* implicit */unsigned char) ((unsigned short) (+(min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            var_49 = ((/* implicit */unsigned int) ((_Bool) max((((16776704U) << (((((/* implicit */int) (unsigned short)30788)) - (30775))))), (((/* implicit */unsigned int) arr_41 [i_16] [i_16] [i_16] [i_16])))));
            var_50 = ((/* implicit */int) (+(((unsigned int) 6269310763050123102LL))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                var_51 &= ((/* implicit */long long int) min((((/* implicit */short) ((((long long int) var_18)) != (min((arr_10 [i_16]), (((/* implicit */long long int) arr_60 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))))), (var_7)));
                var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) max((6822147656375638875LL), (((/* implicit */long long int) (_Bool)1)))))));
                var_53 = max((((/* implicit */int) (_Bool)1)), (410273906));
            }
            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (unsigned short)30774)) : (((/* implicit */int) (unsigned char)8))));
        }
    }
    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
    {
        arr_73 [i_19] [i_19] = ((/* implicit */int) var_12);
        var_55 = ((/* implicit */int) (-(-9223372036854775797LL)));
        arr_74 [i_19] = ((/* implicit */int) ((((/* implicit */int) max((arr_41 [17U] [17U] [i_19] [i_19]), (arr_41 [i_19] [i_19] [i_19] [i_19])))) >= (-410273891)));
        var_56 = ((/* implicit */int) (unsigned char)150);
        var_57 = ((/* implicit */unsigned int) (((((((+(-410273890))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (var_5))) - (5036170339752163626ULL))))) <= (var_13)));
    }
    var_58 = var_18;
}
