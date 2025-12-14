/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80913
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((36028797018963967LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */unsigned long long int) 2LL)) : (var_5)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) 15602749757362250930ULL));
                arr_7 [i_1] = max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (var_12)))), (min((var_14), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5869))))));
                arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 1424437242U))) ? (max((var_1), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (var_7))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)24393)) : (((/* implicit */int) (unsigned short)65535))));
        arr_11 [i_2] = ((/* implicit */short) arr_10 [i_2]);
        arr_12 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32765))))) : ((~(arr_10 [i_2])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_17 [i_4] [i_4] = (+((+(3845514529085169085ULL))));
            /* LoopNest 3 */
            for (short i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_25 [i_4] [(short)14] [i_4] [i_6] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) 0ULL))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_3] [i_6])))) : (((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_13 [i_5])))))) * (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_6))))))));
                            arr_26 [i_3] [i_4] = ((((arr_23 [i_4] [i_5 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_5 - 2]))) : (var_7))) + (((/* implicit */unsigned long long int) var_12)));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned short) (~(1459158286U)));
            var_19 = ((/* implicit */unsigned long long int) var_15);
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7237175826905972034ULL)) ? (-3) : (((/* implicit */int) (signed char)-1))))) ? (arr_22 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        }
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 617900235074593975ULL)) ? (((/* implicit */unsigned int) -1513122834)) : (1459158281U)))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */short) (signed char)27);
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (unsigned int i_10 = 1; i_10 < 7; i_10 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((long long int) arr_22 [(unsigned char)7] [i_10 + 3] [i_10 + 2] [i_10 - 1]));
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 8; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)51580)) : (((/* implicit */int) arr_3 [i_10] [i_10] [i_12]))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                                var_24 = ((/* implicit */_Bool) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) << (((/* implicit */int) (signed char)12))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32754))) > (-4336851758403579066LL)))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)26214))))));
    }
    for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
    {
        var_26 ^= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_24 [i_13 + 3] [i_13 - 1])), (var_14))));
        var_27 = ((/* implicit */unsigned long long int) ((int) var_7));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (short i_15 = 3; i_15 < 14; i_15 += 3) 
            {
                {
                    var_28 ^= ((/* implicit */unsigned int) var_13);
                    arr_46 [6U] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)127))));
                }
            } 
        } 
        arr_47 [i_13] [10] &= ((((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))))) ? (max((((unsigned long long int) (unsigned short)65535)), (((/* implicit */unsigned long long int) arr_40 [i_13 + 4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_9)) : (arr_44 [2ULL] [i_13 - 2] [i_13] [i_13])))));
    }
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (int i_17 = 2; i_17 < 16; i_17 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_18 = 3; i_18 < 18; i_18 += 4) 
                {
                    arr_54 [i_16] [i_18] [i_18] [14] = ((/* implicit */short) arr_48 [i_17 + 4]);
                    arr_55 [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39321)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)-36))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_51 [i_17 + 4]), (var_6))))) : ((-(var_14))));
                    arr_56 [i_18] [i_18] [i_16] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)58787)), (4304446275934299378LL)));
                    var_29 ^= ((/* implicit */_Bool) max((1383775051118802576ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-3)))))));
                    arr_57 [(unsigned short)8] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1))))) == (((long long int) 2835809015U)))))) != (max((((/* implicit */long long int) (signed char)36)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13)))))));
                }
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) (short)5910)) < (((/* implicit */int) var_16)))))));
                    arr_60 [7] [i_19] [i_17] [i_19] = ((/* implicit */unsigned int) arr_52 [(short)19] [i_17] [i_19]);
                    arr_61 [i_16] [i_19] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)-26155)) : (((/* implicit */int) (signed char)36))))) ? (arr_58 [i_16] [i_17] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)19))))));
                    var_31 = ((/* implicit */short) (-(var_13)));
                }
                for (signed char i_20 = 1; i_20 < 17; i_20 += 1) 
                {
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) 18265458664519995631ULL)))) ? (((((/* implicit */_Bool) arr_62 [i_16] [i_16] [(unsigned char)4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    /* LoopNest 2 */
                    for (short i_21 = 2; i_21 < 18; i_21 += 3) 
                    {
                        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */int) arr_65 [i_16] [(unsigned short)11] [i_21]);
                                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_17 + 1] [i_17] [i_17 - 2]))))) ? ((~(arr_67 [i_16] [i_17 + 2] [i_20 + 2] [i_20] [i_17]))) : (var_12)));
                                arr_70 [i_22] [i_21] [i_21] [i_21] [14U] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)-1), ((short)12511)))) % (((/* implicit */int) ((short) arr_65 [i_21] [i_21 + 2] [i_21])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    arr_73 [i_23] = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (((var_10) ? (arr_67 [i_16] [i_16] [i_16] [i_16] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [(unsigned short)12] [i_16] [i_17 + 2] [i_23]))))) : (2740422659U))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)29509)) ? (((/* implicit */int) (short)4540)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_35 = ((/* implicit */unsigned long long int) (((_Bool)0) ? ((~(arr_58 [i_16] [i_17 + 2] [0ULL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-27494)) : (((/* implicit */int) (unsigned char)158)))))));
                }
                /* LoopSeq 1 */
                for (short i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22819))) / (-750359248918568275LL)))) || (((/* implicit */_Bool) max(((~(arr_68 [i_24] [16U] [i_16]))), (((/* implicit */unsigned int) arr_75 [i_17 - 2] [i_17 - 1] [i_17 - 2])))))));
                    var_37 = ((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))));
                }
            }
        } 
    } 
}
