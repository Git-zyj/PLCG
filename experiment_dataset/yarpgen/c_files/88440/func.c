/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88440
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [(unsigned char)6] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [(short)10]))));
                        var_13 = ((/* implicit */unsigned short) 4758237137483361387LL);
                        var_14 = ((/* implicit */short) (+(((min((((/* implicit */long long int) (short)-27335)), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))));
                        arr_13 [i_0] [2ULL] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (~(max((((long long int) (_Bool)0)), (((/* implicit */long long int) (unsigned char)245))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0]))))) ^ (((((/* implicit */_Bool) arr_0 [11LL])) ? (arr_3 [6LL]) : (var_4))))));
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1961242876U)))) ? (((/* implicit */int) ((signed char) 9827540264296386453ULL))) : (((((/* implicit */_Bool) arr_15 [13LL] [(short)7])) ? (((/* implicit */int) (unsigned short)28945)) : (((/* implicit */int) arr_14 [i_4] [i_4]))))))) ? (((((/* implicit */_Bool) min((arr_15 [i_4] [i_4]), (((/* implicit */unsigned short) (signed char)-115))))) ? (min((((/* implicit */long long int) arr_16 [i_4])), (-8952629730052062584LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))))) : (min((4621947145613904831LL), (((/* implicit */long long int) (short)-16538))))));
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)15)))))) : (((/* implicit */int) var_8)))))));
    }
    var_18 = ((/* implicit */unsigned short) (((!((_Bool)0))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (2737876405620901210LL))), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_19 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)44379)), ((~(((/* implicit */int) (signed char)-26))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_6] [i_6 - 2] [i_6]))))) : (((var_2) ? (((/* implicit */long long int) ((arr_14 [i_7] [i_6]) ? (((/* implicit */int) arr_18 [i_7] [i_6 - 1])) : (((/* implicit */int) arr_26 [i_6] [(short)5]))))) : (min((var_5), (((/* implicit */long long int) var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))) : (4571830474753823246ULL)))))) ? (((((((/* implicit */_Bool) -1009112243)) && (((/* implicit */_Bool) (short)16796)))) ? (((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) arr_14 [i_5] [i_8 + 1])) : (((/* implicit */int) (short)32687)))) : (((((/* implicit */int) arr_15 [(signed char)2] [i_5])) / (-919190850))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(unsigned char)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1624))))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_27 [i_7] [i_8 + 1] [i_9]))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_33 [i_6] [(unsigned short)13] [i_9] [i_9] [i_9] [i_8 - 1] [i_6])) - (((/* implicit */int) arr_32 [11] [(unsigned short)11] [11] [i_8 + 1] [11])))));
                                arr_34 [3LL] [1] [i_6] = ((/* implicit */long long int) max((max((9660694433366211040ULL), (((/* implicit */unsigned long long int) 1930668460200946557LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                                var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_27 [i_8 - 1] [i_6 + 2] [i_6]))))));
                            }
                        } 
                    } 
                }
                var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) arr_16 [9ULL])) || (((/* implicit */_Bool) arr_22 [i_5] [i_6 - 1] [10ULL])))) ? (8116193102490639395ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))))) : (((((/* implicit */_Bool) 249138971256570583ULL)) ? (5887078675053173407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (long long int i_11 = 4; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_39 [13U] [i_6] [(unsigned short)0] = ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) -1984415730)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34648)) | (((/* implicit */int) (short)-19690))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1943))) : (1106534433160258786LL))));
                            arr_40 [i_6] [i_6] = ((/* implicit */unsigned char) (((!(arr_36 [i_6] [i_10] [(short)2] [i_11]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [7LL] [(_Bool)1] [(_Bool)1] [i_6] [(unsigned char)10] [i_6])) && (((/* implicit */_Bool) arr_33 [8ULL] [8ULL] [i_6] [(short)7] [(unsigned char)12] [i_10] [i_6]))))) : (((/* implicit */int) (!(arr_36 [i_11] [i_11] [i_11 + 1] [6]))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((signed char) ((max((7135236205133152141ULL), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6])))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_10]))))))));
                                var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_25 [i_10] [i_6 - 2] [i_6 - 3]), (arr_25 [i_10] [i_6 - 1] [i_6 + 2])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), ((+(4484703854478191632ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                            for (unsigned char i_13 = 4; i_13 < 12; i_13 += 1) 
                            {
                                arr_48 [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned short)31721)) ? (-47372825) : (((/* implicit */int) (_Bool)1)));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_29 [(unsigned char)5] [(short)4] [(_Bool)1] [i_6 + 1] [i_6] [i_6])))));
                                arr_49 [i_5] [i_6] [(unsigned short)2] [i_11] [i_11] [(unsigned char)3] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned char) ((_Bool) (!((_Bool)0)))))));
                            }
                            arr_50 [i_11] [i_10] [i_10] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1166531609277398799ULL)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((((/* implicit */_Bool) ((3302204728U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_10] [i_10] [i_6] [i_10])))))) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_23 [i_6] [i_10]))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_6] [(unsigned char)12])) ? ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(signed char)8] [(signed char)8] [i_10] [i_10] [12] [i_10]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */short) (unsigned char)154)), (var_8))), (((/* implicit */short) min(((signed char)65), ((signed char)57))))))))));
                        }
                    } 
                } 
                arr_51 [i_6] = ((/* implicit */short) var_4);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_14 = 4; i_14 < 17; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (long long int i_16 = 2; i_16 < 18; i_16 += 2) 
            {
                for (unsigned char i_17 = 4; i_17 < 16; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_64 [i_14 + 2] [i_14 + 2] [i_16] [i_17] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_61 [i_16 + 1] [i_16 + 1] [i_16 - 2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))))));
                            arr_65 [i_14] [i_15] [(unsigned char)14] [i_17] [i_18] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1080683279020036447LL)), ((~(((((/* implicit */_Bool) (short)-9688)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14473))) : (8622439758183910190ULL)))))));
                            arr_66 [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((3290808601695626008ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_59 [(unsigned char)10] [i_17] [i_15]))))))) : (((/* implicit */int) (signed char)73))));
                        }
                        for (unsigned int i_19 = 2; i_19 < 17; i_19 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((max(((signed char)-34), ((signed char)83))), (((/* implicit */signed char) (!(arr_54 [i_14] [i_16 + 2] [i_17 + 1]))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~((~(7948128688928610840LL))))))));
                            var_30 = ((/* implicit */long long int) (-(((min(((_Bool)1), ((_Bool)1))) ? ((-(-483242500))) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((-1241436204548563480LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_67 [(signed char)17] [i_17 + 2] [i_17] [i_17] [i_17] [i_14 - 3] [i_14])), ((~(arr_57 [i_15])))))))))));
                    }
                } 
            } 
        } 
        arr_70 [(signed char)15] &= ((/* implicit */long long int) (~((+(((/* implicit */int) ((unsigned char) 4027331275923841100LL)))))));
    }
    for (unsigned char i_20 = 1; i_20 < 12; i_20 += 2) 
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [(unsigned char)9] [(unsigned char)9] [i_20] [i_20] [(unsigned char)7] [i_20])) || (((/* implicit */_Bool) (short)20925))));
        arr_73 [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) var_10)) : (2613515954944852374ULL))))))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) 
    {
        var_33 = ((/* implicit */int) (-(max((((/* implicit */long long int) (~(((/* implicit */int) arr_62 [i_21] [9] [i_21] [i_21] [i_21] [i_21] [(signed char)4]))))), (-515959674097681777LL)))));
        arr_78 [i_21] [i_21] = min((min((((/* implicit */unsigned int) arr_4 [i_21])), (arr_24 [i_21]))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_53 [i_21])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_15 [i_21] [i_21])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
        var_34 = ((/* implicit */long long int) var_12);
        arr_79 [i_21] [i_21] = ((/* implicit */_Bool) (-(((int) arr_7 [i_21] [i_21] [i_21]))));
    }
}
