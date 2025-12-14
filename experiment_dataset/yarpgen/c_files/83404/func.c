/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83404
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
    var_18 = ((/* implicit */int) var_13);
    var_19 |= ((/* implicit */unsigned short) (-(var_0)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_7))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_21 += ((/* implicit */long long int) var_8);
                        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2]))), (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3])) ? (var_12) : (((((/* implicit */unsigned long long int) -922327224)) & (1706989380972777640ULL)))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */int) ((unsigned long long int) (((-(16739754692736773976ULL))) + (((((/* implicit */_Bool) 16739754692736773996ULL)) ? (((/* implicit */unsigned long long int) 1934559499U)) : (1706989380972777640ULL))))));
        }
        var_24 = ((/* implicit */unsigned short) min((var_24), ((unsigned short)24)));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4])) ? (1732743404110238290ULL) : (max((((/* implicit */unsigned long long int) 4274181518U)), (1706989380972777625ULL)))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(1732743404110238268ULL))) & (((/* implicit */unsigned long long int) ((long long int) 11ULL)))))) ? (var_16) : (((/* implicit */long long int) var_5))));
            var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((max((arr_0 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned char)63)))), (((/* implicit */unsigned int) 1684911766))))), (((var_12) & (((unsigned long long int) var_5))))));
            arr_16 [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) (unsigned char)168))) ? ((-(((/* implicit */int) (unsigned short)4)))) : (((((/* implicit */_Bool) 1684911766)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (unsigned char)190)))))), ((-(arr_13 [i_5])))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_7] [i_7])) >> (((/* implicit */int) ((_Bool) var_8)))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        {
                            var_29 ^= ((long long int) arr_28 [i_6] [(_Bool)1] [i_8] [i_8] [3U] [i_10] [i_10]);
                            var_30 = ((/* implicit */long long int) var_1);
                            var_31 &= ((/* implicit */unsigned char) ((signed char) arr_0 [i_6] [i_7]));
                        }
                    } 
                } 
                arr_30 [17] [i_8] [17] [i_6] = ((/* implicit */int) ((short) (unsigned short)30738));
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                arr_34 [9ULL] [3] = ((/* implicit */unsigned long long int) arr_9 [i_7] [i_7]);
                arr_35 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (536870848U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (1706989380972777624ULL) : ((~(arr_4 [2LL] [i_7] [2LL])))));
                arr_36 [i_6] [i_6] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5422015675845089045LL)) ? (((/* implicit */unsigned long long int) 5891843811537601112LL)) : (16739754692736773976ULL)));
                /* LoopSeq 4 */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    arr_40 [i_12] [i_11] [i_7] [i_6] = ((/* implicit */_Bool) ((short) 16714000669599313321ULL));
                    var_32 = ((/* implicit */int) (+(var_0)));
                    arr_41 [i_6] [i_6] [i_6] [(unsigned char)12] = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((arr_10 [i_6] [i_6] [i_7] [i_11] [i_12]) - (4267920449776673975LL)))));
                    var_33 |= (-(arr_10 [4U] [i_6] [7U] [i_6] [i_6]));
                }
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((int) (unsigned short)51600)))));
                        arr_46 [(signed char)15] [i_7] [9] [i_13] [6LL] [i_14] = ((/* implicit */int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6] [i_7] [i_11] [i_13])))));
                        var_35 = ((/* implicit */long long int) arr_19 [i_13] [i_11] [i_7]);
                    }
                    arr_47 [i_6] [i_6] [8ULL] [i_6] |= (unsigned char)63;
                    arr_48 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1684911764)) ? (arr_27 [i_6] [12LL] [i_6] [i_13]) : (((/* implicit */long long int) var_5))));
                    arr_49 [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) 1684911769)))) || (((_Bool) (unsigned char)255))));
                }
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    arr_52 [i_6] [i_7] [i_11] [i_7] = ((536854528U) << (((/* implicit */int) ((unsigned char) var_5))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
                    var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)30738)) - (30738)))));
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */int) 9004767114184384494ULL);
                        arr_59 [i_17] [i_16] [17ULL] [(unsigned char)17] [i_7] [i_6] [4ULL] &= ((/* implicit */unsigned int) (short)-5394);
                        arr_60 [4ULL] [i_7] [1] [i_16] [16U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (12447868732022429592ULL)));
                    }
                    for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        var_39 = arr_27 [i_6] [(signed char)19] [(_Bool)1] [i_18];
                        arr_63 [4U] [i_6] |= ((/* implicit */_Bool) var_0);
                    }
                    arr_64 [i_6] = ((/* implicit */int) (unsigned char)233);
                }
                var_40 = ((arr_23 [i_7]) ? (((/* implicit */int) (unsigned short)44)) : (((/* implicit */int) var_11)));
            }
            arr_65 [(unsigned char)4] |= ((/* implicit */int) ((long long int) (unsigned char)47));
        }
        var_41 -= var_3;
    }
    for (long long int i_19 = 0; i_19 < 11; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
        {
            for (unsigned char i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        arr_76 [i_19] [i_20] [3LL] [i_22] = ((/* implicit */unsigned int) (~((+(min((1684911766), (((/* implicit */int) (unsigned short)30749))))))));
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_19] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), ((unsigned short)34797))))) : (arr_8 [i_19] [i_19] [i_21] [(_Bool)1] [i_22] [i_22]))))));
                    }
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_43 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_71 [i_20]))));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2002207013)) ? (828479561U) : (((/* implicit */unsigned int) -1684911765))));
                        arr_79 [i_23] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)34797)), (4294967295LL)));
                    }
                    /* vectorizable */
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        arr_82 [3LL] [3] [i_21] [3LL] &= ((/* implicit */unsigned short) var_7);
                        var_45 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [i_21 - 1] [i_21 + 1] [i_21 - 1] [i_21 + 1])) ? (arr_72 [i_21] [i_21 + 1] [i_21 - 1] [i_21 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_26 = 0; i_26 < 11; i_26 += 2) 
                        {
                            var_46 |= ((/* implicit */unsigned int) arr_44 [i_21 - 1] [i_21] [i_21 - 1] [(unsigned char)17] [i_21] [i_21 + 1]);
                            var_47 = ((/* implicit */long long int) ((int) 16714000669599313326ULL));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 1) 
                        {
                            var_48 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                            arr_90 [i_27] [i_20] = ((/* implicit */unsigned long long int) var_15);
                        }
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) arr_84 [i_25] [i_25] [1U]))));
                        arr_91 [i_21] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 9U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_25] [i_21] [5U] [i_19])) ? (16739754692736773976ULL) : (((/* implicit */unsigned long long int) arr_0 [i_19] [i_21 + 1]))))))))) : ((-9223372036854775807LL - 1LL))));
                    }
                    var_50 &= ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_15)), ((unsigned short)44))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967290U)))))));
                    var_51 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) arr_32 [i_19] [i_19] [i_21 + 1] [i_21 + 2])) : (((/* implicit */int) arr_32 [i_19] [i_21] [i_21] [i_21 + 2]))))));
                    arr_92 [i_19] [10U] [4LL] [8U] = ((/* implicit */_Bool) (unsigned short)65495);
                    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (arr_85 [0] [(unsigned char)5] [1U] [i_21])))) ? (min((1983786228758027444LL), (((/* implicit */long long int) (unsigned short)51600)))) : (((/* implicit */long long int) min((((/* implicit */int) arr_88 [i_21] [i_20] [i_20] [i_19] [i_19] [i_19])), (1044648491))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_20] [i_21 - 1] [(_Bool)1]))))) : (((((/* implicit */_Bool) 2101034835)) ? (arr_10 [i_21 - 1] [i_21 - 1] [5ULL] [i_21 + 2] [i_21 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2866352635U)) ? (2624093005U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))))))))));
                }
            } 
        } 
        var_53 = ((/* implicit */long long int) -2101034821);
    }
    var_54 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51600)) << (((/* implicit */int) (_Bool)0))))), (var_14))));
    /* LoopNest 2 */
    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
    {
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            {
                var_55 &= ((/* implicit */long long int) (_Bool)1);
                var_56 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), (max((-1848183551812096197LL), (min((((/* implicit */long long int) var_13)), (1125899906842620LL)))))));
                var_57 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (2305834213120671744ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
                var_58 = ((unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (max((((/* implicit */int) var_1)), (1134853008))) : (((((/* implicit */_Bool) arr_33 [i_28])) ? (((/* implicit */int) (unsigned short)44)) : (((/* implicit */int) (unsigned short)65491))))));
            }
        } 
    } 
}
