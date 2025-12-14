/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64684
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
    var_10 ^= ((/* implicit */short) var_2);
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 ^= ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (min((var_5), (((/* implicit */unsigned long long int) var_3)))))));
                var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                var_14 = ((/* implicit */unsigned long long int) min(((-(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_4))))))), ((unsigned short)0)));
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            arr_9 [i_3] = ((((/* implicit */unsigned long long int) arr_7 [i_2] [i_3] [(short)5])) + ((-(min((arr_4 [i_3]), (((/* implicit */unsigned long long int) (short)30985)))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)29651)), (-1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [(signed char)3])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))) - (-3365041810102613327LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_3 - 1] [3ULL])))))));
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) min((arr_10 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_4]), (arr_10 [i_5] [i_5 + 1] [i_5] [i_4]))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_3 - 3] [i_2]);
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) - (((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])) * (var_0)))));
                            var_20 = arr_11 [i_3] [i_4];
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_18 [i_2] [i_7] = ((/* implicit */unsigned int) 11735100207131740518ULL);
            arr_19 [i_2] = arr_11 [(short)4] [(short)4];
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_21 += ((/* implicit */unsigned long long int) arr_8 [i_2] [7ULL]);
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_26 [i_2] [i_2] [(_Bool)1] [i_2] = min((((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [(unsigned char)9]))) / (arr_6 [(short)1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_8] [i_2] [i_9] [(short)4])) ? (var_1) : (((/* implicit */unsigned int) arr_21 [i_2] [i_2]))))))), (4871256662120137231LL));
                var_22 = ((/* implicit */_Bool) ((unsigned int) max((arr_15 [i_2] [i_9 + 1] [2U] [i_9 + 1] [i_8] [8ULL]), (arr_15 [i_2] [i_9 + 1] [(_Bool)1] [i_2] [i_2] [0LL]))));
            }
            arr_27 [i_2] [i_8] [i_2] = ((/* implicit */_Bool) (short)-32767);
        }
        var_23 = min((((/* implicit */unsigned long long int) ((short) -4871256662120137240LL))), ((~(arr_24 [i_2] [i_2]))));
        arr_28 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((723470706), (((/* implicit */int) (unsigned short)65513))))), (min((((/* implicit */unsigned int) arr_1 [1ULL] [i_2])), (max((var_7), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned int) (~(11735100207131740517ULL)))))));
    }
    for (int i_10 = 2; i_10 < 14; i_10 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) arr_32 [i_10]);
        arr_33 [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((_Bool)1))))))), (min((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) arr_32 [i_10])), (18446744073709551600ULL)))))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) * (((((/* implicit */long long int) (~(1643427691)))) / (var_4)))));
            arr_39 [i_11] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_34 [i_11 - 1]))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_34 [i_11 - 1]))))) ? (min((8082596113525929612LL), (((/* implicit */long long int) arr_34 [i_11 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            var_28 += min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_37 [13ULL] [i_12])), (6301160980858786869ULL)))) ? (((((/* implicit */_Bool) arr_35 [i_12])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (max((4194303U), (((/* implicit */unsigned int) var_2))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (short)-2878))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12]))) : (arr_37 [(short)12] [i_11 - 1]))))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            arr_44 [i_11] = ((/* implicit */short) (+(max((8082596113525929605LL), (((/* implicit */long long int) arr_40 [i_11] [i_13]))))));
            var_29 -= ((/* implicit */unsigned long long int) -723470708);
            arr_45 [(short)19] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11] [18ULL]))) / (((((/* implicit */_Bool) min((((/* implicit */int) arr_38 [i_11] [14])), (2147483641)))) ? (2U) : (arr_43 [9LL] [21] [9LL])))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_52 [i_11] [i_13] [i_14] [14U] = ((/* implicit */unsigned long long int) arr_37 [i_13] [i_13]);
                        arr_53 [i_14] = ((/* implicit */unsigned long long int) arr_48 [i_15] [i_14] [i_13] [i_13] [i_11]);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(arr_46 [i_11 - 1] [i_11 - 1])))) * (max((1518722745929004051ULL), (((/* implicit */unsigned long long int) 4871256662120137231LL))))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 4; i_16 < 20; i_16 += 2) 
                        {
                            arr_56 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) var_4);
                            var_31 = ((/* implicit */_Bool) var_6);
                            var_32 = ((/* implicit */signed char) arr_43 [i_11] [i_11] [i_11]);
                        }
                        for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_15])) * (((/* implicit */int) (short)-29916))))) ? (((((/* implicit */int) arr_38 [i_11 - 1] [i_11 - 1])) * (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1))));
                            arr_61 [i_11] [i_11] [i_11] [i_11 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_13]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_18 = 3; i_18 < 20; i_18 += 1) 
                        {
                            arr_64 [i_14] [i_18] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3888))) * (((((/* implicit */_Bool) arr_43 [i_11] [i_15] [i_14])) ? (arr_43 [10ULL] [i_13] [i_11]) : (arr_62 [i_18] [i_11 - 1])))));
                            arr_65 [i_11] [i_18] [(unsigned char)2] [(short)7] [(signed char)5] [8] [11ULL] = ((long long int) min((((/* implicit */unsigned long long int) -8082596113525929612LL)), (8146383685129027935ULL)));
                            arr_66 [i_11 - 1] [i_13] [i_11 - 1] [i_15] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (arr_49 [21U] [i_13])));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (arr_43 [i_18] [i_14] [i_13])))) * (var_5))))))));
                        }
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            arr_70 [i_11] [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */short) ((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_11 - 1] [i_13] [(unsigned short)19] [i_15] [i_19]))))) * (min((((/* implicit */unsigned long long int) 2656339111U)), (8876122956663737965ULL)))));
                            var_35 = ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (arr_36 [i_14] [20U])))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_57 [i_19] [i_14] [i_11 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_11] [i_13] [1ULL] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((11924711183279293131ULL) + (((/* implicit */unsigned long long int) 3922594117U))))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_20 = 4; i_20 < 19; i_20 += 2) 
        {
            arr_74 [i_11] [i_11 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) (~((-(var_0))))));
            var_37 += ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_68 [(signed char)14] [i_20] [(short)14] [0LL] [(signed char)14] [(short)21] [i_20])) * (((/* implicit */int) arr_58 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))))) * ((-(var_5))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (4871256662120137228LL))))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 6711643866577811097ULL)) ? (18446744073709551611ULL) : (0ULL)));
        }
        for (long long int i_21 = 4; i_21 < 21; i_21 += 1) 
        {
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_40 [i_11 - 1] [i_21 - 3]))) ? (0ULL) : (((/* implicit */unsigned long long int) (+(3466690995U))))));
            arr_78 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [16U] [i_21] [i_21] [2LL] [2LL] [16U] [i_11]))))), (arr_63 [5U] [i_21] [i_21 - 3])))) ? (((/* implicit */unsigned long long int) 4871256662120137223LL)) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_41 [i_11 - 1] [i_21 - 2] [i_21 - 2]))))) ? (((unsigned long long int) -5462121494423734178LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        }
        for (unsigned int i_22 = 1; i_22 < 19; i_22 += 3) 
        {
            var_40 = ((/* implicit */unsigned int) ((short) (-(var_4))));
            var_41 = ((/* implicit */int) max((((/* implicit */long long int) arr_38 [(signed char)1] [i_11 - 1])), (((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)29592)), (arr_62 [14U] [14U])))) / (min((var_4), (((/* implicit */long long int) 372373174U))))))));
        }
        arr_81 [i_11] = ((/* implicit */unsigned long long int) arr_48 [i_11 - 1] [13LL] [i_11 - 1] [i_11] [7U]);
    }
}
