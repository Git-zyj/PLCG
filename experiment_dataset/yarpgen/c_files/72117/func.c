/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72117
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20731))))), (((((/* implicit */_Bool) 0U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20743)))))))) || (((/* implicit */_Bool) (~(((((/* implicit */int) var_15)) & (((/* implicit */int) (_Bool)1)))))))));
    var_19 ^= ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) var_11);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned short) 16321135874189063969ULL)))));
                        arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20733)) ? (((/* implicit */int) (unsigned short)20722)) : (((/* implicit */int) (short)21878))));
                        var_22 = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_3 + 1]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)220)))) * (((/* implicit */int) (signed char)20))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44804)) >> (((((/* implicit */int) (short)7739)) - (7718)))))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_1))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61908))))), (((var_6) ? (var_16) : (var_16))))))));
                        }
                        arr_18 [i_2] [i_1 - 1] [i_2] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [i_1] [i_1 - 2] [i_2 - 3] [i_4] [i_4] [i_0])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            var_27 += ((/* implicit */unsigned short) ((unsigned char) var_3));
                            var_28 += ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0]);
                        }
                        for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)246)), (arr_7 [i_0] [i_1] [i_0] [i_7]))))))) ? (((long long int) min((((/* implicit */unsigned short) (short)7739)), (var_2)))) : (((/* implicit */long long int) var_17))));
                            var_30 = ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (var_17) : (((/* implicit */int) (short)7739))))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_23 [i_0] [i_7 - 1] [i_2] [i_2 - 1] [i_7]))))));
                            arr_26 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 2] [i_1 - 1] [i_7 + 2] [i_4]))) ^ (((((/* implicit */_Bool) 809728496U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33778))))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(arr_5 [i_8]))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (unsigned short i_10 = 3; i_10 < 10; i_10 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 4) 
                    {
                        arr_37 [i_8] [i_8] [i_8] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))) & (((((/* implicit */_Bool) 432345564227567616LL)) ? (-8542774756099621099LL) : (arr_6 [i_10 + 1] [i_10] [i_10 + 1]))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39565)) & (1348254503)));
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned char) ((3438777495625676302ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))));
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (short)7))));
                        var_36 = ((/* implicit */unsigned int) arr_17 [i_8] [i_11 + 1]);
                    }
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(8542774756099621099LL))), (((/* implicit */long long int) max(((unsigned short)65533), (((/* implicit */unsigned short) var_10)))))))) ? ((+(var_16))) : (((((/* implicit */_Bool) (~(-1348254504)))) ? (arr_5 [i_10 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2979355397U)) ? (3204935018U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32704))))))))));
                        arr_41 [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_12 + 1] [i_9])) && (((/* implicit */_Bool) arr_14 [i_10] [i_9] [i_12 - 1] [i_12])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_9] [i_12 - 1] [i_12])) ? (((/* implicit */int) arr_23 [i_10 - 2] [i_10] [i_8] [i_12 + 1] [i_12 - 1])) : (((/* implicit */int) arr_23 [i_10 - 1] [i_12] [i_8] [i_12 - 1] [i_12 - 1])))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 4; i_13 < 12; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            arr_47 [i_8] [i_9] [i_10 + 1] [i_10] [i_14] [i_14 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_17) != (-1827057760))))) >= (((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_10 - 3] [i_10] [i_13 - 4] [i_14 - 1] [i_14])) ? (((/* implicit */long long int) 2147483647)) : (var_5)))));
                            var_38 = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 12; i_15 += 4) 
                        {
                            arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-157)) ? ((~(var_16))) : (((/* implicit */long long int) arr_13 [i_8] [i_9] [i_10] [i_13 - 1] [i_9] [i_8]))));
                            var_39 += ((/* implicit */signed char) arr_5 [i_8]);
                        }
                        arr_52 [i_8] [i_9] [i_9] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_13 + 1] [i_13 - 3]))));
                        var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8542774756099621099LL))));
                        var_41 = ((/* implicit */_Bool) (unsigned short)32838);
                        /* LoopSeq 1 */
                        for (long long int i_16 = 3; i_16 < 10; i_16 += 4) 
                        {
                            var_42 = ((/* implicit */_Bool) ((long long int) (-(var_17))));
                            var_43 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_13 - 4])) ? (arr_15 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((~(((/* implicit */int) (unsigned char)220)))) : (((((/* implicit */_Bool) (unsigned short)32851)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-126))))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_16] [i_16] [i_16 - 1]))) : (14131770677507491597ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_10 + 1] [i_13] [i_13 - 4] [i_16] [i_16] [i_16] [i_16]))) : (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (arr_8 [i_8] [i_9] [i_9] [i_13 - 4])))));
                        }
                    }
                    arr_57 [i_8] [i_9] [i_10 + 1] [i_10 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) arr_1 [i_10 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_10 - 3])))))));
                    var_45 *= ((/* implicit */short) 4314973396202060007ULL);
                    arr_58 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_34 [i_8]);
                    var_46 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) & (((((/* implicit */_Bool) (short)10963)) ? (1423513481U) : (((/* implicit */unsigned int) -855748848))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_18 = 3; i_18 < 12; i_18 += 4) 
        {
            var_47 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -1002526495)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18177))) : (var_11))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_18]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_17] [i_18])))))) * (((((/* implicit */_Bool) (short)-32072)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                for (unsigned short i_20 = 2; i_20 < 12; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 4) 
                    {
                        {
                            arr_71 [i_19] [i_21] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_59 [i_19 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_18 - 3] [i_18] [i_18 + 1] [i_19 + 1] [i_20 - 1]))) : (arr_59 [i_19 + 1]))), (((/* implicit */unsigned int) ((unsigned short) var_5)))));
                            var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_39 [i_17] [i_18 - 2] [i_19 - 1]) ? (((/* implicit */int) arr_39 [i_17] [i_18 - 3] [i_19 + 1])) : (((/* implicit */int) arr_66 [i_19 + 1] [i_20 - 1] [i_19 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_39 [i_18 + 1] [i_18 + 1] [i_19 - 1]))))) : (max((((/* implicit */long long int) (unsigned char)128)), (9182878496713871059LL)))));
                            arr_72 [i_19] [i_19] [i_19] [i_20 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_73 [i_17] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_65 [i_17] [i_18 + 1] [i_17]))))), (max((((/* implicit */long long int) max((arr_9 [i_17] [i_17] [i_18]), (((/* implicit */unsigned int) var_13))))), (var_5)))));
            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) / (1030571750U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_50 [i_18 - 1] [i_18] [i_18])), (arr_21 [i_18 - 1] [i_18] [i_18] [i_17] [i_17] [i_18 - 1] [i_17]))))) : (max((((/* implicit */unsigned long long int) (unsigned short)32982)), (10923248801944659225ULL))))))));
            /* LoopNest 2 */
            for (unsigned int i_22 = 2; i_22 < 12; i_22 += 4) 
            {
                for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
                {
                    {
                        var_50 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) arr_67 [i_17] [i_18]))), ((+(18446744073709551615ULL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_51 += ((/* implicit */_Bool) ((int) (+(arr_76 [i_24] [i_18] [i_22 + 1] [i_22 - 1]))));
                            arr_81 [i_17] [i_24] [i_22] [i_23] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8419)) ? (((/* implicit */unsigned long long int) ((var_12) ? (arr_13 [i_18 - 2] [i_18 - 2] [i_18 + 1] [i_22 - 1] [i_22 + 1] [i_22 + 1]) : (arr_13 [i_18 - 2] [i_18 + 1] [i_18 + 1] [i_22 - 2] [i_18 - 2] [i_22 - 2])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1002526504)) ? (8151799174711881745LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (arr_56 [i_18 - 1] [i_22 - 2])))));
                            var_52 = ((/* implicit */long long int) max((var_52), (max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_67 [i_17] [i_18 + 1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 13; i_25 += 4) 
                        {
                            var_53 = ((/* implicit */short) ((((/* implicit */int) arr_50 [i_18 - 1] [i_22 - 2] [i_25])) % (((/* implicit */int) (unsigned short)32982))));
                            var_54 = ((/* implicit */unsigned char) 18446744073709551607ULL);
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            var_55 = arr_54 [i_17] [i_17] [i_17] [i_17] [i_26] [i_17] [i_17];
            var_56 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) (unsigned short)32982)) ? (((/* implicit */int) (unsigned short)40523)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)37631)) != (((/* implicit */int) (short)-18966)))))))));
        }
    }
    var_57 &= ((/* implicit */unsigned long long int) var_1);
}
