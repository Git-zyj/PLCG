/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94787
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
    var_15 -= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_13))) != (var_7)));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned short)192)))))));
        }
        for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */short) -2147483635);
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((_Bool) arr_2 [i_0] [i_0])) ? (max((min((((/* implicit */unsigned long long int) var_4)), (arr_10 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((short) var_6))))) : (((/* implicit */unsigned long long int) (((+(-2147483635))) - (((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_7))))))));
            var_17 -= ((/* implicit */unsigned int) ((unsigned char) var_14));
            /* LoopNest 2 */
            for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)32740)), (((2147483634) >> (((13487090615230831392ULL) - (13487090615230831373ULL)))))))), (min((((/* implicit */unsigned int) (short)32757)), (2991080669U))))))));
                        arr_18 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)56))))));
                        var_19 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned char) -29934795))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [(signed char)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4503599627370495LL)))))))));
                        arr_19 [i_0] [(unsigned short)8] [(unsigned short)8] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((min((((((/* implicit */int) var_11)) >> (((arr_10 [i_2] [i_4]) - (9494740854596208021ULL))))), (((/* implicit */int) arr_2 [i_4] [i_0])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_9 [i_2]) + (9223372036854775807LL))) << (((var_6) - (10084647824749702061ULL)))))))))))) : (((/* implicit */unsigned char) ((min((((((/* implicit */int) var_11)) >> (((arr_10 [i_2] [i_4]) - (9494740854596208021ULL))))), (((/* implicit */int) arr_2 [i_4] [i_0])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((((arr_9 [i_2]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_6) - (10084647824749702061ULL))))))))))));
                    }
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) (_Bool)1);
                    var_21 = ((/* implicit */int) var_6);
                }
                arr_29 [i_6] = (+(max((((/* implicit */unsigned long long int) ((int) arr_7 [4ULL] [i_6]))), (4959653458478720224ULL))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_34 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min(((-(var_2))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0] [i_5]))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            var_22 *= ((/* implicit */short) 0);
                            var_23 = ((/* implicit */unsigned char) ((short) ((unsigned short) (_Bool)1)));
                        }
                    } 
                } 
            }
            arr_43 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_41 [i_0] [i_5] [i_5] [i_0] [(_Bool)1] [i_5])))))), (max((((long long int) arr_2 [i_0] [i_5])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5801)) ? (((/* implicit */int) (unsigned short)15112)) : (((/* implicit */int) (unsigned char)255))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                var_25 *= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)87))))), (((((/* implicit */_Bool) var_13)) ? (4959653458478720224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_5] [i_11])))))))));
                var_26 = ((/* implicit */long long int) ((int) ((arr_36 [i_0] [i_5] [i_5] [i_11] [i_11] [i_11]) ? (((/* implicit */int) arr_13 [(signed char)11] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_13 [(unsigned short)12] [i_5] [i_0] [i_5])))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_8 [i_0] [i_5] [i_11]), (((/* implicit */unsigned short) arr_41 [i_0] [i_0] [i_11] [i_11] [i_11] [i_0]))))) ? (((/* implicit */int) (unsigned short)16320)) : (((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_0] [i_0]))))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)46)))))))))));
                arr_47 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((unsigned short) 10552191191729984031ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [(short)5] |= max((((long long int) var_10)), (max((((((/* implicit */_Bool) arr_42 [i_5] [i_5])) ? (-5123029297947267087LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11339))))), (((/* implicit */long long int) ((unsigned char) (short)-11339))))));
                            var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((1223409683) << (((((/* implicit */int) (unsigned short)15102)) - (15102))))), (((0) >> (((-1809154747) + (1809154762)))))))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))) : (min((((int) var_3)), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            var_29 = ((/* implicit */unsigned short) var_11);
                            var_30 = ((/* implicit */unsigned char) var_10);
                            var_31 ^= ((/* implicit */_Bool) ((unsigned short) ((arr_27 [i_0] [i_5] [i_11] [i_12]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_11] [(short)11] [i_12] [i_13]))))) : (((/* implicit */int) arr_36 [i_0] [i_5] [i_0] [i_0] [i_13] [i_13])))));
                        }
                    } 
                } 
            }
            arr_53 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((int) 7894552881979567584ULL)), ((-(((/* implicit */int) (unsigned short)48080)))))), ((-(((/* implicit */int) ((short) arr_41 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0])))))));
        }
        for (int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 2; i_15 < 12; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_63 [(short)7] [i_0] [i_0] [i_0] [i_0] = var_13;
                        arr_64 [i_14] = ((/* implicit */unsigned int) var_4);
                        arr_65 [i_0] [(short)4] [(short)4] [11ULL] [i_0] = ((/* implicit */short) 7894552881979567584ULL);
                        var_32 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) 18425152056551555574ULL)))), (((((/* implicit */int) var_12)) == (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [i_14])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [i_0] [i_14] [i_14] [i_0])) : (((/* implicit */int) arr_23 [i_0])))))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) max(((~(2147483647))), ((+(2147483631))))))));
        }
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11339)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)67)), (2325532322U)))))))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
    {
        arr_70 [(signed char)17] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)199)))));
        arr_71 [i_17] = ((((/* implicit */_Bool) (+(arr_68 [i_17])))) && (((/* implicit */_Bool) ((arr_68 [(unsigned char)10]) | (((/* implicit */unsigned long long int) var_7))))));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_79 [i_17] [i_17] [i_17] [i_20] [i_17] [i_17] = ((((/* implicit */int) arr_77 [i_19 - 1] [i_19 - 1] [i_19 + 1] [i_19 - 1])) >> ((((~(arr_69 [i_17]))) + (425494810))));
                        var_36 = ((/* implicit */unsigned long long int) (+(((long long int) var_9))));
                        arr_80 [i_20] [i_18] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_68 [i_17])) || (((/* implicit */_Bool) var_4)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_21 = 2; i_21 < 17; i_21 += 1) 
                    {
                        for (short i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            {
                                arr_87 [i_17] [15LL] [i_17] [i_21] [15LL] [i_19] = ((/* implicit */unsigned short) arr_74 [i_17]);
                                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)47))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_38 -= ((/* implicit */int) var_6);
}
