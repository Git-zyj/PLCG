/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55502
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_8) > (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (min((2117000431), (((/* implicit */int) (short)3786))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((short) ((((/* implicit */_Bool) ((int) (unsigned char)200))) ? (((/* implicit */int) ((-909209110) >= (132620222)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)35))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (short)-19667)) : (((/* implicit */int) arr_0 [i_0]))));
                var_13 = ((/* implicit */int) ((min((max((((/* implicit */unsigned int) var_3)), (var_1))), (3219870228U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ (-3122285777836308830LL))) > (((/* implicit */long long int) -2039459378))))))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) -374067453486858950LL))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] [1LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7129462648569381271ULL)) ? (arr_1 [i_3]) : (((/* implicit */int) (unsigned short)49765)))) ^ (((/* implicit */int) arr_3 [i_2] [i_3]))));
            var_17 = var_4;
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))));
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                arr_19 [i_2] = ((/* implicit */unsigned int) (signed char)4);
                arr_20 [i_2] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48980))) | (var_1)))));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_14 [i_4] [i_5])))));
                var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2102032211))));
            }
            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
            {
                var_22 -= (-(((/* implicit */int) ((unsigned short) var_1))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_16 [i_2] [i_6 - 1] [(short)1] [i_2])) : (((/* implicit */int) var_7))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (var_10) : (((/* implicit */int) ((signed char) var_6)))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) (unsigned short)8191)) : (var_3)));
                var_26 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_18 [14ULL] [i_6] [i_6 + 1])));
            }
            for (unsigned int i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
            {
                arr_25 [i_2] = var_6;
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1010779448)) ? (((/* implicit */unsigned int) -2117000430)) : (var_1)))) ? (var_1) : (((/* implicit */unsigned int) 2117000430))));
            }
            for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_2] [(unsigned short)0] [(unsigned short)0] [i_4 + 1] [i_4 - 1] [i_8] [i_9])) ? (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_8 - 1] [i_8 - 1]) : (((/* implicit */long long int) -698009574)))))));
                            var_29 *= (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) >= (7452672858484778168LL))));
                            arr_32 [i_2] [i_2] [i_8] [i_2] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) << (((((var_3) + (187207749))) - (21)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((14U) << (((-2102032212) + (2102032224))))));
                            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2] [i_8 - 1] [i_8])) >= ((-(84847744)))));
                            var_31 = ((/* implicit */unsigned long long int) (+(var_10)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) (unsigned char)100)) ? (var_10) : (((/* implicit */int) var_4))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)139)) & (((/* implicit */int) (unsigned char)100)))))));
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2062943958)) || (((/* implicit */_Bool) (unsigned char)9)))))));
                }
                for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) arr_27 [i_2] [i_12] [i_8] [i_12]);
                    var_36 *= ((/* implicit */_Bool) var_8);
                    var_37 = ((/* implicit */unsigned long long int) var_9);
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_44 [i_2] [i_13] [i_8] [i_13] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7819)) ? (((/* implicit */int) arr_22 [i_2] [i_13] [i_13])) : (((/* implicit */int) arr_22 [6ULL] [i_13] [i_2]))));
                    var_38 = ((/* implicit */signed char) var_9);
                    var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)208)) ? (0U) : (((/* implicit */unsigned int) -84847731))));
                }
                var_40 = ((/* implicit */short) ((arr_35 [i_8 + 1] [i_4] [i_8 - 1]) ^ (((/* implicit */long long int) var_10))));
                arr_45 [(unsigned char)10] [i_2] = ((/* implicit */short) var_5);
            }
            var_41 = ((/* implicit */_Bool) var_3);
            var_42 = ((/* implicit */short) (~(-2117000433)));
        }
        for (short i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            var_43 &= ((/* implicit */short) ((var_8) << (((((var_3) + (187207723))) - (2)))));
            var_44 = ((/* implicit */signed char) 76629899);
            arr_48 [i_2] [i_14] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2074059753)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) : (2931305230U)))) ? (((((/* implicit */_Bool) 15900482352296080686ULL)) ? (((/* implicit */int) var_6)) : (var_8))) : (((/* implicit */int) var_4))))), (var_1)));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_45 *= ((/* implicit */unsigned short) ((int) (signed char)55));
                var_46 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)217))));
                var_47 = ((/* implicit */long long int) (-2147483647 - 1));
                var_48 *= 11737631143632069120ULL;
                var_49 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))));
            }
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    arr_60 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_24 [i_2] [i_15] [i_17] [9LL]) << (((var_1) - (3300245351U)))))) : (((/* implicit */unsigned char) ((((arr_24 [i_2] [i_15] [i_17] [9LL]) + (9223372036854775807LL))) << (((var_1) - (3300245351U))))));
                    var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) var_1))));
                    var_51 |= ((/* implicit */_Bool) var_7);
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5644)) ? (((/* implicit */int) ((((/* implicit */int) (short)21427)) > (((/* implicit */int) (short)-5886))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -84847731)))))));
                    var_53 = ((/* implicit */short) ((((/* implicit */long long int) var_8)) & (arr_18 [i_2] [i_2] [i_18])));
                }
                for (unsigned char i_19 = 2; i_19 < 13; i_19 += 3) 
                {
                    var_54 = ((/* implicit */short) (~(1411533052)));
                    var_55 |= ((/* implicit */int) ((short) arr_13 [i_19 + 3]));
                    var_56 = arr_58 [i_2] [i_2] [i_17] [i_2];
                    arr_64 [i_2] [i_17] [i_15] [i_2] = ((/* implicit */unsigned short) (-(var_8)));
                }
                var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) var_6))));
                var_58 = ((/* implicit */unsigned char) 4194303);
                var_59 = ((/* implicit */unsigned char) ((((arr_17 [i_15] [4LL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))));
            }
            for (signed char i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) ((((/* implicit */_Bool) -76629908)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)178)))))));
                arr_69 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) arr_63 [i_2] [i_15] [i_20] [i_15] [i_2] [i_20])) : (((/* implicit */int) var_6))));
            }
            arr_70 [(unsigned short)11] [i_15] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [11LL] [i_15] [i_15])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (short)32767))));
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                var_61 = ((/* implicit */int) arr_26 [10LL] [i_15] [6LL] [i_2]);
                /* LoopSeq 2 */
                for (int i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (-1403715898)))) ? ((~(((/* implicit */int) var_7)))) : (var_8)));
                    var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) arr_33 [i_21]))));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_80 [i_15] [i_21] [i_2] = ((/* implicit */unsigned char) arr_57 [(unsigned char)14] [i_2] [i_21] [i_23]);
                    var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 814622686)) ? (2943815162U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((var_1) << (((4334754221733064165LL) - (4334754221733064156LL)))))));
                }
            }
        }
        arr_81 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) ^ ((+(arr_59 [i_2] [i_2])))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 15; i_25 += 3) 
            {
                {
                    var_65 = ((/* implicit */short) max(((~(arr_27 [i_2] [i_2] [i_25 + 1] [i_25 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) 1582136732)) || (((/* implicit */_Bool) arr_27 [i_2] [(unsigned short)6] [i_25] [i_25 - 1])))))));
                    var_66 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-22352)) ? (var_10) : (((/* implicit */int) var_9))))));
                    var_67 = ((/* implicit */long long int) min((var_67), (((/* implicit */long long int) 16404067548114068296ULL))));
                    var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) var_5))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
    {
        var_69 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (16978633296031621690ULL))) ? (var_10) : (((/* implicit */int) ((signed char) -635505839)))));
        arr_90 [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6709112930077482496ULL))));
        var_70 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9))));
    }
    /* vectorizable */
    for (signed char i_27 = 0; i_27 < 22; i_27 += 1) /* same iter space */
    {
        var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) var_8))));
        var_72 += ((/* implicit */unsigned int) var_10);
    }
    var_73 = var_3;
}
