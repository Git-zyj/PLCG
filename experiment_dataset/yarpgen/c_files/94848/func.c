/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94848
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)29187)) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((unsigned long long int) var_9)) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) * (((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_5 [i_1 + 2] [i_1 - 1] [i_1 + 2]));
            var_11 = ((/* implicit */int) ((unsigned int) var_4));
            var_12 ^= ((/* implicit */long long int) ((signed char) arr_0 [i_1 + 2] [i_1]));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (3962467973929615284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(18446744073709551615ULL))))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_16 [i_0] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_10 [i_0])) / (((/* implicit */int) (unsigned short)41182))))));
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    arr_22 [i_5] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) max(((~(var_9))), (((/* implicit */int) var_1)))));
                    var_15 = ((/* implicit */_Bool) ((signed char) ((_Bool) ((((/* implicit */int) var_6)) <= (var_4)))));
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (short)-26515))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_0))))) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((unsigned long long int) 12U)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1087)))))));
                    var_17 *= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5] [i_5])) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32786)))))))));
                }
                var_18 = ((/* implicit */unsigned int) (short)-9649);
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [(_Bool)1])) ? (arr_12 [i_3] [i_3] [i_4]) : (arr_12 [i_0] [4] [i_4]))));
            }
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                arr_26 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (unsigned char)0);
                arr_27 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_2 [i_0]))))));
                arr_28 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_32 [i_0] [i_0] [i_0] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_2 [(short)10]))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) arr_20 [i_0] [4] [i_7]))));
                }
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((_Bool) ((short) ((((/* implicit */_Bool) arr_0 [(signed char)20] [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_31 [i_0] [i_0] [i_0] [i_0]))));
                    var_21 ^= ((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */int) arr_40 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_40 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9]))));
                    arr_42 [i_8] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) var_4);
                    var_22 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_8] [i_0])) >> (((((/* implicit */_Bool) 6100529716882396855ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9)))))) & (((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (_Bool)0)) : (2147483647)))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) (unsigned char)146);
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))))) ? (min(((~(var_4))), (((/* implicit */int) arr_43 [7ULL] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (arr_35 [i_0] [i_8] [i_8] [i_8])));
                    var_25 *= ((/* implicit */signed char) (unsigned char)255);
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) != (8030689017627083953ULL)))), (((((/* implicit */_Bool) -72112494)) ? (1652781800) : (((/* implicit */int) (_Bool)0))))));
                    arr_45 [i_8] [i_3] [i_3] [i_10] = ((((/* implicit */unsigned long long int) arr_21 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])) ^ (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_8] [i_10 - 1] [i_0] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (288276880807400678ULL))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_48 [i_8] [i_8] [i_3] [i_8] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((arr_23 [i_0] [i_11 - 1]), (((/* implicit */unsigned short) var_5))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_2)))));
                    var_27 *= ((/* implicit */signed char) ((unsigned char) ((_Bool) 12346214356827154764ULL)));
                }
                arr_49 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))) ? ((~(arr_38 [i_3] [i_3] [i_8] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                var_28 *= ((/* implicit */unsigned char) (-((-(-1896106098)))));
                var_29 *= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_34 [i_0])) ? ((~(((/* implicit */int) (short)-16536)))) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                arr_52 [i_0] [i_0] [(_Bool)1] [i_12] = ((/* implicit */long long int) min((max((((((/* implicit */int) (unsigned char)247)) << (((arr_8 [i_0]) - (2759641540U))))), (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) var_3)) : (var_9))))), (min((min((((/* implicit */int) (signed char)-90)), ((-2147483647 - 1)))), ((+(((/* implicit */int) arr_14 [i_0] [i_12] [i_12]))))))));
                arr_53 [i_0] [22] = ((/* implicit */int) min((((/* implicit */unsigned int) var_2)), (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [16])) ? (arr_8 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (1633552310017074888ULL))) - (1489504286ULL)))))));
            }
        }
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_47 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            var_31 += ((/* implicit */_Bool) (+((~(((/* implicit */int) var_1))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_60 [i_0] [i_14] [i_14] = ((/* implicit */unsigned long long int) (unsigned char)222);
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24333)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_43 [i_14] [i_14] [i_13] [i_13] [i_0] [i_0]))));
                var_33 = ((/* implicit */unsigned int) ((short) var_1));
            }
            for (short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                arr_63 [(_Bool)0] [i_13] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) (unsigned short)19))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0]))) & (8119205827574408865ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) var_6)))))));
                var_34 = min((var_5), ((!(((/* implicit */_Bool) (short)12961)))));
                arr_64 [i_0] [i_15] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_13] [i_15])))) ? (((/* implicit */unsigned long long int) var_9)) : (6100529716882396855ULL)))) ? (max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_4)), (arr_44 [i_0] [i_13] [i_15]))))) : (((/* implicit */unsigned long long int) 0U))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        {
                            arr_69 [i_0] [i_0] [i_15] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))) : (6100529716882396865ULL)));
                            var_35 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                            var_36 = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
    {
        arr_72 [i_18] = ((/* implicit */int) arr_31 [i_18] [i_18] [i_18] [i_18]);
        arr_73 [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_67 [i_18] [i_18] [i_18]);
        arr_74 [i_18] [i_18] = ((/* implicit */unsigned char) arr_34 [i_18]);
        arr_75 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-2141)) < (((/* implicit */int) (unsigned short)19))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_18] [i_18] [i_18] [i_18])))))));
        arr_76 [i_18] = ((/* implicit */int) ((unsigned short) (+((-2147483647 - 1)))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
    {
        arr_79 [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)115)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) == (arr_8 [i_19]))))));
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
                {
                    {
                        var_37 *= ((/* implicit */unsigned int) (-(((unsigned long long int) (unsigned char)0))));
                        arr_90 [i_20] [i_20] [10ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [9U] [i_20] [i_19])) ^ (((/* implicit */int) arr_88 [i_20] [i_20] [i_20] [i_20] [i_20]))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned int) ((unsigned char) ((long long int) (short)14071)));
    var_39 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)20)), ((~(var_4)))));
}
