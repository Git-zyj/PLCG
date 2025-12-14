/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90444
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0]);
                var_17 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)20860))));
                var_18 ^= min(((unsigned char)47), (((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) << (((arr_1 [i_0]) - (1568228294U))))) > (((((/* implicit */_Bool) (unsigned short)34250)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */long long int) var_15);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((((/* implicit */int) arr_5 [i_2])) * (((/* implicit */int) arr_6 [i_2])))) : (((arr_5 [i_2]) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)47))))));
        var_21 ^= ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-31809))));
        var_22 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_2])), (var_8))))));
        var_23 = ((/* implicit */unsigned int) min(((unsigned short)34222), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)32767)) % (((/* implicit */int) arr_5 [i_2])))) <= (((/* implicit */int) arr_6 [i_2])))))));
    }
    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_4 = 2; i_4 < 15; i_4 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_4 + 1])))));
            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_14), (899723180U)))) ? (((/* implicit */int) (short)16)) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_13)))))), (((/* implicit */int) arr_11 [i_3]))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) max((3582313807U), (1997682521U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((7639232962921154857LL) >> (((/* implicit */int) var_13))))));
                        arr_18 [i_4] = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_9 [i_3])))));
                        var_26 = ((short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((771556481U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-14510))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1068556336U))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 2116095335U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25692))) : (952935680U)));
                    }
                } 
            } 
            arr_19 [i_4] &= ((/* implicit */short) (unsigned char)252);
            /* LoopSeq 1 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_28 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))) | (arr_16 [i_7 - 1] [i_7] [i_4 - 1])))) >= (-7904589766184443716LL)));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)67)), ((unsigned short)34208)));
                            arr_29 [i_4] [i_7] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
            }
        }
        for (short i_10 = 2; i_10 < 15; i_10 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_3] [i_3] [i_10]), (arr_6 [i_3]))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_10]))) - (0LL)))))));
            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) >= (((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_10]))))))))));
            var_32 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_3] [i_10] [i_10 + 1] [i_10]))));
        }
        for (short i_11 = 2; i_11 < 15; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */short) min(((+(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) != (((/* implicit */int) arr_22 [i_11]))))) : (((/* implicit */int) arr_31 [i_11] [i_3])))))));
            var_34 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) 1068556336U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-12398)))), ((~(((/* implicit */int) var_5))))))));
        }
        var_35 = ((/* implicit */short) var_8);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_12 = 2; i_12 < 13; i_12 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned short) arr_33 [i_3] [i_3 + 1] [i_12]);
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (short)18461))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 15; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) arr_6 [i_14]);
                            var_39 = ((/* implicit */short) ((var_1) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-32760)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_16 = 2; i_16 < 13; i_16 += 2) /* same iter space */
        {
            arr_47 [i_3] [i_16 - 1] [i_3] &= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_3 + 1])) | (((/* implicit */int) min((((/* implicit */unsigned char) arr_33 [i_16] [i_16 + 1] [i_16])), (var_7))))));
            var_40 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)32256)) * (((/* implicit */int) var_6))))))) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_3))));
            var_41 = ((/* implicit */_Bool) arr_7 [i_3 - 3]);
        }
        for (long long int i_17 = 2; i_17 < 13; i_17 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))))) ^ (((((/* implicit */int) max(((short)-14), (arr_48 [i_3 + 2])))) & (((/* implicit */int) var_3))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (-(((/* implicit */int) arr_32 [i_3] [i_17])))))));
                        var_44 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (short)9510))))) ? (((/* implicit */int) ((short) var_15))) : (((/* implicit */int) ((arr_27 [i_3] [i_3] [i_3] [i_19] [i_19] [i_19]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), (arr_28 [i_3] [i_3] [i_17 + 4] [i_18] [i_18] [i_19])));
                        arr_55 [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_22 [i_18])))))) % (arr_21 [i_17 + 3] [i_18] [i_19]))), (((unsigned int) ((short) (short)(-32767 - 1))))));
                    }
                } 
            } 
            var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3] [i_17])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_52 [i_3] [i_3 + 2])))) : (((((/* implicit */int) (unsigned short)5123)) >> (((3496158269U) - (3496158249U)))))))) : (var_1)));
        }
    }
    for (unsigned int i_20 = 3; i_20 < 15; i_20 += 3) /* same iter space */
    {
        var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (unsigned char)190)))));
        arr_59 [i_20] [i_20] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_20 + 2]))) < (1999243984U)))), (((((/* implicit */_Bool) arr_34 [i_20 - 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_20]))))));
        /* LoopNest 2 */
        for (unsigned int i_21 = 2; i_21 < 14; i_21 += 3) 
        {
            for (short i_22 = 3; i_22 < 16; i_22 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) arr_56 [i_20]);
                        var_48 = ((/* implicit */unsigned short) var_1);
                        var_49 = ((/* implicit */unsigned int) var_15);
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 2; i_24 < 15; i_24 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned short) ((short) var_12));
                            var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) % (var_14)))) : (((((/* implicit */_Bool) arr_31 [i_21] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32758))) : (var_1))))))));
                            arr_71 [0U] &= ((/* implicit */unsigned short) 3323193155U);
                        }
                        for (unsigned int i_25 = 2; i_25 < 15; i_25 += 1) /* same iter space */
                        {
                            var_52 = ((/* implicit */long long int) var_12);
                            arr_76 [i_25] [i_21] [i_21] [i_20] [i_25 - 2] [i_20] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13794)) ? (-7100475122834379783LL) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_20 + 2] [i_20] [i_22] [i_20] [i_25] [i_22])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
                            var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((-7100475122834379760LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_20] [i_21 + 2] [i_22] [i_23] [i_25]))))))));
                            var_54 = (i_20 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_20]))) : (607978907U))) - (4294960412U)))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_20]))) : (607978907U))) - (4294960412U))) - (4294945455U))))));
                        }
                    }
                    var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) max(((short)-22199), (arr_12 [i_21] [i_21 + 3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2422509489U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_21 + 2])))))) ? (((((/* implicit */int) arr_26 [i_20] [i_21] [i_22] [i_20] [i_21] [i_21] [i_20])) & (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_11 [i_20 - 3])))) : (((/* implicit */int) ((unsigned short) max(((unsigned short)11194), (((/* implicit */unsigned short) (short)-26872)))))))))));
                }
            } 
        } 
    }
}
