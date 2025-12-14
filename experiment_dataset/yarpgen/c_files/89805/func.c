/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89805
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
    var_19 = ((/* implicit */short) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1214406681)) ? (((/* implicit */int) (_Bool)1)) : (1214406672)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((unsigned int) ((((/* implicit */_Bool) 1047552ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (-9908822)))) : ((-((-(1675228281U)))))));
        var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (-(arr_1 [(unsigned char)4] [i_0])))) : (var_9)))));
        var_21 -= ((/* implicit */unsigned char) ((long long int) ((unsigned char) min(((short)-12245), ((short)32740)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((var_3) << (((((((/* implicit */int) arr_3 [i_1])) + (5445))) - (14))))) : (((/* implicit */int) arr_0 [i_1]))));
        arr_6 [i_1] [(short)5] = ((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) -1679625673211057487LL))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 21ULL)) && (((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_1])))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1214406684)) ? (((unsigned long long int) (short)12175)) : (((/* implicit */unsigned long long int) -1214406658))));
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((unsigned char) (signed char)116));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) (-(1214406672)))) : (((((/* implicit */_Bool) 1675228277U)) ? (4611685984067649536ULL) : (arr_4 [i_1] [i_2]))))))));
                var_25 -= ((/* implicit */signed char) var_12);
            }
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)247)) << (((arr_11 [i_2]) - (135087230762517706ULL))))))))));
                var_27 = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]);
                arr_16 [i_1] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [3])) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_4] [i_4]))))));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 6; i_7 += 4) 
                    {
                        {
                            arr_25 [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_7] [i_7 + 4]))));
                            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2619739031U)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) -8768231572066919713LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_13)))))) : ((-(var_18)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_2]))) + (arr_20 [i_1] [i_2] [i_5]))))))));
                arr_26 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_23 [i_1] [i_2] [i_5] [i_1] [i_2] [(signed char)2] [i_2]))) ? (((var_12) - (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) (+(var_3))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3ULL)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709549568ULL)))))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(arr_8 [i_1] [i_2] [i_1]))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_1] [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_9] [(_Bool)1]) >= (16ULL))))) != (((((/* implicit */_Bool) arr_21 [i_1] [6ULL] [i_1] [i_9])) ? (var_11) : (arr_31 [(signed char)6] [i_9] [i_9])))));
            var_33 = ((/* implicit */_Bool) (-(arr_22 [i_1] [i_1] [i_1] [i_9] [i_9])));
            arr_32 [i_9] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_13 [i_9])))));
        }
        for (short i_10 = 2; i_10 < 7; i_10 += 2) /* same iter space */
        {
            arr_35 [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (11441204913156082268ULL) : (arr_31 [i_1] [i_1] [i_1])))) ? ((-(((/* implicit */int) (short)-522)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 635690507461396809ULL)))))));
            arr_36 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10 + 1])) ? (((/* implicit */unsigned long long int) 1214406657)) : (arr_22 [i_1] [i_10 + 3] [i_10] [(_Bool)1] [(_Bool)1])));
        }
        for (short i_11 = 2; i_11 < 7; i_11 += 2) /* same iter space */
        {
            arr_40 [i_1] = ((/* implicit */short) (-((+(1675228277U)))));
            var_34 = ((/* implicit */unsigned long long int) arr_0 [i_11]);
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
            {
                arr_44 [i_1] [i_11] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) 1679625673211057486LL));
                var_35 = (+(((((/* implicit */_Bool) (unsigned char)15)) ? (166816958807738683LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                arr_45 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) - (1112342959)))) ? (arr_29 [i_1] [6ULL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32756)) ? (var_5) : (((/* implicit */int) (signed char)(-127 - 1))))))));
            }
            for (int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 4; i_14 < 9; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        {
                            arr_53 [i_1] [1LL] [i_1] [i_13] [i_13] [i_1] [i_15] = ((/* implicit */short) (((((+(((/* implicit */int) arr_50 [i_1] [i_11] [i_1] [0LL] [i_1] [i_15])))) + (2147483647))) >> ((((-(-166816958807738691LL))) - (166816958807738671LL)))));
                            var_36 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_11 + 3] [i_11] [(short)9] [i_11] [i_11] [i_11 + 3] [(short)9]))) - (0ULL));
                            arr_54 [i_1] [i_11] [i_13] [i_1] [9U] [i_15] = ((/* implicit */_Bool) -2476680444060489569LL);
                            var_37 -= ((/* implicit */short) (-(((/* implicit */int) arr_52 [i_14 - 4] [i_15] [i_15] [i_15] [i_15] [i_14 - 4] [i_11 + 2]))));
                            arr_55 [i_13] [3ULL] [i_13] [i_13] [i_15] [i_13] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) 1675228275U)) : (166816958807738703LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 7; i_17 += 4) 
                    {
                        {
                            arr_62 [i_11 + 1] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_31 [i_17] [i_16] [i_1])));
                            arr_63 [(short)1] [i_17] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_11 + 1] [i_16 + 1]))) : ((+(arr_29 [i_1] [i_1])))));
                            var_38 -= ((int) (-(arr_4 [i_1] [i_11 - 2])));
                        }
                    } 
                } 
                arr_64 [7ULL] [(short)3] [7ULL] [(_Bool)1] = ((/* implicit */short) arr_43 [8ULL] [i_11] [i_11 + 2] [(short)6]);
            }
            for (signed char i_18 = 1; i_18 < 7; i_18 += 4) 
            {
                var_39 = ((/* implicit */long long int) ((short) arr_61 [(short)5] [(short)5] [(short)5] [i_1] [i_11]));
                arr_68 [(short)2] [i_1] [i_18] = ((/* implicit */unsigned char) (-(var_7)));
                var_40 = ((/* implicit */long long int) ((((/* implicit */int) (short)-20264)) * (((/* implicit */int) (signed char)-14))));
                var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_61 [i_11] [i_11] [i_11 + 3] [i_11 + 3] [i_18 - 1])) <= (var_9)));
            }
            for (short i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                arr_71 [i_19] [i_19] [i_1] = ((/* implicit */short) arr_31 [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) 
                    {
                        {
                            arr_77 [i_19] [i_20] [i_19] [i_1] [i_11] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((288229276640083968LL) >> (((-8085008985527304782LL) + (8085008985527304791LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_16)))))));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((arr_48 [i_19] [i_19]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_1] [i_11] [i_1] [i_19] [i_20] [i_21])) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_19])) : (((/* implicit */int) var_8)))))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) 8865864953978871503ULL))));
                            var_44 = (-(8865864953978871503ULL));
                        }
                    } 
                } 
                arr_78 [1] [i_19] = ((/* implicit */unsigned long long int) -11LL);
            }
        }
        var_45 = ((/* implicit */unsigned char) arr_56 [i_1] [(_Bool)1] [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 10; i_22 += 3) 
    {
        var_46 = ((/* implicit */unsigned long long int) (-(arr_29 [i_22] [i_22])));
        arr_81 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_22]))))) : (((((/* implicit */unsigned long long int) var_5)) | (8377047310420506451ULL)))));
    }
}
