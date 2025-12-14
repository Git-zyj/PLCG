/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95673
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [1ULL] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] |= ((/* implicit */signed char) (-(max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_9))))));
        var_10 = ((/* implicit */_Bool) max((var_0), (((((/* implicit */_Bool) (unsigned short)0)) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) < (arr_2 [6])))))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) (unsigned short)32788)) ? (((/* implicit */int) (unsigned short)32748)) : (((/* implicit */int) (unsigned short)0))))))) : (arr_2 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (-(min((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_7 [(unsigned short)0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        arr_9 [i_1] |= ((/* implicit */unsigned char) var_5);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((arr_1 [i_2] [i_2]) / (((int) arr_0 [i_2] [i_2]))));
        arr_13 [i_2] = ((/* implicit */short) ((var_9) / (((((/* implicit */int) (unsigned short)32785)) / (((/* implicit */int) (unsigned char)242))))));
        var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256))) | (646151247278460044ULL)))));
    }
    var_14 = ((/* implicit */unsigned char) ((_Bool) ((var_1) ? (((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((11723274824357500181ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            arr_19 [(unsigned short)4] [i_3 - 2] [i_3 - 1] = ((/* implicit */_Bool) max((arr_14 [i_4] [i_3 - 2]), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_8))))))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_15 -= max((((/* implicit */long long int) (+(((/* implicit */int) ((arr_21 [i_3] [i_4] [19ULL] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4 + 1] [i_5] [i_6] [i_3] [i_7 + 2] [i_5]))))))))), (max((max((var_0), (((/* implicit */long long int) arr_25 [i_3 - 2] [i_4] [(_Bool)1] [i_6] [i_7] [i_7] [i_3 - 2])))), (((/* implicit */long long int) var_9)))));
                            arr_27 [i_7 + 1] [i_7] [i_7] [(unsigned short)9] [i_7] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) (((((!(var_3))) ? (((/* implicit */int) arr_14 [i_3] [i_6])) : (((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_5] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65517)))))) % (((/* implicit */int) ((unsigned short) 4400821917714027156ULL)))));
                            arr_28 [13] [i_3] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) arr_14 [i_3 + 1] [i_3]))))), (((max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (6723469249352051456ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_3] [i_4] [i_5] [i_3] [i_3] [i_7 - 1]))))))));
                        }
                    } 
                } 
            } 
            var_16 *= ((/* implicit */unsigned long long int) (unsigned short)32771);
        }
        for (int i_8 = 4; i_8 < 19; i_8 += 3) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (min(((!(((/* implicit */_Bool) min((201326592ULL), (((/* implicit */unsigned long long int) 4294967277U))))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3] [(short)16]))) > (794862924U))))) != (arr_22 [i_8] [i_8] [i_8] [i_3 + 1] [i_3] [i_3])))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_8] [i_8])))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)31)), (var_0)))), (arr_21 [i_3] [i_3 - 2] [i_3] [i_3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_18 [i_8])) : (((/* implicit */int) arr_29 [i_3] [i_3]))))) ? (max((((/* implicit */unsigned long long int) 0LL)), (1874680055833166248ULL))) : (min((((/* implicit */unsigned long long int) var_0)), (arr_21 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 2] [i_8] [i_8])) ? (((/* implicit */int) arr_29 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) (short)32745)))) << (((/* implicit */int) var_3))))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((+(arr_22 [i_9] [i_9] [i_9] [(short)19] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_33 [i_9]))))))))), ((-(arr_31 [i_3 - 1] [i_9] [17LL])))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32256)) % (((/* implicit */int) (unsigned short)65535))));
        }
        arr_35 [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_3 - 2] [i_3 - 2])) ? (arr_31 [i_3] [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_25 [(unsigned char)2] [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3]), ((short)12770))), (((/* implicit */short) arr_18 [i_3]))))))));
        arr_36 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((629293165U), (((/* implicit */unsigned int) (_Bool)1))))) && (((_Bool) var_5))))) < (((/* implicit */int) ((signed char) max((arr_20 [i_3 - 1] [i_3 - 1] [i_3 - 1]), ((short)12785)))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_43 [i_10] [i_11] = ((/* implicit */short) min((max((arr_39 [i_10]), (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 3) 
                    {
                        {
                            arr_52 [i_10] [i_11] [i_10] [i_10] [i_14 + 1] |= ((/* implicit */_Bool) (short)511);
                            var_22 = ((/* implicit */signed char) max(((((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) arr_48 [i_14 - 3])))), (((((/* implicit */_Bool) 683089185U)) || (((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_12] [i_12]))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_46 [14U] [i_11])) || (((/* implicit */_Bool) 0ULL))))) << (((((/* implicit */int) arr_46 [i_13] [i_14 + 2])) - (124)))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) (~(((var_6) & (((/* implicit */int) (unsigned short)46518))))))) : (max((((/* implicit */long long int) arr_40 [8ULL])), (-5275907908732450046LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_15 = 1; i_15 < 24; i_15 += 3) 
        {
            arr_55 [i_10] [i_15] = ((/* implicit */_Bool) var_6);
            var_25 *= ((/* implicit */unsigned int) -3319337166868859499LL);
            arr_56 [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_50 [i_15 + 1] [i_15] [i_15] [(unsigned char)1] [(unsigned char)1])), (864691128455135232ULL)))) ? (min((var_6), (((/* implicit */int) (short)-6765)))) : (((/* implicit */int) min(((short)-32764), (((/* implicit */short) arr_50 [i_15 + 1] [(unsigned char)24] [(unsigned char)19] [i_15] [i_15])))))));
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((((((/* implicit */_Bool) max(((unsigned char)118), (((/* implicit */unsigned char) arr_44 [i_10] [i_10] [i_10]))))) ? (((/* implicit */int) max(((unsigned short)32771), (((/* implicit */unsigned short) arr_44 [i_10] [i_10] [19U]))))) : (((/* implicit */int) (unsigned char)149)))) == (((/* implicit */int) ((arr_37 [i_10] [i_10]) < (arr_37 [i_10] [i_10]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    arr_64 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(8668062612679712004ULL)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_58 [i_18])), (-4696797531070238605LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_17] [i_18]))) <= (arr_48 [i_16]))))) : (max((0ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_16])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)232)), (var_2)))) : (min((((/* implicit */int) arr_54 [(_Bool)1] [i_17] [16LL])), (2147483647))))))));
                    arr_65 [i_16] [i_16] [i_16] [i_18] = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_48 [i_17]))));
                    var_27 += max(((!(((/* implicit */_Bool) ((var_3) ? (var_6) : (((/* implicit */int) var_8))))))), (arr_54 [i_16] [i_17] [i_18]));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            {
                                var_28 = arr_62 [i_16] [i_18] [i_18];
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) ((956018817) < (((/* implicit */int) ((short) arr_57 [i_19]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_72 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)16))))) ? (((unsigned long long int) max((((/* implicit */int) (_Bool)1)), (2147483647)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)68)), (((((/* implicit */int) (unsigned short)21801)) << (((/* implicit */int) (_Bool)0))))))));
    }
}
