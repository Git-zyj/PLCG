/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67132
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 -= ((/* implicit */int) (!(var_5)));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (0U) : (((/* implicit */unsigned int) var_7))))) + (max((var_8), (((/* implicit */long long int) var_13))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((var_7) & (var_3))))) || (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-113))))));
        var_15 = ((/* implicit */_Bool) var_12);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13))))), (((unsigned short) var_1))))) == (min((min((var_3), (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))));
                    arr_13 [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned char) ((signed char) (short)-1)))))) / (min(((+(((/* implicit */int) (unsigned short)0)))), (-166579944)))));
                    arr_14 [i_3] [(_Bool)1] [(signed char)12] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((-166579944) + (2147483647))) << (((((((/* implicit */int) var_1)) + (122))) - (2))))))))) == (((((((/* implicit */int) (unsigned short)65534)) & (((/* implicit */int) (unsigned char)250)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
        arr_15 [i_1] = (!((!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (unsigned short)59507))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_9) < (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */unsigned long long int) var_3)) : ((~(949556477194220853ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) min((var_7), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 2] [i_4 - 1]))) : (var_10)))));
                        var_17 = ((((/* implicit */int) ((signed char) ((var_7) ^ (((/* implicit */int) var_0)))))) - ((-(((var_3) / (((/* implicit */int) var_1)))))));
                    }
                    for (short i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((((/* implicit */int) var_4)) + ((~(((/* implicit */int) (signed char)-103)))))))))));
                        var_19 = ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_13)))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1]))))));
                        var_20 += ((/* implicit */unsigned short) (-(((var_12) / (((((/* implicit */int) (signed char)32)) * (((/* implicit */int) var_11))))))));
                        var_21 = ((max((((/* implicit */unsigned long long int) ((unsigned char) var_6))), (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))))))) / (((/* implicit */unsigned long long int) arr_5 [i_1])));
                        var_22 = min((((/* implicit */int) ((unsigned char) var_5))), ((+(min((-166579946), (((/* implicit */int) var_13)))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((unsigned long long int) var_4)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_10)) > (((var_6) & (((/* implicit */unsigned long long int) var_3))))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) arr_27 [i_9] [i_8] [i_5 + 3] [i_1]);
                            arr_32 [i_4] [i_4 - 1] [i_5 - 1] [i_8] [i_9] = var_9;
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) > (var_3))))));
                            var_27 = ((/* implicit */signed char) (~(4611686018427387903ULL)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_18 [i_1] [i_1])))) ? ((+(((/* implicit */int) var_5)))) : (var_12)));
                            arr_36 [i_5] [i_4] = arr_5 [i_5];
                            arr_37 [i_4] [i_8] [i_5] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                            arr_38 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_6)))));
                        }
                        var_29 = ((((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((-(-7621451938355767909LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    }
                    for (short i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_34 [i_1] [i_4] [i_1] [i_11 + 1] [i_1] [i_1]);
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_11 - 1] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_21 [i_11 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_21 [i_11 + 1] [i_5] [i_5] [i_5])) - (140))))) : ((-(((/* implicit */int) arr_21 [i_11 - 1] [(unsigned short)7] [i_11] [i_11 - 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_35 [i_5] [i_5] [(short)8])) : (((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_1] [(_Bool)1] [(unsigned short)13] [i_1] [8LL]))))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [(unsigned char)2] [i_11 + 1] [i_5 + 2] [(unsigned char)2])))))));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 3) 
                    {
                        arr_45 [i_1] [i_4] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                        arr_46 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_5])) || (arr_28 [i_5 - 1] [i_4] [i_5 - 2] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 4) 
                    {
                        var_35 += ((/* implicit */signed char) ((short) (unsigned char)255));
                        arr_50 [i_4] [i_4] [i_4] [i_14 + 1] = ((/* implicit */unsigned char) var_0);
                        arr_51 [i_1] [i_4] [i_4] [i_14 - 1] [i_14] = ((/* implicit */int) (+((+(var_10)))));
                        var_36 = ((/* implicit */unsigned char) var_2);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(var_9))) : ((~(var_6))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 3) 
                        {
                            var_38 = ((/* implicit */short) (((~(var_8))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_22 [i_1] [i_5])) : (((/* implicit */int) var_4)))))));
                            arr_56 [i_1] [i_4] [i_4] [12ULL] [i_1] = ((((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_15] [i_16 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) == (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_39 += ((unsigned char) ((((/* implicit */unsigned long long int) -1730127517)) > (15545967222407397730ULL)));
                        }
                        var_40 = arr_29 [(signed char)12] [i_5] [0U] [i_5] [i_5 - 2] [i_1] [i_1];
                        var_41 = (~(var_6));
                        var_42 = ((/* implicit */unsigned char) ((_Bool) (+(var_10))));
                    }
                }
            } 
        } 
        var_43 = ((/* implicit */signed char) ((((((var_9) != (((/* implicit */unsigned long long int) var_8)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [(short)0] [i_1])) : (((/* implicit */int) var_2)))) : ((~(var_7))))) == ((+(((var_7) ^ (var_12)))))));
    }
    /* LoopNest 3 */
    for (signed char i_17 = 1; i_17 < 19; i_17 += 3) 
    {
        for (short i_18 = 2; i_18 < 16; i_18 += 3) 
        {
            for (int i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                {
                    arr_64 [i_18] [i_18] = ((/* implicit */int) arr_58 [i_17 + 1]);
                    var_44 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(arr_57 [i_19] [i_17])))) ? (((((/* implicit */_Bool) arr_58 [i_19])) ? (arr_58 [(short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_1)))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))))))))));
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4)))))));
    /* LoopNest 2 */
    for (short i_20 = 0; i_20 < 16; i_20 += 3) 
    {
        for (unsigned int i_21 = 1; i_21 < 12; i_21 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        var_46 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_5))))));
                        var_48 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) var_8)));
                        var_49 = ((/* implicit */long long int) var_4);
                        arr_76 [i_21] [i_22] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32760))));
                    }
                    for (long long int i_24 = 2; i_24 < 14; i_24 += 3) 
                    {
                        arr_79 [i_20] [i_21] [i_21] [i_22] [i_20] = ((unsigned char) ((((/* implicit */int) (unsigned short)9)) & (((/* implicit */int) (signed char)-127))));
                        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)231))));
                        var_51 = ((/* implicit */unsigned long long int) var_11);
                        var_52 = ((/* implicit */int) ((unsigned long long int) 0U));
                    }
                    var_53 += ((/* implicit */signed char) var_8);
                }
                for (unsigned long long int i_25 = 3; i_25 < 13; i_25 += 3) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) max((var_7), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (unsigned char)248)))) > (((/* implicit */int) ((((/* implicit */long long int) var_7)) > (var_10))))))))))));
                    var_55 = ((((/* implicit */int) arr_61 [i_21] [i_21])) == (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_57 [i_20] [i_21]))))));
                }
                for (unsigned long long int i_26 = 3; i_26 < 13; i_26 += 3) /* same iter space */
                {
                    arr_84 [i_20] [i_21] [i_20] = ((/* implicit */_Bool) var_1);
                    var_56 = ((/* implicit */short) max((var_6), (((/* implicit */unsigned long long int) ((short) ((unsigned short) (unsigned char)20))))));
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        for (short i_28 = 0; i_28 < 16; i_28 += 2) 
                        {
                            {
                                var_57 = (~(var_6));
                                arr_90 [i_26] [i_26] [i_26] [i_26] [i_21] = ((/* implicit */signed char) (-(((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_5))))) & ((-(((/* implicit */int) var_5))))))));
                                var_58 = ((int) ((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))));
                                arr_91 [i_20] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = arr_74 [i_21 + 2] [i_27] [i_21 + 2];
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_29 = 0; i_29 < 16; i_29 += 3) 
                {
                    for (short i_30 = 0; i_30 < 16; i_30 += 3) 
                    {
                        for (int i_31 = 4; i_31 < 15; i_31 += 3) 
                        {
                            {
                                arr_101 [i_20] [i_21] [i_20] [i_21] [i_31] = ((/* implicit */int) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (((arr_95 [i_21] [i_21]) >> (((((/* implicit */int) (unsigned short)45831)) - (45826))))))), (((/* implicit */unsigned int) ((short) ((int) var_2))))));
                                arr_102 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_58 [(_Bool)1])), (arr_94 [i_20] [i_21] [i_29] [i_29])))))) / (var_10)));
                            }
                        } 
                    } 
                } 
                arr_103 [i_21] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1))));
            }
        } 
    } 
}
