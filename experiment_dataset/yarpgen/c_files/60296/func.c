/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60296
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_4 [14ULL]))));
                var_17 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) == (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned short) (-((+(((/* implicit */int) (unsigned char)60)))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) 16368578293938974118ULL)) ? (var_2) : (var_5)))))) && (((/* implicit */_Bool) var_8))));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_10 [i_2])))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-12864)), (36028797018963967ULL)))) && ((!(((/* implicit */_Bool) arr_10 [i_2]))))));
        var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (short)20532))))));
        var_21 = ((/* implicit */long long int) ((unsigned short) (short)-6055));
        arr_13 [i_2] = ((/* implicit */int) arr_10 [i_2]);
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((arr_10 [i_3 - 3]) + (arr_15 [i_3] [i_3 + 2])));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (short i_7 = 4; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_29 [i_3 - 3] [i_3] [i_3 - 3] [(_Bool)1] [i_3 - 2] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)13] [(short)13] [14LL] [i_6] [i_7 - 2])) ? (((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_6] [i_7 + 1])) : (((/* implicit */int) arr_25 [i_3 - 1] [i_4] [i_5 + 1] [i_6] [i_7 - 4]))));
                            var_22 = ((/* implicit */signed char) ((-1953738688) / (((/* implicit */int) arr_22 [i_5] [(unsigned char)13] [i_4]))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3 - 2] [i_7 - 3] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 2]))) : (arr_23 [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7 - 4])));
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_30 [i_3] [i_4] [(_Bool)1] [(unsigned char)7] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)202))));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 1; i_8 < 13; i_8 += 3) 
        {
            arr_33 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_3 - 1] [i_3 + 2]))));
            arr_34 [(_Bool)1] [(short)14] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1125015743U));
            /* LoopSeq 3 */
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (+(arr_10 [i_10 + 1])));
                            arr_44 [i_3] [i_8] [i_9 + 2] [i_10] [i_10] = ((/* implicit */short) ((_Bool) arr_6 [i_3 - 2] [i_10 + 1]));
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [(unsigned char)9] [i_9 + 2] [i_9]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_12 = 1; i_12 < 14; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_1 [i_3 - 1]))));
                        var_28 *= ((/* implicit */unsigned char) var_14);
                    }
                    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_9 + 2]))));
                    arr_50 [i_3 + 2] [i_8] [i_9] [(unsigned short)2] = ((/* implicit */unsigned long long int) arr_27 [i_3 - 1] [i_3 + 2] [i_8 + 3] [i_9 + 2] [i_12 + 1]);
                }
                for (unsigned int i_14 = 1; i_14 < 14; i_14 += 4) /* same iter space */
                {
                    arr_53 [(signed char)8] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(signed char)8] = ((/* implicit */signed char) var_5);
                    arr_54 [4LL] [i_8] [i_9 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_3] [5ULL])) ? (((/* implicit */int) arr_31 [i_14] [3ULL])) : (var_1)))) ^ (arr_28 [i_3 - 2] [i_3 + 2])));
                    arr_55 [i_3 + 1] [i_3 + 1] [i_9 + 1] [14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4301371448749983161LL)))))) * (arr_35 [i_14] [i_14 + 1] [i_8 - 1] [i_8 - 1])));
                }
                for (unsigned int i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    var_30 = (-(arr_58 [i_3 + 1] [i_8]));
                    arr_60 [i_15 - 1] [(short)10] [13LL] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((long long int) 2043180259U))));
                    arr_61 [i_3 - 3] [i_3 - 1] [2U] [i_3 + 1] [i_3] [i_3 - 3] = ((/* implicit */unsigned long long int) ((-69459298002132384LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6712)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_64 [15U] [15U] [(signed char)9] [i_16] = ((/* implicit */unsigned char) arr_59 [i_3 + 2] [(signed char)1] [(_Bool)1] [i_16]);
                    arr_65 [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_62 [i_16] [i_16] [i_3] [i_3 - 1] [(_Bool)0] [(signed char)1]))));
                }
            }
            for (signed char i_17 = 3; i_17 < 15; i_17 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_18 = 3; i_18 < 14; i_18 += 4) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_21 [i_17] [2LL])))) ? (((/* implicit */unsigned long long int) arr_68 [i_17 - 3] [(_Bool)1] [i_8 + 3] [i_3 - 3])) : (arr_15 [i_8] [i_8 + 1]))))));
                    arr_71 [i_3] [i_17] [i_17] [i_18] = ((long long int) -69459298002132384LL);
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_32 *= ((/* implicit */signed char) (~(16482052363193651658ULL)));
                        arr_75 [(unsigned char)1] [(unsigned char)4] [i_17] [i_18 + 2] [i_17] [i_3] = ((/* implicit */unsigned short) (~(arr_7 [i_17 - 1])));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) : (5331877196938228414LL)));
                        arr_76 [(unsigned char)10] [(short)0] [(signed char)12] [i_18] [i_18] [i_19 - 1] |= var_11;
                    }
                    /* LoopSeq 3 */
                    for (short i_20 = 0; i_20 < 16; i_20 += 4) /* same iter space */
                    {
                        var_34 = (!(((/* implicit */_Bool) arr_40 [i_17] [i_17])));
                        arr_80 [i_17] [(_Bool)1] [i_17] [i_17] [(unsigned short)4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 203661146)) ^ (4ULL))))));
                    }
                    for (short i_21 = 0; i_21 < 16; i_21 += 4) /* same iter space */
                    {
                        arr_83 [i_3] [i_3] [(_Bool)1] [i_17] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (4307958672288383454ULL) : (((/* implicit */unsigned long long int) 1945776441241017975LL))));
                        var_35 = ((/* implicit */signed char) (-(arr_5 [i_3] [i_3])));
                        var_36 = ((/* implicit */signed char) (+(3973991220253526655ULL)));
                    }
                    for (short i_22 = 0; i_22 < 16; i_22 += 4) /* same iter space */
                    {
                        arr_86 [i_3] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) 4101049495U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16567141347339252277ULL)));
                        arr_87 [i_3 - 2] [i_8 + 2] [i_17 - 2] [i_17] [i_22] = ((/* implicit */long long int) arr_52 [i_8 + 1] [i_17 + 1]);
                        arr_88 [i_17] [i_8] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_17] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_3] [i_3 + 1] [(unsigned char)5] [i_3]))) : (arr_67 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(short)6] [i_8 + 3])))));
                    }
                    arr_89 [i_3 - 3] [6LL] [(signed char)7] [i_17] = ((((/* implicit */_Bool) (unsigned char)19)) ? (2573947042368464655ULL) : (16567141347339252277ULL));
                }
                for (signed char i_23 = 1; i_23 < 14; i_23 += 1) 
                {
                    var_37 = var_10;
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_3] [i_17 - 2])) ? (arr_81 [i_23] [9LL]) : (arr_58 [i_3] [i_3 - 3])));
                }
                var_39 -= ((/* implicit */short) ((unsigned int) (unsigned char)228));
                var_40 = ((/* implicit */long long int) (~((+(arr_18 [i_3 - 3] [i_8 + 3] [i_17])))));
                arr_92 [(unsigned char)1] [11] [i_17] [i_17 - 3] = ((arr_90 [i_8] [i_17] [i_3]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_8] [i_17] [i_3]))));
            }
            for (signed char i_24 = 3; i_24 < 15; i_24 += 1) /* same iter space */
            {
                arr_95 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(1636342502617049214ULL)))) ? (((int) (_Bool)1)) : (((/* implicit */int) (signed char)108))));
                arr_96 [i_3 + 1] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) arr_23 [i_24 - 1] [i_8 + 1] [i_3 + 2] [i_3]));
                /* LoopSeq 3 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    arr_100 [i_25] [i_24] [i_8] [i_3] [i_25] = ((/* implicit */signed char) ((arr_28 [i_3] [3LL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [(signed char)3] [(short)5] [(unsigned char)1])) || (((/* implicit */_Bool) arr_69 [i_25]))))))));
                    arr_101 [i_25] [i_24] [i_8] [i_25] = (((!(arr_91 [i_3 + 1]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_48 [i_25 - 1] [i_25 - 1] [i_24] [i_24] [i_3] [i_3] [i_3])))) : (arr_63 [i_25 - 1] [i_25] [i_25] [i_25 - 1]));
                }
                for (long long int i_26 = 1; i_26 < 13; i_26 += 3) 
                {
                    var_41 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)133)) > (((/* implicit */int) (_Bool)1))));
                    var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3 + 2]))));
                }
                for (unsigned int i_27 = 1; i_27 < 12; i_27 += 1) 
                {
                    var_43 = ((/* implicit */long long int) ((unsigned char) (unsigned char)166));
                    arr_110 [i_3] [i_3] [i_3] [i_3] [(signed char)2] [9ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_3 - 3] [i_24 + 1] [i_27 + 1])) ? (16810401571092502402ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1899540633002217304LL)) ? (-1547979829) : (((/* implicit */int) (_Bool)1)))))));
                    arr_111 [i_3] [i_8] [i_24 - 1] [i_27] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [(signed char)12] [i_3] [i_8] [i_8] [i_3] [14]))) == (var_3))));
                    var_44 = ((/* implicit */unsigned short) arr_2 [i_24]);
                    arr_112 [i_3] [(short)3] [i_24] [(short)3] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_24 - 3] [8ULL] [i_27 + 2])) == (((/* implicit */int) arr_109 [i_3 + 2] [8ULL] [i_3 + 2] [i_24 - 1] [i_24 - 1]))));
                }
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-(var_2))))));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 1; i_28 < 14; i_28 += 1) 
                {
                    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                    {
                        {
                            arr_117 [6LL] [i_8] [i_24] [i_28] [i_29 - 1] [i_29] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)214)) < (((/* implicit */int) (unsigned short)22034))));
                            arr_118 [i_3] [2LL] [9] [i_28 + 1] [i_29 - 1] |= ((/* implicit */unsigned long long int) arr_116 [1LL] [i_8 - 1] [i_8 - 1] [i_8 + 3] [i_8] [(unsigned char)5]);
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) != (((/* implicit */int) arr_8 [i_3 - 3])))) ? (((((/* implicit */_Bool) 3827144855U)) ? (((/* implicit */long long int) arr_47 [i_3] [(signed char)3] [7] [i_28])) : (var_10))) : (((/* implicit */long long int) arr_58 [i_8 + 3] [i_28 + 1])))))));
                        }
                    } 
                } 
            }
            var_47 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_3 + 2] [i_8 + 1]))) : (2849375356486817142LL)));
            arr_119 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) == (var_4)));
        }
        arr_120 [(signed char)1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16386)) || (((/* implicit */_Bool) (unsigned char)60)))))));
    }
    for (long long int i_30 = 3; i_30 < 14; i_30 += 2) /* same iter space */
    {
        var_48 = ((/* implicit */int) (-(-6914799615357822517LL)));
        arr_124 [i_30] [i_30] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(844778576)))), (arr_97 [i_30] [i_30])));
    }
}
