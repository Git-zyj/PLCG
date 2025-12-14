/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76478
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
    var_11 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (9007198180999168LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_9))));
                            arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] [i_3] &= ((/* implicit */signed char) var_6);
                            var_13 += ((/* implicit */unsigned short) ((long long int) var_7));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_2] [i_2]))));
                arr_16 [i_0] [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1] [i_2])))) : (arr_11 [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0 - 1]));
                var_14 = ((/* implicit */short) ((long long int) arr_7 [i_0 + 1]));
            }
            for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                arr_19 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_5] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_1])))) != (((((/* implicit */_Bool) (short)-31138)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) var_9))))));
                var_15 -= ((/* implicit */signed char) arr_11 [i_5 - 2] [i_1] [i_5 - 2] [i_1] [i_1]);
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6] [i_6] = (+(var_6));
                            var_16 = ((((/* implicit */_Bool) arr_20 [i_5] [i_6])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (arr_11 [i_0] [i_1] [i_5 - 2] [i_6] [i_7]));
                        }
                    } 
                } 
                arr_26 [i_0] [i_5 - 1] = ((/* implicit */_Bool) var_3);
            }
            for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                arr_29 [i_1] [i_0] = ((/* implicit */long long int) var_9);
                var_17 = var_5;
                arr_30 [i_8] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (signed char)0);
            }
        }
        arr_31 [i_0] = var_5;
    }
    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 2) 
    {
        arr_34 [i_9 + 1] [i_9 - 1] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9 - 1])))))) / (var_6));
        var_18 = -8413175068110058266LL;
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            var_19 = ((/* implicit */short) ((long long int) var_7));
            var_20 = ((/* implicit */int) -7806834093336510598LL);
            arr_37 [i_9] = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) arr_36 [i_10] [i_9 + 1])) : (((/* implicit */int) var_10))))), (((long long int) var_4)));
        }
        for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        {
                            arr_47 [i_9] [i_9 + 2] [i_11 + 3] [i_11 + 1] [i_12] [i_14] [i_14] = ((/* implicit */long long int) max(((unsigned short)14336), (arr_33 [i_13])));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_45 [i_9 + 1] [i_12] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14])))))) ? (((((/* implicit */_Bool) (unsigned short)38122)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (unsigned short)38122)))) : (((/* implicit */int) arr_33 [i_9])))))))));
                            arr_48 [i_14] [i_11 + 2] [i_12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_13]))) : (arr_46 [i_14] [i_14 - 1] [i_14] [i_14 - 1] [i_14] [i_14] [i_14])))) ? (var_1) : (max((((arr_38 [i_9 + 2] [i_11 - 1] [i_13]) + (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9 + 2]))))), (var_8)))));
                            var_22 = ((/* implicit */unsigned short) (~(223101990217136633LL)));
                        }
                    } 
                } 
                arr_49 [i_11] [i_12] = max((((((/* implicit */_Bool) ((short) 8413175068110058265LL))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_9] [i_11] [i_12] [i_9 + 1] [i_11] [i_12] [i_9])) || (((/* implicit */_Bool) -1LL)))))))), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) var_5)))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned short i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9] [i_15] [i_9 + 1])) ? ((-(0))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_2)))))))) ? ((~(max((var_6), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9 - 1]))));
                            var_24 = ((((/* implicit */_Bool) -6360195324021322418LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8413175068110058266LL) : (((/* implicit */long long int) 893284439))))) ? (2735711552598656571LL) : (-9223372036854775790LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-30310))));
                        }
                    } 
                } 
                arr_55 [i_9] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)5)), (-9223372036854775806LL)))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_35 [i_9 + 2])) + (2147483647))) << (((((/* implicit */int) var_10)) - (12381)))))) : (max((((/* implicit */long long int) arr_35 [i_9 - 1])), (var_8)))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_40 [i_9] [i_11])), (arr_46 [i_9] [i_9] [i_9] [i_11] [i_12] [i_12] [i_12]))), (((/* implicit */long long int) ((unsigned short) arr_41 [i_9 + 2] [i_9 + 2] [i_11] [i_12])))))) ? (((-3361674459182322334LL) / ((+(9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24811)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_12] [i_12] [i_12] [i_12])) || (((/* implicit */_Bool) var_1))))))))));
            }
            for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                arr_59 [i_11] [i_9 - 1] = ((/* implicit */unsigned short) max((((arr_41 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 - 1]) << (((arr_41 [i_9 + 1] [i_9 + 1] [i_9] [i_9 - 1]) - (568175512))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-5241))) < (122880LL))))));
                arr_60 [i_9] [i_11] [i_17] [i_17] = max((9223372036854775794LL), (((((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_9]))) >= (arr_56 [i_17] [i_11] [i_11] [i_9]))) ? (((var_9) ? (var_8) : (arr_32 [i_9]))) : (((long long int) arr_45 [i_17] [i_11] [i_11] [i_9 + 1] [i_11] [i_9])))));
                /* LoopNest 2 */
                for (signed char i_18 = 3; i_18 < 20; i_18 += 2) 
                {
                    for (unsigned short i_19 = 1; i_19 < 20; i_19 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_63 [i_17] [i_17])) : (((/* implicit */int) arr_66 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 2]))))))) ? (((((/* implicit */_Bool) arr_43 [i_9] [i_11] [i_11] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) ((0LL) != (-5980196582006883220LL))))) : (((((/* implicit */_Bool) arr_44 [i_9 - 1] [i_18 + 1] [i_18 + 1] [i_18] [i_9 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45619))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-27071), (((/* implicit */short) arr_40 [i_9] [i_9])))))))))));
                            arr_67 [i_19] [i_18 + 1] [i_18] [i_17] [i_9] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_42 [i_11 + 4] [i_9 + 2] [i_9 + 2])))));
                            arr_68 [i_9] [i_9] [i_19] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_19 - 1] [i_19 - 1] [i_19] [i_11 + 1] [i_11 + 1]))))) < (((((arr_56 [i_9] [i_9] [i_9] [i_9]) & (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_9]))))) | ((+(-8413175068110058266LL)))))));
                            arr_69 [i_9] [i_11] [i_19] [i_18] [i_19] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            }
            arr_70 [i_9] [i_11 + 2] = var_8;
            arr_71 [i_9 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32748)) <= (((((/* implicit */int) arr_64 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11 - 2] [i_11] [i_11 + 1])) % (((/* implicit */int) arr_64 [i_9 - 1] [i_9] [i_9 - 1] [i_11 - 1] [i_11] [i_11 + 1]))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_20 = 3; i_20 < 19; i_20 += 2) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_56 [i_20] [i_20] [i_21] [i_21])) ? (arr_32 [i_20]) : (((/* implicit */long long int) arr_42 [i_20 - 2] [i_21] [i_21])))))) / (max((((/* implicit */long long int) ((unsigned short) arr_43 [i_21] [i_21] [i_20] [i_20]))), (((long long int) var_5))))));
                arr_76 [i_20] = ((/* implicit */unsigned short) arr_56 [i_20 - 3] [i_20 + 1] [i_21] [i_21]);
            }
        } 
    } 
}
