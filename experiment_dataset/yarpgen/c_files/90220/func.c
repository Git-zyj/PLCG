/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90220
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */long long int) arr_0 [(short)10] [9U])) > (-3446101844916211389LL)))), (var_14)));
        var_17 &= arr_0 [6] [6];
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    for (int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_18 -= (unsigned char)82;
                            var_19 = ((/* implicit */unsigned char) ((arr_7 [0U] [(unsigned char)12]) > (((/* implicit */long long int) ((/* implicit */int) (((-(var_14))) > (((/* implicit */long long int) 314616074))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_5] [i_5 - 4] [(unsigned char)14] [i_5 - 3] [i_4 + 3] [i_1]))) > (3446101844916211389LL)));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)22919)) > (arr_6 [i_1] [i_4] [i_1])))), (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) arr_5 [i_1] [5LL])) : (((/* implicit */int) arr_11 [(unsigned char)21]))))))) ? (((((/* implicit */_Bool) (short)-18435)) ? (-3446101844916211389LL) : (((/* implicit */long long int) 316141547U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [i_3] [i_5])) : (arr_6 [i_4] [(unsigned char)2] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) : (arr_8 [(unsigned char)19] [1U] [i_3] [i_4])))) : (1698061948286035924LL)))));
                            var_22 = ((/* implicit */int) (+(2080768U)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (+(arr_10 [i_1] [6U] [(short)19] [i_3])));
            }
            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) > (((/* implicit */int) (short)22919)))))));
                var_25 = ((/* implicit */int) max((var_25), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))) > (((((/* implicit */_Bool) arr_20 [19U] [i_2] [i_6] [i_2])) ? (-5129185774147821483LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))), ((+(((/* implicit */int) arr_11 [i_6]))))))));
                arr_21 [i_1] [(short)19] [i_2] [i_1] = ((((/* implicit */_Bool) min((((short) arr_20 [(unsigned char)14] [1LL] [9U] [i_6])), (((/* implicit */short) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0)))))))) ? (min((444855821), (((/* implicit */int) (unsigned char)40)))) : (((((/* implicit */_Bool) arr_19 [(unsigned char)1] [i_2] [0U] [i_2])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_14 [2LL])))));
                arr_22 [15U] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [(short)20] [i_1])) ? (arr_7 [(unsigned char)3] [(short)14]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [(unsigned char)11] [i_6] [i_2] [20LL])) > (((/* implicit */int) ((arr_8 [4] [13] [i_1] [(short)1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [19LL] [(short)19]))))))))))));
                var_26 = ((((((/* implicit */long long int) ((/* implicit */int) var_6))) > ((~(var_14))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [16] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0U) > (3956548717U))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_6])) ? (4292886527U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)27442), (var_5)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_1] [i_2] [i_1]) : (var_8))) : (((/* implicit */int) var_15))))));
            }
            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
            {
                arr_27 [i_1] = ((/* implicit */short) var_7);
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (arr_6 [(short)7] [(short)16] [i_1]) : (((/* implicit */int) ((short) arr_8 [i_7] [i_2] [4U] [i_1])))));
            }
            arr_28 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) arr_26 [i_1] [i_2])), ((-(((/* implicit */int) ((((/* implicit */long long int) arr_18 [(short)15])) > (arr_23 [i_1] [(short)5] [9U] [i_2]))))))));
        }
        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [2U] [(unsigned char)19])) ? (max((((/* implicit */long long int) 134215680)), (arr_17 [i_8 + 2] [i_8 - 1]))) : (((/* implicit */long long int) (-(arr_30 [i_8 + 2] [i_8 - 1]))))));
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (short i_10 = 4; i_10 < 21; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3963258302U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_9] [i_8 + 1] [i_1]))) > (arr_17 [i_8 + 1] [(unsigned char)3]))))))) ? (-1923889843) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_14 [i_1]))))));
                            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_37 [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_8 - 1])) ? (6730592168448031528LL) : (arr_17 [i_10 - 2] [i_8 - 1]))) > (min((arr_17 [i_10 - 4] [i_8 + 2]), (((/* implicit */long long int) arr_37 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_8 + 1]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_43 [i_1] [10] [1LL] [i_12] = ((/* implicit */short) var_11);
                var_31 = ((/* implicit */unsigned int) min((((long long int) 4292886527U)), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_7))))))));
            }
            var_32 = ((/* implicit */int) ((-8331652615177902552LL) > (((/* implicit */long long int) -796116128))));
            var_33 = ((/* implicit */unsigned char) var_14);
        }
        for (short i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) arr_4 [i_13] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5129185774147821483LL))) > (((/* implicit */long long int) ((/* implicit */int) max((arr_37 [i_1] [20LL] [(short)20] [(unsigned char)13]), (arr_35 [6] [12U] [i_1] [i_1])))))))));
            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_38 [i_1] [i_1] [(short)12] [i_13] [i_13])) ? (arr_38 [i_13] [i_1] [i_1] [i_1] [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [8] [i_1]) > (arr_17 [i_1] [i_13])))))));
            var_36 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28319)) ? (3779594331U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [7] [(unsigned char)4])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (arr_7 [i_1] [i_13]) : (((/* implicit */long long int) 4292886518U))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) > (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_15 [i_1] [(short)0] [2U] [i_13] [1] [i_13] [i_1])))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_7))))), (max((((/* implicit */short) (unsigned char)57)), ((short)18434))))))));
        }
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_1] [6] [i_1] [10LL])) ? (max((arr_38 [i_1] [12LL] [i_1] [i_1] [i_1]), (arr_38 [i_1] [(short)13] [i_1] [i_1] [(unsigned char)6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) > (2350517931U)))) > (((/* implicit */int) (unsigned char)230)))))))))));
    }
    var_38 = ((/* implicit */int) var_0);
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)22919))));
    /* LoopSeq 2 */
    for (short i_14 = 2; i_14 < 10; i_14 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_15 = 2; i_15 < 10; i_15 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)220)), (-2018901838)));
            arr_53 [9] [i_15 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_14 - 1] [10] [i_14 - 1] [i_14 - 2] [(short)8] [12U] [i_14])) ? (((/* implicit */unsigned int) ((((var_8) > (((/* implicit */int) (short)-12976)))) ? (((/* implicit */int) min(((unsigned char)220), ((unsigned char)58)))) : ((+(((/* implicit */int) arr_47 [i_14 - 1] [4]))))))) : (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((2271723276U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -134215680)) > (arr_41 [i_15] [i_14] [i_15])))))))));
        }
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            arr_56 [i_14 + 2] [i_16] [(short)8] = ((/* implicit */unsigned char) var_4);
            var_41 ^= ((/* implicit */short) 1189418661);
        }
        arr_57 [(unsigned char)10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [(unsigned char)7] [i_14] [i_14 - 2] [i_14 - 1])) ? (((/* implicit */int) arr_20 [i_14 + 1] [3U] [i_14 - 2] [i_14 - 1])) : (((/* implicit */int) arr_20 [i_14 - 2] [19LL] [i_14 - 2] [i_14 - 2])))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12956))) > (2080768U))))));
        var_42 = ((/* implicit */unsigned int) arr_25 [(unsigned char)0]);
    }
    for (short i_17 = 2; i_17 < 10; i_17 += 2) /* same iter space */
    {
        var_43 ^= ((/* implicit */short) arr_29 [i_17 + 1] [i_17 + 2] [i_17 - 1]);
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) 3761399470U)) ? (((/* implicit */int) (short)-12956)) : (((/* implicit */int) (unsigned char)249))));
        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_6)))) > (min(((+(((/* implicit */int) arr_42 [(unsigned char)6] [i_17] [i_17] [i_17 - 2])))), (((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))))));
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_17 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_17 - 2]))) : (arr_25 [i_17 + 2])))) ? ((~(((/* implicit */int) arr_45 [i_17 + 2])))) : ((+(((/* implicit */int) arr_45 [i_17 - 1]))))));
        var_47 = ((/* implicit */short) (!(((var_8) > (((/* implicit */int) arr_45 [i_17 - 1]))))));
    }
}
