/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73459
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((short) var_6);
                var_10 = ((/* implicit */_Bool) 13569283005614005113ULL);
                var_11 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
                var_12 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((526195665), (((/* implicit */int) (unsigned char)89))))))))));
                var_13 = ((/* implicit */long long int) arr_1 [9ULL]);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_7 [i_2] [i_2]))))) ^ (((((/* implicit */_Bool) -1827192185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [13] [8]))) : (arr_8 [4ULL] [4ULL]))));
        var_15 = ((/* implicit */unsigned long long int) arr_7 [i_2] [5U]);
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_13 [16LL] = ((/* implicit */_Bool) 4877461068095546503ULL);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(unsigned short)11] [i_4] [2U] [i_5])) ? (min((14650545434046291823ULL), (((/* implicit */unsigned long long int) -1199250285)))) : (min((var_7), (((/* implicit */unsigned long long int) (~(var_9))))))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [7ULL] [7ULL])), (arr_8 [(_Bool)1] [i_5]))))));
                    var_18 = ((/* implicit */int) arr_15 [(unsigned short)20]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [18U] [18U] [(short)0]))))) ? ((-(-8484201770026583037LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3])))));
                        arr_21 [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_3] [i_3] [i_6]))));
                        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_19 [i_6] [12ULL] [12ULL] [15ULL] [1] [i_3])))) ? (arr_8 [i_3] [9ULL]) : (((/* implicit */unsigned long long int) ((int) var_5)))));
                    }
                    for (short i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((unsigned int) arr_8 [i_3] [i_7]));
                        var_22 = ((/* implicit */int) var_9);
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_7);
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [13LL] [13LL])), ((short)-27005)))) ? (((((/* implicit */_Bool) 18055600554549783611ULL)) ? (13569283005614005118ULL) : (14650545434046291823ULL))) : ((~(4877461068095546503ULL)))))) ? ((~(arr_8 [i_7] [(short)11]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [10ULL])), (arr_25 [i_4] [i_7 - 2] [i_4] [i_7 + 1] [i_7 + 2])))));
                        }
                        for (int i_9 = 3; i_9 < 18; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_9]))) | (var_0))))), ((~((~(((/* implicit */int) arr_27 [i_3] [i_3] [i_5] [i_7] [(unsigned char)10] [i_9])))))))))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_3] [4U] [i_3] [6ULL] [7ULL]) - (((/* implicit */int) arr_11 [20LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_4)) ? (4877461068095546501ULL) : (arr_8 [i_5] [i_5])))))) ? (((unsigned int) ((unsigned short) var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)5869), (((/* implicit */unsigned short) (unsigned char)90))))) % (((/* implicit */int) arr_28 [i_9] [(_Bool)1] [8U] [(short)12] [i_4] [8U])))))));
                            var_26 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_9 [3ULL])), (min((((/* implicit */unsigned int) var_1)), (var_0))))), (((/* implicit */unsigned int) arr_24 [(unsigned short)17]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */int) arr_10 [i_7 - 2] [5U]);
                            arr_33 [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)10] [(unsigned char)10]))) >= (arr_31 [14U] [i_4] [14U] [i_7] [(_Bool)1])))))))));
                        }
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [19U])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)152)) + (886796886)))) : (arr_15 [(_Bool)1])));
                            arr_36 [i_7] = min((((((/* implicit */_Bool) ((int) arr_19 [i_3] [i_4] [i_4] [i_4] [i_7] [13ULL]))) ? (arr_19 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [9LL]) : (((/* implicit */unsigned long long int) arr_12 [9U])))), (((/* implicit */unsigned long long int) (-(((arr_31 [i_3] [i_3] [15LL] [i_3] [i_3]) + (((/* implicit */long long int) var_1))))))));
                            var_29 = (_Bool)0;
                            var_30 = ((/* implicit */unsigned char) ((int) (+((-(var_4))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4]))));
                            var_32 = ((/* implicit */int) arr_11 [(short)0]);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) arr_12 [i_5]);
                            var_34 += ((/* implicit */int) (+(0LL)));
                            var_35 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_27 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [15ULL]))) + (2147483647))) >> (((((((/* implicit */int) arr_37 [14U] [i_4] [i_4] [14U] [11] [14U] [4])) ^ (((/* implicit */int) var_5)))) - (43446)))));
                            var_36 = ((/* implicit */unsigned char) arr_16 [i_13] [2ULL] [2ULL]);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned short) min((min((var_2), (((((/* implicit */_Bool) 1363483894U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (7798695307553855086LL))))), (max((arr_31 [i_7] [i_7 + 2] [i_7 - 2] [i_7 + 2] [i_7 - 1]), (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_43 [i_3])))))))));
                            var_38 &= ((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_5] [(unsigned char)15] [(unsigned short)16]);
                            var_39 = (+(((/* implicit */int) var_5)));
                        }
                    }
                    for (short i_15 = 2; i_15 < 19; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_16 = 1; i_16 < 20; i_16 += 4) 
                        {
                            arr_50 [i_3] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_4])))))), (((((/* implicit */_Bool) 4877461068095546503ULL)) ? (((/* implicit */unsigned int) -1199250314)) : (1363483894U)))));
                            var_40 = ((/* implicit */unsigned char) arr_39 [(_Bool)1] [i_16] [i_15] [(short)9] [(short)16] [(short)16] [i_3]);
                            arr_51 [i_16] [i_16] [i_16] [14] [i_16] = ((/* implicit */unsigned long long int) (unsigned char)167);
                        }
                        for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            var_41 *= ((/* implicit */unsigned int) arr_37 [i_3] [(unsigned short)15] [7U] [i_4] [(unsigned short)15] [i_15] [i_17]);
                            var_42 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_3] [i_4] [i_5] [i_15] [(unsigned short)16] [(unsigned short)16])) ? (arr_45 [i_5] [2ULL] [i_5] [i_5] [15ULL]) : (var_2))))), (arr_42 [8ULL] [8ULL] [8ULL])));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_15] [i_18])) - (((/* implicit */int) ((((/* implicit */_Bool) 526195665)) || (((/* implicit */_Bool) 15243280696425988647ULL)))))));
                            var_44 = ((/* implicit */long long int) arr_28 [i_18] [(unsigned short)3] [i_5] [0ULL] [i_3] [i_3]);
                            var_45 = ((/* implicit */unsigned char) arr_38 [(short)12] [(_Bool)1] [20ULL] [(_Bool)1] [8ULL] [8ULL]);
                            arr_58 [i_3] [4ULL] [(unsigned short)7] [i_3] [(short)11] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_15 + 2]))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                        {
                            var_46 = ((/* implicit */int) var_7);
                            var_47 = ((/* implicit */signed char) (-(arr_12 [12])));
                            var_48 = (~((~((~(((/* implicit */int) arr_55 [i_3] [5])))))));
                            var_49 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [10] [10] [10])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_9) : (arr_47 [i_4] [i_15] [i_4]))));
                        }
                        var_50 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [17] [17] [i_15 + 2] [i_15] [17])) ? (arr_29 [0ULL] [0ULL] [i_15 - 2] [0ULL] [0]) : (arr_29 [i_3] [(unsigned short)14] [i_15 - 1] [i_3] [(short)0])))));
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)160)) << (((((/* implicit */int) var_6)) + (25022))))))));
                    }
                    for (short i_20 = 2; i_20 < 19; i_20 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) /* same iter space */
                        {
                            var_52 = ((/* implicit */unsigned int) 3221735233413922549LL);
                            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((arr_47 [i_20 + 1] [i_21 - 1] [i_21]) - (((/* implicit */unsigned int) ((int) var_8))))))));
                            arr_68 [(_Bool)1] [(signed char)4] [i_5] [i_5] [(unsigned char)0] [i_4] [(unsigned short)13] = ((/* implicit */_Bool) arr_18 [3LL] [i_4] [i_5] [i_21]);
                            var_54 = arr_59 [i_21] [19ULL] [(_Bool)1] [i_4] [10U];
                        }
                        for (unsigned int i_22 = 2; i_22 < 20; i_22 += 2) /* same iter space */
                        {
                            var_55 = ((((/* implicit */_Bool) arr_62 [12ULL] [12ULL] [12ULL] [6ULL] [i_3])) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [10U])) && (((/* implicit */_Bool) arr_61 [i_3] [i_3] [i_3] [i_3] [i_3] [17] [i_22])))) || ((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((_Bool) arr_30 [i_20]))));
                            arr_71 [i_3] [i_4] [i_4] [i_3] [(unsigned char)18] [(short)6] = ((/* implicit */_Bool) var_1);
                            var_56 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_47 [i_3] [i_4] [i_5])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            var_57 += ((/* implicit */unsigned short) arr_25 [(_Bool)1] [20U] [(_Bool)1] [20U] [i_3]);
                            var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) ((((/* implicit */_Bool) arr_42 [(_Bool)1] [8U] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(_Bool)1] [11U] [10U] [(_Bool)1] [(unsigned short)13])) && (((/* implicit */_Bool) var_4)))))))) : (arr_70 [1U] [(_Bool)1] [i_5] [(_Bool)1] [i_5] [16ULL]))))));
                        }
                        var_59 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) arr_14 [(_Bool)1])) ^ (arr_25 [(short)20] [i_5] [20] [i_3] [i_3])))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 21; i_23 += 4) /* same iter space */
    {
        var_60 = ((/* implicit */unsigned long long int) min((var_60), ((-(((((/* implicit */_Bool) 2561308654343890920ULL)) ? (((/* implicit */unsigned long long int) -526195665)) : (4349439963635836196ULL)))))));
        var_61 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    }
}
