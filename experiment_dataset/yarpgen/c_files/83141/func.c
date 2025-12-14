/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83141
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] [(short)1] = max(((signed char)-15), (((/* implicit */signed char) (_Bool)1)));
        arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((int) arr_1 [i_0])), (((/* implicit */int) max((var_11), (var_12))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (min((9436383121097656033ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)8] [(_Bool)1])) + (((/* implicit */int) arr_1 [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)1] [(unsigned char)1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_1] [i_2]))));
                arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) ((signed char) (short)11049));
            }
            /* LoopNest 3 */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))), (var_1)))) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 - 3] [i_5] [4ULL] [9ULL] [i_5] [i_5])) || (((/* implicit */_Bool) ((int) (signed char)-15)))))))))));
                            arr_22 [i_1] [8] [i_1] [(_Bool)1] [(unsigned char)8] [i_4] [(unsigned char)8] &= ((/* implicit */unsigned short) ((signed char) max((18061029324534294222ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)-15))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((long long int) arr_18 [i_3] [i_3] [i_3] [(unsigned short)11] [10LL] [i_3])))));
                            var_18 |= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_20 [3LL] [i_1] [11] [i_4] [i_5])) : (arr_9 [0] [i_4]))))))), (arr_6 [i_1] [i_3])));
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (536870784))), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)-15)))))))) : (arr_21 [i_0] [i_0] [5] [i_0] [(unsigned char)4] [i_0])));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_28 [(unsigned char)11] [i_6] = (_Bool)0;
        var_19 -= ((/* implicit */unsigned char) (~((+(arr_24 [i_6])))));
        arr_29 [i_6] = ((int) (_Bool)1);
    }
    for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_41 [(_Bool)1] [i_9] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9]))) >= (min((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (arr_35 [i_10] [8ULL] [8ULL]))), (((/* implicit */unsigned long long int) var_13))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_38 [i_7] [i_8] [i_9] [i_10] [i_10]), (arr_38 [i_7] [i_8] [1LL] [i_9] [i_8]))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_39 [i_7] [i_8])) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_7] [i_10]))) : (arr_36 [i_9] [i_8] [i_9])));
                    }
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)32297)) : (arr_30 [10U]))) & (((/* implicit */int) (unsigned char)163))))) ? (((/* implicit */int) arr_39 [i_9] [i_8])) : (((/* implicit */int) (!(arr_33 [i_7] [i_7] [i_7 + 2]))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (arr_38 [(signed char)14] [16LL] [(unsigned char)9] [(short)6] [(signed char)14]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_39 [(unsigned char)17] [i_8]))))))))));
                        arr_44 [i_8] [(_Bool)1] [i_9] [17] |= ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (unsigned char)163)), (15453377558672025161ULL)))));
                        arr_45 [i_7] [16LL] [i_9] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_6);
                        var_23 ^= ((/* implicit */unsigned int) max((((((((/* implicit */int) var_7)) >= (arr_42 [i_7] [i_8] [i_8] [i_8] [(short)16] [(unsigned short)13]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_9] [i_8] [i_9])) : (((/* implicit */int) (unsigned char)9)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_7)))))), (((int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_9)))))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-15))))), (((((/* implicit */_Bool) arr_31 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_7] [11LL]))) : (arr_35 [(unsigned short)12] [i_7] [i_7])))))));
        /* LoopSeq 1 */
        for (int i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            var_25 = ((/* implicit */_Bool) var_13);
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_38 [i_7] [15LL] [(_Bool)1] [(short)4] [2U]))) % ((~(((/* implicit */int) (_Bool)1))))))) ? (((((3126240058080000896ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((arr_37 [i_7]) > (((/* implicit */int) var_12))))))) : (((/* implicit */int) (short)-21458)))))));
                        var_27 = arr_46 [0LL] [i_12] [3LL];
                        arr_53 [i_7] [i_12] [i_12] [(signed char)0] [(signed char)0] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), ((-(((/* implicit */int) arr_46 [i_7] [i_7] [i_7])))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            arr_57 [17] [i_12] [i_15] [(signed char)17] [i_12] = ((/* implicit */short) (-(arr_35 [i_14] [i_13] [i_12])));
                            arr_58 [i_7] [(_Bool)1] [i_7] [i_15] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)13)))));
                        }
                        for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_49 [i_16] [i_14] [i_13] [i_7])))))) ? (max((((((/* implicit */_Bool) arr_61 [i_16] [8LL] [11U] [i_7])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_42 [i_7] [i_7] [i_13] [17ULL] [i_14] [i_16]) / (((/* implicit */int) arr_43 [i_12] [(_Bool)1]))))))))))));
                            arr_62 [i_7] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((-2971155708857797460LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) arr_54 [i_7] [i_12] [i_12] [(_Bool)1] [i_12])))), (((/* implicit */int) ((signed char) -6696185471032518141LL)))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14])) ? (((/* implicit */int) arr_33 [i_7] [10LL] [i_16])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) arr_42 [0LL] [10ULL] [i_13] [8LL] [i_12] [i_7]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)33239)))) + (((((/* implicit */_Bool) arr_36 [12LL] [i_14] [(signed char)11])) ? (6696185471032518141LL) : (((/* implicit */long long int) arr_61 [i_7] [i_7] [i_7] [i_7])))))))))));
                            var_30 *= ((((-6696185471032518126LL) & (((/* implicit */long long int) ((-786346726) | (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) max(((unsigned char)87), ((unsigned char)134)))))))));
                            arr_63 [(_Bool)0] [i_14] [i_13] [(_Bool)1] [(_Bool)0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_13] [1LL] [i_16]))))) ? (min((((/* implicit */long long int) (short)(-32767 - 1))), (arr_48 [i_7] [(_Bool)1] [i_14] [i_16]))) : (min((((/* implicit */long long int) arr_39 [i_7] [i_12])), (var_1)))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) (_Bool)1);
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((int) arr_46 [i_7] [i_12] [(_Bool)1])))));
                            var_33 = ((/* implicit */unsigned short) (+((-(arr_67 [i_17])))));
                            arr_68 [i_12] [(_Bool)0] [i_13] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)54521)) >= (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)87), ((unsigned char)68)))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_18 = 2; i_18 < 18; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    {
                        var_34 &= arr_71 [12LL] [i_12] [i_12] [i_12] [i_12] [0LL];
                        var_35 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned char)164)), (arr_72 [(_Bool)1] [i_12] [i_7] [11LL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_12] [i_12 - 1] [i_12 - 2] [(short)15] [i_12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) (signed char)-48)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_30 [i_18])) ^ (arr_64 [i_19] [(unsigned char)10] [i_18] [i_12] [i_7]))))))));
                        arr_73 [i_7] [i_7] [i_12] [i_19] [8LL] [i_19] = ((/* implicit */int) arr_32 [(unsigned short)6]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            arr_76 [i_19] = (unsigned char)62;
                            arr_77 [i_7] [i_20] [8] |= ((/* implicit */unsigned long long int) var_0);
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_80 [i_7] [9LL] [(unsigned short)18] [i_19] [i_19] = ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)87)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (var_0)))))))));
                            arr_81 [i_19] [i_19] = ((((/* implicit */_Bool) arr_32 [i_21])) ? (max((((/* implicit */unsigned long long int) max((arr_33 [i_18] [10LL] [i_7]), (var_11)))), (((((/* implicit */_Bool) arr_46 [i_7] [i_19] [5LL])) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) arr_72 [(_Bool)1] [i_18] [(_Bool)1] [(_Bool)1])));
                            var_36 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_32 [i_21]), (((/* implicit */short) var_3))))) ? (((/* implicit */int) ((unsigned short) (signed char)-48))) : (((/* implicit */int) (unsigned short)54185)))), (((/* implicit */int) ((_Bool) min((arr_54 [i_7] [i_12] [8] [i_19] [(unsigned char)1]), (((/* implicit */signed char) var_12))))))));
                        }
                        for (signed char i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            arr_86 [i_7] [i_7] [i_18] [i_12] [i_22] |= ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_48 [i_12] [i_18] [i_19] [18LL])))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_0))))))) : (min((((((/* implicit */_Bool) arr_59 [i_7] [i_7] [i_7] [i_7] [(_Bool)1])) ? (12ULL) : (((/* implicit */unsigned long long int) arr_79 [i_12])))), (((/* implicit */unsigned long long int) (unsigned char)62)))));
                            var_37 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [4] [i_12] [i_12])) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -8866592277631597066LL)))))) : (((unsigned long long int) -894976908)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)28956))) ? (((/* implicit */int) min((var_11), (arr_78 [i_12] [i_12] [5LL] [18LL] [13] [i_12])))) : (((/* implicit */int) arr_49 [i_7] [i_12] [i_18] [(signed char)4])))))));
                            var_38 *= ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) ((long long int) var_3))), (var_5))));
                            arr_87 [i_7] [12LL] [i_18] [i_19] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1631755808)) ? (2993366515037526454ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))))) : (((/* implicit */int) max(((unsigned short)11357), (((/* implicit */unsigned short) arr_40 [i_18 - 1] [i_7 - 1])))))));
                        }
                    }
                } 
            } 
        }
    }
    for (long long int i_23 = 2; i_23 < 17; i_23 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */long long int) (_Bool)1)), (arr_74 [(_Bool)1] [i_23 + 2] [i_23 - 2] [(_Bool)1])))));
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_52 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]))))))), (2993366515037526468ULL))))));
    }
    var_41 = ((/* implicit */_Bool) min((max((var_8), (((var_8) | (var_4))))), (((/* implicit */long long int) ((unsigned char) var_8)))));
}
