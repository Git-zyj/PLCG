/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82967
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)64)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0U))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_4 [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_16 [(signed char)7] [(signed char)7] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) 2147483647);
                            var_17 = ((/* implicit */unsigned char) arr_6 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_1 + 1]);
                            arr_17 [i_4] [i_4] [(short)11] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [4U] [i_0] [i_0]);
                            var_18 = ((/* implicit */unsigned int) (+(arr_14 [i_4] [i_1] [i_2] [i_3] [i_4])));
                        }
                        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (11482102445743115585ULL)))));
                    }
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            arr_23 [i_0] [16ULL] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1]))));
                            arr_24 [9LL] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (signed char)-89);
                        }
                        for (signed char i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            arr_27 [1ULL] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)50963));
                            arr_28 [i_5] = (+(((/* implicit */int) arr_5 [i_0] [i_5])));
                            var_20 *= ((/* implicit */long long int) 18446744073709551615ULL);
                        }
                        var_21 -= (!(((/* implicit */_Bool) (signed char)-32)));
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [0LL] [i_0] [i_1] [(signed char)4] [i_5]))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [6U] [i_1 - 1] [(signed char)10] [i_5] [i_8]))) : (arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1])));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)51863))));
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [(unsigned short)10] [i_1 - 1] [i_2] [i_8]))));
                            arr_31 [i_8] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */signed char) (unsigned short)24885);
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_26 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [18U]) : (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_27 *= arr_11 [i_1 + 1] [i_1] [i_1] [i_5] [(short)20] [i_5];
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_39 [i_0] [i_5] [(unsigned char)8] [i_5] [(unsigned short)22] = ((/* implicit */unsigned long long int) (+(847943382U)));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [(_Bool)1] [i_5] [i_5] [i_10])) ? (((/* implicit */int) (short)3040)) : (0)))) ? (((/* implicit */int) arr_15 [i_1 - 1] [16ULL] [i_1] [i_1 - 1] [i_0])) : (((/* implicit */int) (unsigned short)24885)))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5605802700027275708ULL)) ? (((/* implicit */unsigned long long int) -4450037816574756474LL)) : (6964641627966436043ULL)));
                        }
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -4450037816574756474LL)) ? (arr_14 [i_0] [i_2] [i_1 + 1] [i_1 - 1] [i_0]) : (arr_14 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_0]))))));
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] [(unsigned char)4] [i_1 + 1] [i_0] = ((/* implicit */_Bool) arr_5 [i_11] [i_1]);
                        var_31 -= ((/* implicit */signed char) 3699974763U);
                        arr_44 [i_11] [i_2] [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned short)32788);
                    }
                }
                var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0] [(short)22] [10ULL] [(signed char)4] [i_0]))));
            }
        } 
    } 
    var_33 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_9))))));
    var_34 = ((/* implicit */short) min((12840941373682275905ULL), ((((_Bool)1) ? (((unsigned long long int) (unsigned short)112)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118)))))));
    /* LoopNest 3 */
    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            for (unsigned int i_14 = 3; i_14 < 21; i_14 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(16322483841538314432ULL)))) ? (arr_54 [i_15 - 1] [i_15 - 2] [i_14 + 1] [i_14] [i_14] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2362746732754373744ULL))))))) ? (0ULL) : (17741967765547509536ULL)));
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-((~(min((arr_9 [i_12] [i_12] [i_14] [i_14]), (arr_26 [i_12] [i_15 - 2] [i_14 - 3] [i_15] [i_16] [i_16] [i_15]))))))))));
                            arr_59 [i_12] [i_13] [i_14] [i_12] [i_16] = ((/* implicit */unsigned long long int) (-(1327759685)));
                        }
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                        {
                            arr_64 [12ULL] [i_13] [(signed char)5] [i_15] [i_12] [(unsigned char)7] = ((/* implicit */int) ((((/* implicit */_Bool) 11472426421100173782ULL)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -2053198247)) : (((((/* implicit */_Bool) 12840941373682275908ULL)) ? (((/* implicit */unsigned long long int) 4611686018427379712LL)) : (9512972167869902970ULL))))) : (((/* implicit */unsigned long long int) -6963760861678905316LL))));
                            var_37 -= ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_6 [i_12] [i_12] [(_Bool)1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40650))) : (0ULL))), (13054299981220153344ULL))), (7595508227185231049ULL)));
                            arr_65 [i_12] [i_12] [i_14 + 2] [(signed char)8] [i_17] = ((/* implicit */unsigned char) -5475276700529742320LL);
                        }
                    }
                    for (signed char i_18 = 2; i_18 < 22; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(4184007093U)))))) ? (((/* implicit */long long int) (-(arr_6 [i_12 - 1] [i_13] [i_14] [i_18])))) : (max((((long long int) 18446744073709551615ULL)), (((((/* implicit */_Bool) (unsigned short)65530)) ? (-6963760861678905316LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))))))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) 15231215987769633172ULL))));
                        arr_69 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_19 [i_14 - 2] [i_14] [i_14] [i_14 - 2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 1; i_19 < 23; i_19 += 2) 
                    {
                        for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                arr_77 [i_12] [22ULL] [i_14 + 1] [(_Bool)1] [8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_11 [13ULL] [i_13] [i_14] [i_13] [i_19 - 1] [10ULL])))))))) ? ((~(((/* implicit */int) arr_55 [i_20] [i_19] [22ULL] [i_14] [i_13] [i_12 + 1])))) : (((/* implicit */int) min((((unsigned char) arr_30 [i_12] [i_13] [(_Bool)1] [i_19] [(_Bool)1])), (((/* implicit */unsigned char) arr_63 [i_12 + 2] [10LL] [(unsigned char)21] [i_19 + 1])))))));
                                var_40 = ((/* implicit */unsigned int) arr_70 [i_12 + 1]);
                                arr_78 [i_12] [i_13] [i_14 - 1] [i_19] [i_20] [2ULL] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_12] [i_13] [i_19] [(unsigned short)16])) ? (arr_58 [i_20] [(_Bool)1] [i_14 + 3] [i_14] [i_13] [i_12]) : (((/* implicit */int) arr_76 [i_12 + 2] [i_13] [i_14] [i_19] [i_20]))))) ? (max((((/* implicit */long long int) arr_55 [i_20] [(signed char)10] [i_14] [i_14] [i_13] [i_12])), (arr_66 [14] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_12] [i_13] [i_12] [11U]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
