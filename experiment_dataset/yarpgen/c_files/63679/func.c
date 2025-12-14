/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63679
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (unsigned char)45);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 7220826215808101737LL)) - ((-(arr_1 [(short)22] [(unsigned short)3])))));
        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17389)) || (((/* implicit */_Bool) -490323744))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_19 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) ((unsigned short) (unsigned short)29168))))));
            var_20 = ((2964563811736672163LL) + (-7220826215808101738LL));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)29478)) + (((/* implicit */int) var_12))));
                            arr_18 [i_1] [i_2 - 3] [7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) * (((((/* implicit */_Bool) (unsigned short)25173)) ? (-7220826215808101720LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514)))))));
                            var_22 = ((/* implicit */unsigned short) var_12);
                        }
                        var_23 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14915)) | (1634361855)))), (((((/* implicit */_Bool) 16157697301266834111ULL)) ? (0LL) : (9223372036854775800LL)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) var_1);
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((2147483647) >= (max((((/* implicit */int) (short)29472)), (var_6))))))) != ((~(5970530427262236018LL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_25 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29478)) ? (-7220826215808101744LL) : (((/* implicit */long long int) -1634361856))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (-7220826215808101738LL))) << (((((var_4) + (1835078495))) - (44)))));
                            arr_31 [i_1] [(unsigned short)5] [i_1] [(signed char)10] [9LL] [9LL] = arr_22 [i_8 + 1] [i_8 + 1] [i_7] [12];
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) var_3);
            }
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 13; i_10 += 4) 
            {
                arr_36 [i_1 + 2] [i_1] [13U] [3LL] = (~(((/* implicit */int) (unsigned short)36423)));
                var_28 ^= ((/* implicit */short) ((9223372036854775793LL) >> (((-1634361872) + (1634361901)))));
                /* LoopSeq 3 */
                for (int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    arr_40 [i_1] [i_10] [i_6] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36368))));
                    var_29 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)22059)) < (((/* implicit */int) var_13))))));
                    arr_41 [(unsigned short)11] [(unsigned short)6] [(unsigned short)6] [i_1] [(unsigned short)1] = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_6)));
                }
                for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */int) arr_44 [(unsigned short)5] [i_10 - 2] [(unsigned short)8] [9LL] [i_10] [i_12])) | (((/* implicit */int) (unsigned short)31289))));
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_49 [i_1 + 2] [i_1] [i_10 + 2] [i_12] [i_1 + 2] [(unsigned short)8] = ((/* implicit */unsigned long long int) (+(386443595U)));
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) 6575562914911856278LL));
                        arr_50 [i_1 + 1] [(unsigned short)13] [i_1] [(short)5] [11] [i_6] [i_13] = ((/* implicit */long long int) (unsigned short)12424);
                        var_32 = ((/* implicit */short) ((unsigned long long int) 5797379035932189568LL));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_1] [6LL] [(short)8] [i_1] [i_1 + 4] [4LL] [(unsigned short)9])) ? (((/* implicit */int) var_7)) : (arr_52 [i_1] [i_1] [14LL] [i_10 + 1] [(short)8])));
                        arr_53 [i_1] [i_6] [(signed char)11] [i_12] [i_6] [i_1] [8ULL] = ((/* implicit */short) -697209770);
                        arr_54 [(signed char)6] [i_6] [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1] [i_6] [8ULL] [i_12] [i_14])) ? (((((/* implicit */_Bool) (short)16320)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13192))) : (0LL))) : (-25LL)));
                        arr_55 [i_1] [(unsigned short)6] [2U] [4] [i_6] [i_1] = ((/* implicit */short) -7220826215808101736LL);
                    }
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) var_1);
                        arr_59 [i_15] [i_6] [11ULL] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((7220826215808101738LL) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)17]))))))));
                        var_35 = ((/* implicit */unsigned short) ((signed char) arr_30 [i_1] [i_1] [i_1] [i_1]));
                    }
                }
                for (short i_16 = 1; i_16 < 13; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_17 = 3; i_17 < 13; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */short) var_14);
                        var_37 = ((/* implicit */short) ((((/* implicit */int) (short)6242)) | (((/* implicit */int) (short)2625))));
                        var_38 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) || ((!(((/* implicit */_Bool) arr_22 [i_10] [i_6] [(short)7] [i_10]))))));
                        arr_65 [i_1] [i_6] [i_10 - 2] [5LL] [i_1] [i_17] = ((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */int) (unsigned short)23591))));
                        arr_66 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52272)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33081))) : (var_2)))) < (((unsigned long long int) var_8))));
                    }
                    for (long long int i_18 = 1; i_18 < 13; i_18 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)36423));
                        var_40 -= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 7741595400035493535ULL)) ? (((/* implicit */int) var_12)) : (arr_60 [i_1] [i_6] [(unsigned short)11] [i_1] [i_16 - 1] [i_18]))));
                        arr_71 [i_1] [i_6] [i_10] [12ULL] [1LL] [i_18 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (var_0)));
                        var_41 = ((((((/* implicit */_Bool) 10705148673674058081ULL)) ? (7641524602604119964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18279))))) ^ (var_16));
                        var_42 = ((/* implicit */short) 576460743713488896LL);
                    }
                    arr_72 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)47260)) : (((int) 10705148673674058077ULL))));
                }
                arr_73 [i_1] [(unsigned short)1] = (+(((/* implicit */int) var_7)));
            }
            var_43 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13738553632113071966ULL)))))));
        }
        arr_74 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((+((-(var_9)))))));
    }
    for (int i_19 = 2; i_19 < 17; i_19 += 4) 
    {
        var_44 = (unsigned short)5694;
        var_45 = ((((((/* implicit */_Bool) ((-1304092868) + (((/* implicit */int) (unsigned short)23394))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_76 [i_19]))))) : (arr_75 [i_19]))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)7826))));
        var_46 = ((max((arr_75 [i_19 - 1]), (((/* implicit */unsigned int) var_14)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)18))));
    }
    var_47 = ((/* implicit */unsigned short) ((int) (unsigned char)167));
    var_48 = ((/* implicit */unsigned short) var_6);
}
