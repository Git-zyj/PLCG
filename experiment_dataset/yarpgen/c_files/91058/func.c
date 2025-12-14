/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91058
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [8LL] [i_0] = ((/* implicit */unsigned int) min(((-((-(var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));
        var_10 = ((/* implicit */unsigned int) (unsigned char)26);
    }
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)26)), (arr_0 [i_1]))));
        var_11 = ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_8 [i_1] [(unsigned short)5] = min((max((((/* implicit */unsigned long long int) arr_4 [i_1 + 3] [i_1])), (max((((/* implicit */unsigned long long int) (unsigned char)229)), (8342161983503260604ULL))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned short) (unsigned char)230))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_12 -= ((/* implicit */unsigned long long int) var_2);
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2]))))), ((+(arr_0 [i_2]))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] [2U] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(var_9)))), ((-(9392646804473661810ULL)))));
            arr_15 [i_2] [i_3] &= ((/* implicit */short) (-(max((var_3), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) 157214972)) : (4294967295U)))))));
            /* LoopSeq 3 */
            for (short i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_26 [i_5] [i_5] [i_3] [i_3] [i_2] = max((((/* implicit */unsigned int) (short)-1)), (var_0));
                        var_13 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9006972745703746576ULL))))), (var_7)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_14 ^= ((/* implicit */unsigned char) max(((+(min((((/* implicit */unsigned long long int) arr_9 [i_2])), (var_6))))), (min((var_7), (((/* implicit */unsigned long long int) (-(var_2))))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        arr_30 [10ULL] [0ULL] [i_7] [(unsigned char)1] [10ULL] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((unsigned short) arr_22 [i_3] [i_3]))), (arr_4 [i_4 - 1] [i_7]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (31)))))))));
                        arr_31 [i_2] [i_7] [i_4 - 1] [i_4 - 1] [i_7 - 1] = ((/* implicit */unsigned char) var_9);
                        var_15 = ((/* implicit */unsigned short) max((arr_18 [i_7 - 3] [i_7 - 1] [i_7 - 3]), (((unsigned long long int) arr_18 [i_7 - 1] [i_7 - 3] [i_7 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) arr_25 [i_3] [i_3]);
                        arr_35 [i_8] [9ULL] [i_4 - 1] [6U] [i_3] [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_6 [i_8])) : ((+(-956809163)))));
                    }
                    var_17 ^= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1490758605U))))), (arr_1 [i_4 + 2]));
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)70))))) ? ((-(arr_21 [i_4]))) : (min((var_5), (((/* implicit */unsigned int) arr_3 [i_3]))))))) && (((((((/* implicit */_Bool) arr_10 [i_3])) ? (7127690247226229123ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [10ULL] [i_3] [i_3] [i_5]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_19 = (((!(((/* implicit */_Bool) arr_27 [i_4 + 2] [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_4 [i_5] [i_5]))));
                    var_20 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_7))), (((/* implicit */unsigned long long int) var_2)))) >> (((((unsigned int) ((unsigned long long int) arr_16 [i_2] [(unsigned char)8] [i_4] [i_5]))) - (24704U)))));
                }
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    arr_40 [i_2] [13U] [13U] [13ULL] [9U] [9U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_18 [i_2] [(unsigned char)5] [(unsigned char)5])))) ? ((+(3599989180U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned char)1] [i_4 - 1] [i_9] [i_4 - 1]))))))));
                    arr_41 [i_2] [i_4 + 1] = ((/* implicit */unsigned short) arr_3 [i_9]);
                    var_21 -= arr_37 [i_4 + 2] [i_9] [i_9];
                }
                arr_42 [i_2] [i_3] [5U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) | (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4 - 1] [i_2])) ? (((unsigned long long int) var_4)) : (((((/* implicit */unsigned long long int) arr_37 [9U] [9U] [i_4])) + (var_6)))))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_22 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) != (((/* implicit */int) ((((/* implicit */_Bool) 15331897462217860095ULL)) && (((/* implicit */_Bool) arr_34 [i_2] [i_4 + 1] [i_4 + 2])))))))), ((unsigned char)7)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (+(arr_20 [i_2] [(short)4] [i_4] [i_4 - 1])));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_11] [i_4 - 1] [i_11])))))));
                        arr_47 [i_11] [i_10] [i_4 + 1] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_2] [i_2] [9U] [(unsigned char)13] [i_11]))));
                        var_25 = (+(1490758605U));
                    }
                    for (unsigned short i_12 = 4; i_12 < 13; i_12 += 2) 
                    {
                        arr_50 [i_12 - 4] [(unsigned short)14] [i_10] [11] [i_3] [i_2] |= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_10])) ? (((/* implicit */unsigned long long int) arr_20 [i_10] [(unsigned short)7] [(unsigned short)9] [i_2])) : (11319053826483322492ULL)))) ? (((/* implicit */unsigned long long int) (-(arr_20 [i_2] [i_2] [i_2] [i_2])))) : (max((((/* implicit */unsigned long long int) var_2)), (var_7))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7127690247226229123ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [6LL]))) : (11319053826483322493ULL))))))));
                        arr_51 [i_2] [i_3] [(short)6] [i_3] [2LL] [i_10] [i_12 + 1] = max(((~(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_4 - 1] [i_3] [i_2])) ? (arr_44 [i_4 + 1] [i_2] [i_2]) : (arr_44 [i_4 + 2] [i_2] [i_2])))));
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_54 [2ULL] [i_3] [i_4 + 1] [i_10] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [i_13])) ? (((unsigned long long int) var_1)) : (max((((/* implicit */unsigned long long int) var_0)), (arr_13 [i_10] [i_3])))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_48 [i_4 - 1] [i_4 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_4 + 2] [i_4 + 2]))))) : (((/* implicit */int) ((arr_48 [i_4 + 1] [i_4 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))))));
                        var_27 = ((/* implicit */unsigned short) arr_37 [9ULL] [i_3] [i_4]);
                        arr_55 [i_2] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1]))))), ((-((+(arr_21 [i_2]))))));
                        var_28 |= ((/* implicit */short) (~(min((((arr_25 [3LL] [12]) << (((arr_38 [i_2] [i_3]) - (3104770238U))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_3])), (var_2))))))));
                    }
                    var_29 = ((/* implicit */unsigned int) var_6);
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) var_1)), (arr_33 [i_10] [i_3] [i_3] [(short)4])))))));
                    /* LoopSeq 3 */
                    for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_31 = (+(((((/* implicit */_Bool) (+(7127690247226229124ULL)))) ? (((/* implicit */unsigned long long int) (+(2943566817U)))) : ((-(var_7))))));
                        var_32 = ((/* implicit */unsigned int) arr_34 [i_14] [i_10] [i_10]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_33 -= ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [3ULL] [i_3] [i_3] [3ULL] [i_10] [3ULL])) ? (var_7) : (var_6)));
                        arr_61 [i_4] [i_10] = ((/* implicit */unsigned int) arr_27 [i_2] [i_10] [i_2] [i_3] [i_15] [(unsigned char)0]);
                        arr_62 [i_2] [i_3] [i_4 - 1] [14U] [i_2] = ((/* implicit */unsigned char) arr_20 [i_2] [i_3] [i_4 - 1] [i_4 - 1]);
                        var_34 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) | (((/* implicit */int) arr_45 [i_3] [7U]))))) ? ((-(((/* implicit */int) (unsigned char)18)))) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_15] [3LL] [i_10])) : (((/* implicit */int) var_4))))));
                    }
                    for (int i_16 = 2; i_16 < 14; i_16 += 2) 
                    {
                        var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)230)) ? (arr_44 [i_4 - 1] [5LL] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))))), (((/* implicit */long long int) var_5))))) ? (((arr_18 [i_16 - 1] [i_16 - 1] [i_4 + 2]) >> (((((/* implicit */int) (unsigned short)42450)) - (42429))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_2] [i_3] [i_10] [i_2]))))));
                        var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_49 [i_16 + 1] [(short)0] [(unsigned short)0] [i_4] [i_3] [i_2])), (arr_21 [i_10])))), (max((6213351152825435722ULL), (arr_13 [i_2] [(short)0])))))) ? ((-(arr_10 [i_16]))) : (((/* implicit */long long int) min((arr_60 [i_16 - 1] [i_16 + 1] [i_4 - 1] [i_4 + 1]), (((/* implicit */unsigned int) (short)-19435)))))));
                        var_37 = ((/* implicit */unsigned long long int) var_0);
                    }
                }
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) var_4);
                arr_70 [i_17] [i_3] [i_2] = ((((/* implicit */_Bool) arr_67 [i_3] [i_3] [i_17])) ? (arr_67 [i_2] [i_3] [i_2]) : (arr_67 [2U] [i_3] [i_3]));
                arr_71 [i_2] [i_2] [i_3] [i_17] = ((((/* implicit */int) arr_39 [i_17] [i_17] [i_17] [i_3] [3U] [i_2])) << ((((-(33423360LL))) + (33423370LL))));
                var_39 = ((unsigned int) arr_44 [i_2] [i_3] [1ULL]);
            }
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                arr_75 [(unsigned short)10] = min((((/* implicit */unsigned int) (unsigned char)142)), (var_5));
                arr_76 [i_3] [i_18] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [13ULL] [11ULL] [10LL] [i_2] [i_18] [13ULL])) ? ((-(arr_57 [i_18] [i_3] [i_2] [i_2] [i_2]))) : (max((((unsigned long long int) arr_69 [i_2] [i_18] [i_18])), (((/* implicit */unsigned long long int) arr_20 [i_3] [(unsigned char)4] [i_3] [i_2]))))));
                var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_44 [i_3] [i_2] [i_18])))) ? (((arr_44 [i_2] [i_3] [i_18]) | (arr_44 [i_2] [i_2] [i_2]))) : (min((((/* implicit */long long int) var_0)), (arr_44 [i_2] [i_3] [i_18])))));
            }
        }
        for (short i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            arr_81 [i_2] [(short)10] = ((/* implicit */unsigned short) arr_80 [i_19] [0U]);
            var_41 = ((/* implicit */unsigned int) (~(arr_78 [i_2] [i_19])));
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    {
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((-(7127690247226229124ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_21])))))))))));
                        var_43 = ((/* implicit */unsigned int) arr_27 [i_2] [i_21] [i_19] [i_20] [i_20] [i_20]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_22 = 2; i_22 < 12; i_22 += 2) 
        {
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_17 [i_2] [i_22 - 1])))) ? (arr_27 [i_22 + 3] [i_22] [8U] [i_22] [i_22 + 1] [i_22 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
            var_45 |= ((/* implicit */unsigned short) var_9);
        }
        arr_88 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) < (arr_29 [i_2] [i_2] [(unsigned char)0] [i_2] [i_2] [i_2]))))));
    }
    for (unsigned short i_23 = 1; i_23 < 12; i_23 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_24 = 1; i_24 < 12; i_24 += 2) 
        {
            for (unsigned short i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                {
                    var_46 -= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (~(arr_80 [i_23 - 1] [i_23 - 1])))), (min((var_6), (((/* implicit */unsigned long long int) var_0))))))));
                    var_47 = ((((/* implicit */_Bool) min((((unsigned int) var_9)), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)248)))))))) ? ((((!(((/* implicit */_Bool) 1484822250U)))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) : (((min((var_0), (var_0))) << (((((long long int) var_0)) - (3302443316LL))))));
                    arr_97 [i_23] [i_24 - 1] [10LL] = ((/* implicit */long long int) var_2);
                    arr_98 [i_23] [0LL] [i_25] = ((/* implicit */unsigned int) 11319053826483322520ULL);
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_44 [i_23 + 1] [i_23 - 1] [i_23])))) ? (((/* implicit */long long int) (+(arr_29 [i_23 + 1] [14ULL] [i_23 + 1] [i_23] [14ULL] [i_23])))) : (((long long int) var_2))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) (unsigned char)0))))) - (min((arr_36 [i_23]), (((/* implicit */unsigned long long int) var_0))))))));
        var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_90 [i_23]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_26 = 0; i_26 < 21; i_26 += 2) 
    {
        arr_101 [i_26] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((unsigned short) 679077610U))), (((((/* implicit */_Bool) arr_99 [i_26] [(unsigned short)19])) ? (3729295607234397769LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) | (((/* implicit */long long int) var_9))));
        var_50 = ((/* implicit */short) arr_100 [i_26] [i_26]);
        arr_102 [(unsigned short)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (+((~(arr_99 [i_26] [i_26]))))))));
        arr_103 [i_26] [4ULL] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), ((+(arr_99 [i_26] [11ULL]))))), ((+((-(var_9)))))));
    }
    var_52 = ((/* implicit */int) max((var_52), ((~(((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)32))))) >= (var_9))))))));
}
