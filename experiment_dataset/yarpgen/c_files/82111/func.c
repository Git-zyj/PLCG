/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82111
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
    var_13 |= ((/* implicit */unsigned short) var_4);
    var_14 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)20942))) / (-1LL)))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20938)) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((int) (-(var_8)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 72057594037927935LL);
        var_16 = ((/* implicit */unsigned long long int) (~(min((arr_0 [i_0 + 1]), (((/* implicit */int) (short)-1058))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8358457879494413772ULL)) ? (((/* implicit */int) ((short) arr_5 [i_2]))) : ((-(((/* implicit */int) max(((short)-1058), ((short)-7891))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_13 [i_1] [i_2] = ((/* implicit */unsigned int) ((int) ((unsigned char) (unsigned char)67)));
                arr_14 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
                arr_15 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((((((/* implicit */_Bool) (short)-20936)) ? (18446744073709551615ULL) : (arr_10 [i_1] [i_2]))) - (((/* implicit */unsigned long long int) ((int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)38758)))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((unsigned long long int) -1LL)) >> (((/* implicit */int) ((_Bool) ((1573666561) - (((/* implicit */int) arr_5 [i_3]))))))));
                    arr_18 [i_2] [i_2] [(signed char)1] [i_4] = ((/* implicit */long long int) 281474976186368ULL);
                    arr_19 [i_1] [i_2] = ((/* implicit */signed char) -2923029477917982613LL);
                }
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_24 [i_5] [i_2] [i_2] [i_2] [10ULL] = ((/* implicit */int) var_6);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (short)1071))))), (-72057594037927925LL)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)21189))))) ? (var_1) : (17004865465499077005ULL)))));
                    var_20 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) min((((long long int) var_0)), (((/* implicit */long long int) ((((((/* implicit */int) arr_22 [i_5 - 2] [i_5] [i_5 + 1] [i_2])) + (2147483647))) >> (0ULL))))))) : (((/* implicit */unsigned short) min((((long long int) var_0)), (((/* implicit */long long int) ((((((((/* implicit */int) arr_22 [i_5 - 2] [i_5] [i_5 + 1] [i_2])) - (2147483647))) + (2147483647))) >> (0ULL)))))));
                    arr_25 [i_1] [i_2] [i_2] [i_5 - 1] = ((/* implicit */unsigned long long int) (unsigned short)50074);
                }
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_29 [i_2] [i_1] [i_2] = ((/* implicit */long long int) -1163471958);
                arr_30 [i_2] [(unsigned short)3] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) ((long long int) (unsigned short)65517))) ? (7ULL) : (18446744073709551607ULL)))));
                arr_31 [i_6] [i_2] [i_1] = ((/* implicit */unsigned long long int) 16777215);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */short) 7117572637807338965LL);
                            var_22 = ((/* implicit */signed char) (short)18549);
                            arr_40 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (short)21189)))));
                        }
                        arr_41 [i_2] [i_2] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_39 [i_1] [i_2] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_23 = ((signed char) ((signed char) arr_45 [(signed char)16] [i_10]));
            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (arr_8 [i_1] [i_10]))), (((/* implicit */long long int) -284405152))));
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) 284405151))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_26 = 134217724ULL;
                    arr_52 [i_10] [i_10] [4ULL] [i_10] |= ((/* implicit */unsigned short) ((long long int) (+(((unsigned int) arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    var_27 = ((long long int) ((unsigned short) max((arr_10 [i_1] [i_1]), (((/* implicit */unsigned long long int) 8742311272408401324LL)))));
                    /* LoopSeq 4 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-24))) ? (((long long int) max((((/* implicit */short) (unsigned char)102)), (arr_47 [10ULL] [i_11] [i_1])))) : (((((/* implicit */long long int) 1726511164U)) ^ (8277054957136786016LL)))));
                        var_29 = ((/* implicit */short) ((unsigned char) 7U));
                        arr_55 [i_10] |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) ((signed char) arr_1 [i_12] [i_10]))) >> (((17575006175232ULL) - (17575006175224ULL))))));
                    }
                    for (int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((_Bool) var_12))))) : (var_11)));
                        arr_59 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] [i_14] = ((/* implicit */unsigned short) ((unsigned int) arr_39 [i_1] [i_11] [8LL] [i_1] [i_1] [i_1] [11]));
                        var_31 = ((/* implicit */unsigned short) (short)20971);
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) ((unsigned char) (signed char)-63))))));
                        var_33 = ((/* implicit */unsigned long long int) var_7);
                        arr_62 [i_1] [i_12] [(unsigned short)16] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_10]))) ? (((/* implicit */unsigned int) ((int) var_2))) : (((unsigned int) (+(3780950524U))))));
                    }
                    for (int i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        arr_65 [i_1] [i_11] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_11])) ? (((unsigned long long int) -284405121)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20946))))))), (((/* implicit */unsigned long long int) ((int) ((2080414138408217791ULL) | (5730763612934765015ULL)))))));
                        var_34 ^= ((/* implicit */unsigned short) ((unsigned int) (-(var_7))));
                        arr_66 [i_11] [i_11] [i_11] [i_10] [i_1] [i_11] = ((/* implicit */unsigned short) 12ULL);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) (+((-(min((5730763612934765015ULL), (1276732982109262495ULL)))))));
                        var_36 = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                        var_37 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-32))))))));
                    }
                    for (long long int i_18 = 2; i_18 < 19; i_18 += 4) 
                    {
                        arr_72 [i_1] [i_1] [i_1] [i_11] [i_11] = ((/* implicit */unsigned short) max((3528916157428247121ULL), (((/* implicit */unsigned long long int) arr_2 [i_11] [i_11]))));
                        arr_73 [i_10] [i_10] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)1196)), (var_6)));
                    }
                    for (long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                    {
                        arr_76 [i_11] [i_11] [i_11] [i_19] = ((/* implicit */unsigned int) 3528916157428247118ULL);
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (-(arr_49 [i_19 + 2] [i_12] [i_12] [i_1]))))));
                        arr_77 [i_11] [i_11] [i_11] [(short)10] = arr_51 [i_1] [i_1] [5LL] [i_1] [i_19 - 1] [i_1];
                        arr_78 [i_12] [i_12] [i_12] [i_11] [i_12] = 31744ULL;
                    }
                }
            }
            for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
            {
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) 2097151LL))))))))));
                arr_81 [i_1] [i_20] [i_20] = ((/* implicit */unsigned short) (short)-20790);
                arr_82 [i_1] [i_1] [i_20] = ((/* implicit */int) ((unsigned char) ((unsigned short) -2097147LL)));
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) 514016761U))));
                var_41 = ((/* implicit */long long int) arr_61 [i_10] [i_10] [i_10]);
            }
        }
        var_42 = ((/* implicit */long long int) ((unsigned long long int) 834867010U));
    }
    for (signed char i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */long long int) (short)20786);
        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((_Bool) -9223372036854775798LL)))));
    }
    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        arr_88 [i_22] = ((/* implicit */unsigned short) ((unsigned int) 3460100298U));
        var_45 &= ((/* implicit */long long int) 514016772U);
    }
    var_46 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 514016772U)))) ? (var_4) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) var_3))))));
}
