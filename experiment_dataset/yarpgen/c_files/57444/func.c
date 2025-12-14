/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57444
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_1))) << (((/* implicit */int) ((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)26)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_0] [i_2 - 1]))))))));
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_15 ^= ((/* implicit */short) arr_6 [i_0] [i_3] [4]);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_16 += ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_4])) - (19123)))));
                        var_17 = ((/* implicit */unsigned short) (short)-31158);
                    }
                    var_18 = ((/* implicit */unsigned short) (-((~(648547366U)))));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] &= ((/* implicit */signed char) (unsigned short)34978);
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((max((arr_5 [i_1 + 3] [i_1] [i_5]), (arr_5 [i_1 + 3] [i_0] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) var_4)), (min((648547371U), (((/* implicit */unsigned int) (unsigned short)34970)))))))))));
                    var_20 = ((/* implicit */_Bool) 0LL);
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)65535)), (146226658U)));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
                        var_23 ^= ((/* implicit */unsigned long long int) var_9);
                        var_24 = ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */int) var_10)), (596328985)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
                        var_25 = var_12;
                    }
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        var_26 ^= ((unsigned short) (unsigned char)38);
                        var_27 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_1 + 1] [i_0] [i_6] [i_8] [i_6])), (8131876821950482434ULL))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_1 + 2]))) % (((/* implicit */int) ((short) arr_4 [(unsigned short)6])))))));
                    var_29 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)252)), ((short)-32758)))))));
                }
                for (short i_9 = 3; i_9 < 12; i_9 += 4) 
                {
                    var_30 = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]);
                    arr_28 [i_0] [i_2 - 1] [7LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_9 + 2])) ? (13372034093043233927ULL) : (10314867251759069203ULL)))) ? (((/* implicit */long long int) arr_13 [i_1] [i_0] [i_2 - 1] [i_1] [i_0] [i_1])) : (((((6LL) & (17LL))) >> (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (arr_2 [i_0]))))));
                    arr_29 [i_9] [i_0] [i_0] [i_9] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_9] [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_2] [i_9]))) / (648547366U)))))));
                }
                var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_18 [(unsigned short)8] [i_1 + 1] [i_2 - 1] [i_2 - 1])) - (((/* implicit */int) arr_18 [(unsigned short)2] [i_1 + 1] [i_2 - 1] [i_2 - 1]))))) / (((((/* implicit */_Bool) arr_13 [i_0] [14U] [i_1] [i_2] [i_2] [i_2])) ? (((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [0ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */short) var_10))))))))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) min((((/* implicit */int) (_Bool)0)), (arr_10 [(short)13] [(short)13] [i_10 - 1] [(short)13] [i_10 - 1] [(short)13] [i_10]))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (short i_12 = 4; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) (~(((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned short)28869)) - (28867)))))));
                            var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)34978)), (((unsigned long long int) -4628452158996095490LL))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)230)) / (((/* implicit */int) var_12))))));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            arr_42 [i_0] [i_0] [i_13] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_36 [i_13] [i_13] [i_13] [i_0] [i_0] [i_0]))))));
            var_35 = ((/* implicit */unsigned long long int) var_13);
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_36 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_13])) ? (arr_2 [i_13]) : (arr_2 [i_13]))) & (10314867251759069182ULL)));
                arr_45 [i_0] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((1491016369) != (((/* implicit */int) arr_36 [i_0] [i_14] [i_13] [i_13] [(short)11] [i_0])))))) < (((((/* implicit */_Bool) arr_1 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_13] [i_0]))) : (arr_38 [i_0] [i_14]))))))) : (max((-6LL), (((/* implicit */long long int) (signed char)-90))))));
            }
            arr_46 [i_0] [i_0] [(short)11] = (-(min((((/* implicit */int) var_0)), ((+(314392077))))));
        }
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 12; i_15 += 1) 
        {
            for (unsigned int i_16 = 1; i_16 < 14; i_16 += 1) 
            {
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1055879841)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26730))) : (-412220792872858204LL)))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) min((314392069), (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) -7323302977154908373LL))));
                    /* LoopNest 2 */
                    for (short i_17 = 2; i_17 < 13; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 3; i_18 < 12; i_18 += 4) 
                        {
                            {
                                arr_55 [i_17] [i_16] [11ULL] [i_0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((412220792872858204LL), (((/* implicit */long long int) ((_Bool) (signed char)-92)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (short)-21859)) ? (((arr_40 [i_0]) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_17] [i_18])))) : (((/* implicit */int) var_5))))));
                                arr_56 [i_0] [i_15] [i_16 - 1] [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)111)) >= (((/* implicit */int) var_5))));
                                var_38 += ((/* implicit */unsigned char) ((short) min((arr_4 [(signed char)7]), (((/* implicit */unsigned short) ((short) arr_21 [i_15] [i_15] [(signed char)9] [i_17] [i_15]))))));
                                arr_57 [i_0] [(signed char)0] [i_0] [i_0] [(unsigned short)0] |= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_18 [(unsigned short)0] [i_16 - 1] [i_16 - 1] [(unsigned short)0])) ^ (((/* implicit */int) arr_20 [i_0] [4U] [i_16 - 1] [i_15] [i_18] [i_18])))));
                            }
                        } 
                    } 
                    arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (short)-21853);
                    var_39 = ((/* implicit */unsigned short) (_Bool)0);
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_54 [i_0] [i_0]))) != (((/* implicit */int) (_Bool)1))));
    }
    for (int i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_20 = 1; i_20 < 16; i_20 += 4) 
        {
            var_41 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_60 [i_19] [i_19])) & (314392077)))));
            arr_63 [i_19] [i_20] = ((/* implicit */long long int) (short)-5264);
            arr_64 [i_20 - 1] [i_20] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)198))));
        }
        for (signed char i_21 = 0; i_21 < 17; i_21 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((var_2) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_67 [i_21] [i_19] [i_19])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [(short)7] [(short)7])))))))))))));
            arr_68 [(signed char)8] [i_21] = ((/* implicit */short) (((~(max((((/* implicit */long long int) (unsigned char)45)), (27LL))))) * (14LL)));
            var_43 = ((/* implicit */unsigned int) min((var_43), (arr_62 [i_21] [(unsigned short)13])));
            arr_69 [i_19] = ((/* implicit */signed char) ((7177852120509715731ULL) + (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_59 [i_19])) + (((/* implicit */int) var_10)))), (((/* implicit */int) arr_66 [i_19] [i_19] [i_19])))))));
        }
        var_44 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) var_12)), ((short)21859)))), (max((arr_61 [i_19] [i_19]), (11LL)))));
    }
    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        arr_74 [i_22] = ((/* implicit */unsigned int) (-(((int) -1))));
        var_45 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_22] [i_22] [i_22])) ? (((((/* implicit */int) (short)-8655)) ^ (((/* implicit */int) (short)-10125)))) : (((/* implicit */int) min((var_12), ((signed char)0))))))) : (max(((+(arr_72 [i_22] [(short)5]))), (((/* implicit */long long int) min((((/* implicit */short) var_3)), (var_13))))))));
        /* LoopNest 3 */
        for (int i_23 = 2; i_23 < 15; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 16; i_24 += 4) 
            {
                for (short i_25 = 0; i_25 < 16; i_25 += 1) 
                {
                    {
                        arr_82 [i_22] [i_25] = ((/* implicit */unsigned short) 314392077);
                        arr_83 [i_25] [i_23] [i_22] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_71 [i_22])) : (((/* implicit */int) arr_79 [i_22] [i_22] [i_24] [1] [6U]))))))) || (((_Bool) min((1048350583124329921LL), (((/* implicit */long long int) (signed char)127)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
        {
            {
                arr_89 [i_26] [(_Bool)1] [i_26] = ((/* implicit */unsigned int) var_4);
                /* LoopNest 3 */
                for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 4) 
                {
                    for (short i_29 = 3; i_29 < 21; i_29 += 4) 
                    {
                        for (unsigned short i_30 = 1; i_30 < 20; i_30 += 4) 
                        {
                            {
                                var_46 ^= ((/* implicit */short) ((((/* implicit */int) var_1)) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) >= (arr_88 [i_26] [i_26] [i_26])))) < (((/* implicit */int) ((_Bool) arr_98 [i_28 - 3]))))))));
                                var_47 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((short) 1068328359U))))) + (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_48 = ((/* implicit */short) (unsigned short)34973);
    var_49 &= ((/* implicit */unsigned short) (unsigned char)92);
    var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) (+(var_2))))));
}
