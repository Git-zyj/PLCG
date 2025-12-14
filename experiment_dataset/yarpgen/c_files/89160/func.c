/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89160
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (2811273006U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) 140737488355327ULL))));
        var_12 = ((((/* implicit */_Bool) (-((+(arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)4))))))) : ((+(max((((/* implicit */unsigned int) (_Bool)1)), (1940298171U))))));
        var_13 += ((/* implicit */unsigned int) ((min((max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (signed char)31)))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (signed char)-8))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)10)), (arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_14 -= ((/* implicit */unsigned char) (+(min((var_1), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_15 += ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_16 += ((/* implicit */short) max((var_1), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) var_7))))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (short)18725);
                        var_18 += ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) -1341615953)), (2156845897108319054LL))) >= (((/* implicit */long long int) ((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_1]))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */short) max((((((((int) arr_10 [i_0] [i_1] [i_2] [i_3])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)10] [i_1]))) < (1847269771U)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_1 [i_2]))))))))));
                    }
                }
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) | (12U))))))));
                arr_14 [i_2] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) var_5)), (arr_6 [i_0] [i_1]))) + (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-36))))))) / (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
            }
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((arr_3 [(_Bool)1] [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) / (min(((~(-6598926837589743825LL))), (((/* implicit */long long int) max((arr_15 [2U] [2U]), (((/* implicit */short) (_Bool)1)))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) var_6)), (arr_0 [i_5] [i_5])))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((529284367U) << (((4011996797U) - (4011996769U)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-5387497776181848038LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))) * (((unsigned long long int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    arr_29 [i_6] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1] [i_7] [i_7] [i_7])))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
                            var_24 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) arr_26 [i_9])) % (arr_20 [i_6] [i_6])))));
                            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(signed char)2] [i_7] [3LL]))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_9] [i_6] [i_6] [18U] [i_7] [i_9]))) + (((((/* implicit */_Bool) 763967687)) ? (6368758022839107032ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31102)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_27 += ((/* implicit */unsigned int) arr_31 [i_9] [i_7]);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4045496790U)) ? (-1077715094) : (-1)))) && (((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_11]))));
                            var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_9]))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-((-(-7585262021601543676LL))))))));
                            var_31 -= ((/* implicit */unsigned long long int) (unsigned char)74);
                        }
                        var_32 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        arr_41 [i_12] [i_12] [i_12] [6U] = ((/* implicit */unsigned char) arr_36 [i_7]);
                        arr_42 [i_12] = ((/* implicit */unsigned short) var_3);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)105))));
            arr_45 [i_6] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -922615476)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_6] [i_13])))));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    {
                        arr_57 [i_17] [(unsigned short)0] [i_16] [i_17] [i_17] [(_Bool)1] = ((/* implicit */unsigned int) arr_15 [i_14] [i_14]);
                        var_34 -= ((/* implicit */short) ((int) (-(((/* implicit */int) (signed char)108)))));
                        var_35 = ((/* implicit */unsigned char) min((min((var_4), (arr_37 [i_14] [i_14] [i_14] [i_14] [i_15] [i_16] [i_17]))), (((((/* implicit */_Bool) (short)18748)) || (arr_37 [i_14] [i_15] [i_15] [i_16] [i_17] [i_15] [(_Bool)1])))));
                    }
                } 
            } 
            var_36 -= max((((/* implicit */unsigned long long int) min((-922615489), (((/* implicit */int) (signed char)-16))))), (max((((/* implicit */unsigned long long int) (signed char)-2)), (12297970455836098611ULL))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) -6591684923796337838LL)))), (arr_1 [i_14])));
                        arr_62 [i_14] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_49 [i_14] [i_14] [i_14]))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) * (min((((/* implicit */unsigned long long int) arr_11 [i_14] [i_15] [i_14] [i_15] [i_15] [i_14] [i_15])), (arr_35 [i_14] [(short)1] [i_15] [i_15] [i_15] [i_15])))));
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    {
                        arr_71 [i_14] [i_14] [i_15] [i_21] [i_21] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) && (((/* implicit */_Bool) (short)-18731)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_14] [i_15] [i_20] [i_21] [i_15]))) ^ (arr_44 [i_14]))) : (((/* implicit */unsigned long long int) arr_0 [i_14] [i_14]))));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            var_40 += ((/* implicit */unsigned char) ((14136569410906973355ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)18)))))));
                            arr_74 [i_22] [i_22] [7U] [i_22] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(var_5)))), (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8))))))));
                            var_41 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((2034243540U), (((/* implicit */unsigned int) (_Bool)1))))) ^ (((((/* implicit */_Bool) arr_66 [i_14] [i_15] [i_20] [3U])) ? (max((((/* implicit */unsigned long long int) arr_37 [11] [11] [11] [11] [11] [11] [i_20])), (11067649932328479731ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) < (var_2)))))))));
                            var_42 -= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) == (2706762226U));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 1) 
                        {
                            arr_77 [i_14] [i_15] [i_23] = ((/* implicit */unsigned char) max(((+(arr_40 [i_15]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_14])))))));
                            var_43 = ((/* implicit */int) arr_44 [i_14]);
                        }
                        for (int i_24 = 0; i_24 < 11; i_24 += 1) 
                        {
                            arr_82 [i_24] [i_24] [i_20] [i_24] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (arr_55 [i_15] [i_15] [i_15] [i_15]) : (var_0))))) << (((((/* implicit */unsigned long long int) var_8)) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (6148773617873452988ULL)))))));
                            var_44 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((_Bool) arr_26 [12ULL])))))));
                            var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_48 [i_20] [i_21] [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_24] [i_21] [i_20] [i_15]))) : (((arr_48 [i_15] [i_20] [i_24]) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        }
                        for (signed char i_25 = 0; i_25 < 11; i_25 += 3) 
                        {
                            var_46 -= ((/* implicit */_Bool) (((~(min((((/* implicit */unsigned long long int) -2156845897108319066LL)), (arr_55 [i_15] [i_15] [i_21] [i_25]))))) % (min((max((((/* implicit */unsigned long long int) arr_63 [i_20] [i_15] [i_14])), (18002163640451332460ULL))), (((/* implicit */unsigned long long int) (!(var_4))))))));
                            var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 32767ULL))));
                        }
                    }
                } 
            } 
        }
        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) var_8))));
        var_49 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_14])) % ((+(((/* implicit */int) (_Bool)1))))))), (min((min((-3524017230467147035LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 16629292516609618193ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_14] [i_14] [i_14]))))))))));
    }
}
