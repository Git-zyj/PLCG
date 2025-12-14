/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87252
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 3] = ((/* implicit */unsigned char) ((_Bool) var_3));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [(unsigned char)4]);
            arr_7 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
        }
        arr_8 [i_0 - 4] [(short)15] = ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))) & (((/* implicit */int) (unsigned short)65458))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))));
        var_12 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [i_3 + 1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_5)) && (arr_0 [i_3 + 1])))));
        arr_15 [i_3] |= ((/* implicit */short) min((((/* implicit */long long int) arr_13 [i_3])), (1038124305125201781LL)));
        var_13 |= ((/* implicit */unsigned char) var_3);
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (max((arr_5 [i_4] [i_5]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)95)) % (((/* implicit */int) (unsigned char)95)))))))));
            arr_21 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_3)))))))) - ((+(min((3088836023375935657LL), (((/* implicit */long long int) arr_0 [i_4]))))))));
            var_15 *= ((/* implicit */long long int) ((((/* implicit */long long int) -1114724353)) >= (3664091141992842071LL)));
            var_16 ^= ((/* implicit */unsigned int) ((min((1038124305125201781LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2872429065657841867LL)) ? (((/* implicit */int) (short)-13826)) : (((/* implicit */int) var_3))))))) == ((+((+((-9223372036854775807LL - 1LL))))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((max((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) var_3)), (-1038124305125201800LL))))) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-88))))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_18 = ((((/* implicit */_Bool) max((((var_0) ? (arr_19 [i_4] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) / (var_6)))))) ? (((/* implicit */long long int) min((((((((/* implicit */int) var_5)) + (2147483647))) >> (((-1038124305125201800LL) + (1038124305125201827LL))))), (((/* implicit */int) arr_3 [i_4] [i_4] [i_4]))))) : (max((((/* implicit */long long int) var_4)), (6360591914019169825LL))));
            var_19 = ((/* implicit */unsigned int) var_8);
            var_20 = ((/* implicit */unsigned int) ((int) var_1));
        }
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (max((-4606282088258539450LL), (((/* implicit */long long int) 994708575U)))) : (min((((/* implicit */long long int) (unsigned char)160)), (2645112439063838307LL))))))));
            arr_28 [i_4] = (+(var_7));
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_4] [3LL] [i_4] = ((/* implicit */unsigned int) arr_0 [i_8]);
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    arr_35 [i_9] [i_9] [i_9] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) -1038124305125201815LL))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_7)))) : (((var_0) ? (arr_29 [i_4] [i_4] [i_4] [i_4]) : (4194303LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7])))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((signed char)40), (((/* implicit */signed char) var_0)))))));
                    arr_36 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((min((((long long int) (_Bool)0)), (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159)))));
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_1) || (((arr_19 [i_9] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61215)))))))), ((unsigned short)40953)));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned short) var_9);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_29 [i_4] [i_7] [i_8] [14U]), (arr_29 [i_10] [i_9] [i_8] [i_4])))) || (((arr_29 [i_4] [i_4] [i_4] [i_4]) == (((/* implicit */long long int) 4294705152U))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 17; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_16 [i_11]), (arr_16 [i_8])))))))));
                        arr_43 [(unsigned char)6] [4LL] &= ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)2)))));
                        var_27 = ((/* implicit */unsigned char) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_47 [i_4] [i_7] [i_8] [i_4] [7LL] [i_12] = ((/* implicit */unsigned char) var_7);
                        var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) max(((short)-4096), (((/* implicit */short) arr_6 [i_4] [i_7] [i_4])))))), (min((max((-3556382106505727060LL), (((/* implicit */long long int) (_Bool)0)))), (-2247624015537884303LL)))));
                    }
                }
                for (unsigned char i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    var_29 = ((/* implicit */long long int) var_9);
                    var_30 *= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 2715495490U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) : (47260270U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
                for (unsigned short i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    arr_55 [i_7] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((/* implicit */long long int) ((((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) << (((2503794204U) - (2503794193U)))))) : (((((/* implicit */_Bool) 3575827554U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (-5513580659665648521LL)))));
                    var_31 -= ((/* implicit */_Bool) ((unsigned int) ((max((var_9), (arr_46 [i_4] [(unsigned char)0]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_34 [i_14] [i_7])))));
                    arr_56 [i_4] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */_Bool) ((var_0) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61215)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))), (min(((-9223372036854775807LL - 1LL)), (var_6))))) : ((-(((long long int) var_5))))));
                    arr_57 [i_4] [i_4] [i_7] [i_8] [i_14] [i_4] = ((/* implicit */unsigned int) var_2);
                }
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_32 = ((long long int) (!(((/* implicit */_Bool) (unsigned short)61195))));
                        arr_64 [i_4] [i_4] [i_8] [i_15] [i_16] = ((((/* implicit */_Bool) 6414828234818957885LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)32))))) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) < (((/* implicit */int) var_3)))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) arr_30 [20U] [20U] [i_15])))))));
                        arr_65 [i_4] [i_7] [i_4] [i_15] [i_4] = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_4]));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_8)) - (23946)))))) || (((/* implicit */_Bool) max((var_4), ((unsigned char)160)))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) arr_0 [i_4]))))) ? (max((arr_61 [(_Bool)1] [i_7] [i_17]), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))))));
                        var_35 |= var_1;
                    }
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (short)10069)))))), (((((arr_59 [i_8] [i_15] [i_18]) | (7629330745924647255LL))) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        arr_72 [i_18] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_0))))));
                        var_37 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(var_0))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)82), (((/* implicit */unsigned char) arr_33 [i_7] [i_15])))))) : (max((2177878184137236352LL), (((/* implicit */long long int) arr_24 [i_18]))))))) ? (((/* implicit */int) ((unsigned short) ((var_2) ? (((/* implicit */int) var_3)) : (-791136676))))) : (((/* implicit */int) var_4))));
                    }
                    for (int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -1485273361952569009LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) : (-5513580659665648521LL)));
                        var_39 *= ((/* implicit */unsigned int) 30786325577728LL);
                        arr_75 [i_15] [i_15] [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) -1485273361952569009LL)))));
                        arr_76 [i_4] [i_7] [i_4] [i_15] [i_19] = ((/* implicit */unsigned short) max(((~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)26)))))), (((/* implicit */int) arr_45 [i_19] [i_4] [i_15] [i_15] [i_8] [i_4] [i_4]))));
                        var_40 -= ((/* implicit */short) ((((/* implicit */_Bool) max((3608784403U), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_4] [16LL] [i_8] [i_15] [i_8] [i_19] [i_8]))) : (arr_69 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((-30786325577728LL) % (arr_66 [i_4] [i_7])))));
                    }
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        arr_79 [i_20] [i_15] [i_4] [i_7] [i_4] [i_4] [i_4] = max((((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2504179708U))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (74158537U)))) : (max((-30786325577729LL), (((/* implicit */long long int) (unsigned char)0)))))), (((/* implicit */long long int) (((!(var_0))) ? (((((/* implicit */_Bool) arr_17 [(unsigned short)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        arr_80 [i_20] [i_4] [i_8] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)43)), ((short)32767)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (((long long int) var_8))));
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 2; i_21 < 19; i_21 += 3) 
                    {
                        arr_83 [i_8] [i_4] [(_Bool)1] [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_21 - 2]))) : ((-(3301327928U)))));
                        arr_84 [i_4] [i_4] [i_8] [i_15] [i_4] = ((/* implicit */long long int) var_2);
                    }
                }
            }
            for (unsigned short i_22 = 1; i_22 < 19; i_22 += 2) 
            {
                var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((((min(((-9223372036854775807LL - 1LL)), (arr_59 [i_22 + 2] [i_22 + 1] [i_22 + 1]))) - (-9223372036854775777LL))) + (48LL)))));
                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((unsigned short) ((2453569172U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212)))))))));
                var_43 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned char) var_5)), (var_4))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_41 [i_4] [i_7] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) 4294967294U)))))));
            }
            for (unsigned int i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                arr_90 [7LL] [i_4] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (arr_27 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_4] [i_4]), (arr_27 [i_4] [i_4]))))) : (((unsigned int) (unsigned char)206))));
                var_44 += ((/* implicit */int) var_0);
            }
            arr_91 [i_4] [i_4] = (!(((/* implicit */_Bool) max((((8117825452241090879LL) ^ (780780378188870867LL))), (((/* implicit */long long int) (unsigned char)124))))));
        }
        for (unsigned char i_24 = 2; i_24 < 17; i_24 += 4) 
        {
            var_45 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (9115546683198614341LL) : (((/* implicit */long long int) 4220808758U))))) ? (1625254874523588875LL) : (-8555343329223926742LL)))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) min((1625254874523588875LL), (((/* implicit */long long int) (unsigned char)189))))) ? ((-(-1485273361952569009LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_18 [i_4])), (var_7)))))))))));
            arr_94 [i_4] = ((/* implicit */short) var_8);
        }
        var_47 = ((/* implicit */_Bool) ((((1625254874523588875LL) / (((/* implicit */long long int) 284008671)))) * (((/* implicit */long long int) ((/* implicit */int) max((var_9), (arr_4 [18LL])))))));
        var_48 = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_5)))) > (((((/* implicit */_Bool) 1625254874523588875LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)240))))))) : ((+(max((3449843825U), (((/* implicit */unsigned int) (unsigned short)65515))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_25 = 0; i_25 < 16; i_25 += 3) 
    {
        arr_97 [i_25] [i_25] = ((/* implicit */long long int) var_9);
        arr_98 [1U] [i_25] = ((/* implicit */unsigned int) var_3);
        arr_99 [i_25] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_5))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_58 [(unsigned short)18] [i_25] [i_25] [i_25] [i_25])) : ((+(((/* implicit */int) (unsigned short)34982))))))));
    }
    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 2) 
    {
        var_49 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (940655618285695328LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) : (((3301327928U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) * ((((+(2124333672U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 428929951U))))))));
        var_50 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) arr_52 [i_26] [i_26]))), (max((((/* implicit */short) arr_52 [i_26] [i_26])), (var_3)))));
        var_51 += ((/* implicit */short) min(((~(((((/* implicit */_Bool) 4294967284U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))))), (max((((/* implicit */unsigned int) 593099390)), (var_7)))));
        /* LoopSeq 1 */
        for (unsigned int i_27 = 1; i_27 < 8; i_27 += 3) 
        {
            var_52 = ((/* implicit */int) var_4);
            var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) ((unsigned char) var_8))) : ((~(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (short)-21108)))))) : (max((((((/* implicit */_Bool) var_7)) ? (7615904823864440672LL) : (-5160143102479779788LL))), (max((3721548257253643547LL), (((/* implicit */long long int) (unsigned char)108))))))));
            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_7)) : ((+(-1625254874523588876LL)))));
            arr_106 [i_27] = ((/* implicit */unsigned char) ((_Bool) max((max((1625254874523588875LL), (var_6))), (((/* implicit */long long int) max((var_3), (((/* implicit */short) (_Bool)1))))))));
        }
    }
}
