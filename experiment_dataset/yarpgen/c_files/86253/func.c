/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86253
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [0U] [0U])) : (((/* implicit */int) arr_3 [i_0] [(_Bool)1]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_17 = ((arr_1 [i_0]) >= (((/* implicit */int) var_0)));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) ((unsigned int) arr_10 [i_0] [i_1] [i_0] [i_3]));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_5 [(unsigned short)2] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_1]))) : (((((/* implicit */_Bool) var_10)) ? (4775713019849602442LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1])))))));
                            var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_21 = ((/* implicit */long long int) arr_6 [i_2]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) ((arr_11 [i_0] [i_0]) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [9]))));
                            arr_17 [2U] [i_1] [i_0] [2ULL] [i_3] [i_0] = ((/* implicit */unsigned int) (-(18446744073709551615ULL)));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_1 [i_3])) & (arr_8 [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_22 [i_0] [(signed char)6] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_1] [8U] [i_1] [i_3] [i_6]) << (((arr_1 [i_3]) + (1580969924)))))) || (((/* implicit */_Bool) -5769406284088381254LL))));
                        }
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_2] [i_3] [i_7 - 3] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_26 [i_1] [i_2] [i_0] [i_7 + 1] = ((/* implicit */int) ((999313818U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_7 - 1] [i_0] [i_7 - 3])))));
                            var_24 ^= ((/* implicit */unsigned char) ((unsigned int) arr_24 [(signed char)4] [i_1] [i_3] [(unsigned short)8] [i_7 - 2]));
                            arr_27 [i_0] [(unsigned char)6] [6ULL] = ((/* implicit */unsigned short) var_4);
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) 14246367338775993082ULL);
                            var_25 = ((/* implicit */_Bool) ((3427039026311002327LL) ^ (arr_20 [i_0] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                            var_26 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 692345470)) ? (-3427039026311002330LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8] [i_2] [i_2] [i_1] [i_0] [i_0]))))));
                            var_27 |= ((/* implicit */signed char) ((unsigned int) arr_29 [(unsigned char)0] [(unsigned char)0] [i_1] [i_8 + 1] [(unsigned short)2] [(unsigned char)0]));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_9] [(signed char)0] [i_0] = ((/* implicit */short) 3427039026311002315LL);
                            arr_34 [i_1] [i_0] [8LL] [i_2] [i_0] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) -1882326827)) / (arr_31 [i_0] [i_9 + 1] [i_2] [8ULL] [(unsigned char)0])));
                            var_28 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1183398086U)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_37 [7] [7] [i_2] [7] [i_0] [(unsigned short)5] = ((/* implicit */_Bool) var_4);
                            arr_38 [i_0] [i_0] [i_2] [i_3] [4U] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9955)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) : (3427039026311002315LL))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_29 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11] [8LL] [i_11]))) : (arr_20 [i_0] [i_1] [i_3] [i_11]));
                            arr_41 [i_0] [i_1] [(_Bool)1] [i_0] [1ULL] [i_11] = ((/* implicit */_Bool) ((arr_29 [i_0] [5ULL] [i_0] [i_3] [i_3] [i_0]) << (((((((/* implicit */_Bool) var_10)) ? (arr_21 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_3] [i_3] [7LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) - (491717925U)))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (long long int i_13 = 3; i_13 < 6; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((unsigned char) var_12)))));
                        arr_49 [i_0] [i_0] [i_13 + 4] [i_14] = arr_5 [i_13 - 2] [i_13] [i_0];
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) arr_14 [i_0] [i_12] [i_13] [i_0] [i_13 - 3] [i_14] [i_14]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) var_3);
                            arr_53 [i_0] [(unsigned short)7] [i_0] = ((/* implicit */unsigned char) var_12);
                        }
                        for (long long int i_16 = 1; i_16 < 8; i_16 += 4) 
                        {
                            arr_57 [i_16 + 2] [i_0] [(_Bool)1] [i_13] [i_12] [i_0] [i_0] = var_4;
                            arr_58 [0U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                            arr_59 [(short)4] [(short)4] [(short)4] [i_0] [(unsigned char)0] [i_12] [(short)4] = ((/* implicit */unsigned char) var_14);
                            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_32 [i_13 - 1] [i_16] [(unsigned short)4] [i_13 - 1])) : (((/* implicit */int) arr_32 [i_16 + 1] [i_14] [i_14] [i_13 + 3]))));
                            arr_60 [i_0] [i_0] [i_0] [i_14] [i_16] = (+(((/* implicit */int) arr_51 [i_13 - 1] [i_13 - 1] [(_Bool)1] [4ULL] [i_13 - 3] [i_13 - 3] [i_13])));
                        }
                        for (unsigned int i_17 = 3; i_17 < 9; i_17 += 4) 
                        {
                            arr_65 [i_17 - 3] [i_0] [8LL] [8LL] [i_17] [i_0] = ((/* implicit */_Bool) var_9);
                            var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_14] [i_12] [(_Bool)1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10620)))));
                        }
                    }
                } 
            } 
        } 
        arr_66 [i_0] [i_0] = ((/* implicit */short) (!((_Bool)1)));
        arr_67 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) >= (var_7))) ? (arr_21 [i_0] [i_0] [(unsigned short)6] [i_0] [i_0] [(unsigned short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3427039026311002327LL))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_69 [i_18])) == (((/* implicit */int) (signed char)112)))) ? (((unsigned int) ((arr_68 [i_18]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64396)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_18])))));
        arr_70 [i_18] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) -1602591404678871988LL))) || (((/* implicit */_Bool) (+(arr_68 [i_18]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)-106)) + (106)))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32134)) - (((/* implicit */int) arr_69 [i_18])))))))));
        var_36 = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 3) 
    {
        var_37 = var_8;
        arr_73 [i_19] [i_19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_72 [i_19])), (((arr_71 [i_19]) | (((/* implicit */unsigned long long int) arr_72 [i_19]))))));
    }
    var_38 |= ((/* implicit */short) var_8);
    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) var_5))));
    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) var_14)), ((-(var_8)))))));
    var_41 = ((/* implicit */short) var_12);
}
