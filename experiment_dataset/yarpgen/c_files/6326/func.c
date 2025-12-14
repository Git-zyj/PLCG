/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6326
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
    var_12 *= ((/* implicit */unsigned char) ((min((var_9), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) >> (((((/* implicit */int) (signed char)-123)) + (149)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [(signed char)9] [(_Bool)1] = ((/* implicit */unsigned int) (-(2497926453174287169LL)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1324888440)) + (var_9)));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_3);
                        var_13 += ((/* implicit */long long int) 1324888440);
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (+(arr_4 [i_1])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_10 [i_0] [i_2] [i_2] [i_1])));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [i_5] [i_5] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_3 [(signed char)11]))))) ? (min((((/* implicit */unsigned int) var_10)), (var_0))) : ((+(var_4)))))), (arr_1 [i_4])));
            var_15 = ((/* implicit */unsigned long long int) (+((~(2555008725U)))));
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_16 -= ((/* implicit */short) (signed char)127);
            arr_23 [(signed char)10] [i_6] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))));
            arr_24 [i_6] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63963))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 295962423U)) : (arr_20 [4U] [i_6]))))))));
            var_17 = ((/* implicit */long long int) (-((~(((/* implicit */int) var_2))))));
        }
        for (int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            var_18 += max((min((((/* implicit */unsigned long long int) ((-1324888440) != (((/* implicit */int) arr_19 [i_4] [i_4]))))), (((var_3) ^ (arr_4 [i_4]))))), (((/* implicit */unsigned long long int) 287869107)));
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_7 + 1]))));
                var_20 -= (signed char)-126;
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(arr_26 [i_7])))) - (arr_1 [i_4])));
                arr_32 [i_4] [i_7] [i_9] = ((((/* implicit */_Bool) var_1)) ? ((+(arr_10 [i_4] [i_4] [i_7] [i_9]))) : (((unsigned long long int) (signed char)32)));
                arr_33 [i_4] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_7 + 3]))));
                var_22 = ((/* implicit */signed char) arr_29 [i_7]);
                var_23 = ((/* implicit */unsigned char) var_10);
            }
            for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_24 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (((((/* implicit */_Bool) arr_28 [i_4] [0ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_4)))))));
                            arr_41 [i_4] [i_7] [5ULL] [i_12] = ((/* implicit */unsigned long long int) var_5);
                            var_25 = ((/* implicit */long long int) var_3);
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)69))), (var_9)));
                            arr_42 [i_4] [i_7] [i_4] [i_11] [i_12] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_21 [i_7] [i_12 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_43 [i_13]);
                            arr_49 [i_13] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((int) 1792182015270542309ULL))), (arr_20 [i_7 - 1] [i_7 + 2])))));
                        }
                    } 
                } 
                arr_50 [9ULL] [i_7] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) min((1174185877), (var_5)))), (((((/* implicit */_Bool) arr_44 [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_7 + 2] [i_7 - 1] [i_10] [i_10] [i_10 - 2]))) : (arr_44 [i_7 + 2] [i_7 - 1] [i_10] [i_10 + 1] [i_10 + 1])))));
            }
            var_28 |= (((~(arr_27 [i_4] [i_4] [(_Bool)1] [i_7 + 1]))) ^ (((/* implicit */int) arr_6 [i_7])));
        }
        var_29 = ((/* implicit */unsigned char) var_7);
        var_30 = ((/* implicit */short) min(((-(((/* implicit */int) arr_16 [i_4])))), ((+((-(((/* implicit */int) arr_0 [i_4]))))))));
        arr_51 [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_4]))))));
        var_31 -= ((/* implicit */unsigned long long int) (((-(max((((/* implicit */long long int) (unsigned short)508)), (-804375575977362988LL))))) % (((/* implicit */long long int) (~(var_0))))));
    }
    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_55 [i_15] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_43 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_15] [i_15] [i_15]))) : (arr_44 [i_15] [4ULL] [i_15] [i_15] [i_15])))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                {
                    var_32 &= ((/* implicit */unsigned long long int) var_6);
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_15] [i_15] [i_15]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((+(4565605674389326513LL)))));
                }
            } 
        } 
        arr_62 [i_15] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -1324888440)) <= (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) 1739958570U)))))))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
    {
        arr_65 [i_18] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned int) arr_63 [i_18])) != (var_4)))), (((((/* implicit */_Bool) -1721855970)) ? (arr_63 [i_18]) : (arr_63 [i_18])))));
        /* LoopSeq 2 */
        for (short i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            arr_69 [(signed char)11] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_68 [i_18] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))) == ((+(9879903142256165134ULL))))))));
            var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), (min((((unsigned long long int) arr_66 [i_19] [i_18])), (var_3)))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_66 [i_19] [i_18])) > (((/* implicit */int) var_2))))) % ((-((+(172605915)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */short) (-(var_4)));
                            var_37 = (-(((min((arr_76 [(unsigned short)18] [(unsigned short)18] [8ULL] [(unsigned short)18] [i_22] [(unsigned short)18]), ((-2147483647 - 1)))) % (((/* implicit */int) arr_67 [i_20])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 3) 
        {
            arr_79 [i_18] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_18] [(short)1] [i_23] [i_23] [i_23] [i_23])) ? (arr_74 [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) arr_76 [i_18] [i_23] [i_18] [i_23] [i_18] [i_18]))))), (max((arr_72 [(unsigned char)3] [i_23] [i_23] [i_23]), (((/* implicit */unsigned long long int) arr_77 [i_18] [3LL]))))));
            var_38 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)2701))))));
            arr_80 [i_18] [i_18] = ((/* implicit */signed char) ((((unsigned int) (signed char)-121)) * (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (signed char)60)) ? (var_4) : (((/* implicit */unsigned int) arr_76 [i_18] [i_23] [i_23] [18] [i_23] [i_23])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))));
        }
        arr_81 [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_70 [i_18] [i_18] [8LL] [i_18]) > (arr_70 [i_18] [i_18] [i_18] [i_18])))), (1152921504606846464ULL)));
        /* LoopSeq 1 */
        for (short i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            var_39 = ((/* implicit */short) (-((~(var_9)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */_Bool) arr_85 [i_18] [i_18] [i_25] [(signed char)6]);
                /* LoopSeq 1 */
                for (int i_26 = 0; i_26 < 19; i_26 += 3) 
                {
                    var_41 = ((/* implicit */long long int) (+(((/* implicit */int) arr_68 [i_25] [7]))));
                    var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)12288)))))));
                    var_43 = ((/* implicit */short) 6993496176019383070LL);
                }
                var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)6029))));
                arr_89 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_86 [i_18])) && (((/* implicit */_Bool) arr_67 [i_24]))));
                arr_90 [i_18] [i_18] [i_25] = ((/* implicit */unsigned long long int) ((((1023LL) != (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_83 [i_18] [i_18] [i_18])));
            }
            for (long long int i_27 = 0; i_27 < 19; i_27 += 3) /* same iter space */
            {
                var_45 *= ((/* implicit */unsigned int) max(((-(((((/* implicit */int) arr_67 [i_24])) + (((/* implicit */int) (unsigned char)205)))))), (((((/* implicit */_Bool) 137170518016ULL)) ? (((/* implicit */int) arr_71 [i_24] [i_24] [i_18])) : (((/* implicit */int) arr_71 [i_24] [i_24] [10ULL]))))));
                /* LoopSeq 1 */
                for (signed char i_28 = 0; i_28 < 19; i_28 += 4) 
                {
                    arr_95 [i_18] [(unsigned short)11] [i_18] [i_28] = ((/* implicit */unsigned short) (-((((-(((/* implicit */int) var_10)))) + (((/* implicit */int) arr_91 [i_24] [i_24] [i_24]))))));
                    var_46 &= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_8)))), ((((((-(var_5))) + (2147483647))) << (((((((/* implicit */_Bool) 9879903142256165134ULL)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_82 [i_24])))) - (164)))))));
                }
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((~(((((/* implicit */_Bool) 1324888449)) ? (arr_83 [i_18] [(short)0] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_7))), (arr_88 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))));
            }
            for (long long int i_29 = 0; i_29 < 19; i_29 += 3) /* same iter space */
            {
                var_48 = min(((((!(((/* implicit */_Bool) 1324888439)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) arr_94 [i_29] [i_29] [i_24] [i_18] [i_18] [i_18])))), (((/* implicit */unsigned long long int) max((min((6993496176019383060LL), (((/* implicit */long long int) arr_64 [i_24])))), (((/* implicit */long long int) arr_64 [i_29]))))));
                var_49 = (((+(((((/* implicit */_Bool) var_7)) ? (10218102925905541657ULL) : (((/* implicit */unsigned long long int) 520192U)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [i_18] [i_18] [i_24] [i_18])) ? (((((/* implicit */_Bool) 4194302)) ? (((/* implicit */int) var_11)) : (-1001689671))) : (((((/* implicit */int) arr_82 [i_18])) | (1324888449)))))));
            }
            /* vectorizable */
            for (long long int i_30 = 0; i_30 < 19; i_30 += 3) /* same iter space */
            {
                arr_100 [i_24] [(short)14] [i_30] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_97 [8ULL] [8ULL] [i_30]))))));
                var_50 = ((/* implicit */signed char) (((+(arr_72 [i_18] [i_18] [i_18] [i_18]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_30] [i_18]))) != (-2254045091348234380LL)))))));
                arr_101 [i_18] [i_30] [i_30] = ((/* implicit */int) ((short) arr_91 [i_18] [i_18] [(unsigned char)8]));
                arr_102 [i_30] [i_30] [i_30] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-15585))));
            }
        }
        var_51 = ((/* implicit */long long int) ((max(((~(((/* implicit */int) var_8)))), (((var_5) << (((var_5) - (791238281))))))) <= (((/* implicit */int) arr_73 [i_18] [i_18] [(signed char)14] [i_18] [i_18] [(unsigned char)1]))));
    }
    var_52 = var_2;
}
