/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69870
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((long long int) (signed char)-68));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)13785))));
            var_13 = var_0;
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-54)) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_9 [i_0] [2ULL] [i_2])) : (((/* implicit */int) (short)-32744))));
            var_16 &= ((((/* implicit */int) (unsigned char)28)) & (((/* implicit */int) (signed char)-1)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 0LL);
            arr_13 [i_0] [i_3] [i_3] = ((long long int) (unsigned short)48694);
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_17 = ((/* implicit */short) var_6);
                var_18 = ((/* implicit */unsigned int) 1885189892);
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_23 [i_3] [i_3] [(unsigned short)1] [(_Bool)0] = ((/* implicit */int) -3358303722439373298LL);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) arr_8 [i_6] [i_3])) : (var_1)));
                }
                for (int i_7 = 3; i_7 < 10; i_7 += 4) 
                {
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) (signed char)14))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) arr_1 [i_3] [i_5])) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_0] [i_3])))));
                    arr_28 [i_3] = (~(((/* implicit */int) (short)22499)));
                    arr_29 [i_0] [i_3] = ((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (arr_7 [i_5] [i_7 - 2]) : (var_5));
                }
                arr_30 [i_3] [i_5] = ((/* implicit */unsigned int) var_3);
                arr_31 [i_3] [2LL] [i_5] [i_0] |= ((((/* implicit */_Bool) arr_1 [1U] [i_3])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
            }
            for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
            {
                var_22 -= ((/* implicit */unsigned char) var_11);
                arr_35 [(_Bool)1] [i_3] [i_8] [i_8] = ((/* implicit */unsigned short) (unsigned char)244);
            }
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                arr_38 [i_3] [4] [i_9] = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_0] [i_3] [i_9]))));
                var_23 = ((/* implicit */unsigned char) var_6);
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)22506))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
                        {
                            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (5LL) : (21LL)));
                            arr_49 [i_3] [i_3] [i_10] [6U] [i_10] [i_11] [6U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0))))) - (((arr_45 [i_10]) * (-1LL)))));
                            var_26 -= ((/* implicit */unsigned short) (_Bool)1);
                            arr_50 [(unsigned short)2] [i_3] [i_3] [(_Bool)0] [(unsigned short)2] [i_11] [i_12] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_7)))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (15) : (((/* implicit */int) (short)22520)))))))));
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-20557))))) : (8LL)));
                        var_29 = ((/* implicit */unsigned short) (signed char)123);
                        var_30 = ((/* implicit */unsigned long long int) ((int) 5LL));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            arr_53 [(short)3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_13]))))) < (((((/* implicit */_Bool) (signed char)48)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_13] [i_13])))))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_4))));
                arr_56 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_0] [i_14])));
                arr_57 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_39 [i_14] [i_14])));
            }
            for (unsigned char i_15 = 1; i_15 < 7; i_15 += 3) 
            {
                var_32 = ((/* implicit */long long int) var_4);
                arr_60 [i_0] [i_15] [7U] [i_15] = ((/* implicit */long long int) (-(-1885189871)));
                /* LoopSeq 4 */
                for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        arr_65 [i_13] [i_0] [(unsigned short)9] [(_Bool)1] [i_15] [i_15] [i_15] = ((/* implicit */short) (_Bool)0);
                        arr_66 [i_17] [i_17] [(signed char)8] [i_16] [i_17] &= ((/* implicit */long long int) ((((/* implicit */int) arr_59 [i_15 + 3] [i_15 + 1] [i_15 + 2])) & (((/* implicit */int) ((-1877752667411133872LL) <= (((/* implicit */long long int) (-2147483647 - 1))))))));
                    }
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        arr_70 [i_0] [i_0] [i_15] [i_0] [i_18] = ((/* implicit */int) ((unsigned int) arr_52 [(unsigned char)1] [i_15 - 1] [(short)5]));
                        arr_71 [i_15] [i_16] [i_15] [i_13] [i_15] = var_10;
                    }
                    arr_72 [i_15] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)3413))));
                }
                for (unsigned short i_19 = 2; i_19 < 10; i_19 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_20 = 2; i_20 < 10; i_20 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27180))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16268)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        arr_78 [i_13] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)246);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) arr_67 [i_15] [i_15 + 1] [i_15 + 3] [i_15] [i_15 - 1] [i_21] [i_21])) <= (((/* implicit */int) (unsigned short)65535)))))));
                        var_35 -= ((/* implicit */short) ((arr_11 [i_13] [i_19]) & (((/* implicit */long long int) (-(((/* implicit */int) (short)16664)))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) ^ (((((/* implicit */_Bool) arr_81 [i_0] [i_15] [i_0] [2] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_37 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                        arr_85 [i_15] [i_15] [i_15] [(unsigned short)10] [8ULL] = arr_36 [(unsigned short)5] [i_13] [i_15 + 2] [9U];
                        var_38 = ((/* implicit */long long int) (-2147483647 - 1));
                    }
                    var_39 = ((/* implicit */long long int) max((var_39), (((((long long int) arr_79 [(_Bool)1] [(_Bool)1] [i_15] [(_Bool)1])) / (((/* implicit */long long int) (~(var_0))))))));
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    arr_90 [i_0] [i_13] [i_15] = ((/* implicit */short) -600616013);
                    var_40 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                }
                for (int i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    arr_94 [i_15] [9ULL] [i_15] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-20414)) : (-602929189)));
                    arr_95 [i_0] [i_0] [i_0] [i_15] [i_15] = ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_15]);
                    var_41 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_96 [i_0] [i_15] [10LL] [i_0] = ((/* implicit */unsigned short) arr_41 [i_0] [i_13] [i_15] [i_24]);
                }
            }
        }
        var_42 = ((long long int) arr_20 [i_0] [i_0] [7LL] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 19; i_25 += 4) 
    {
        for (int i_26 = 0; i_26 < 19; i_26 += 3) 
        {
            {
                arr_103 [i_25] [i_25] [i_25] = ((/* implicit */short) arr_99 [i_25] [i_25]);
                var_43 -= ((/* implicit */_Bool) var_5);
                var_44 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) (short)27188)) ? (711149137) : (((/* implicit */int) (unsigned short)14))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 3) 
                {
                    arr_108 [i_25] [i_26] [i_27 + 1] = (~(-491974751));
                    var_45 = ((unsigned short) arr_102 [i_25] [i_26] [i_27]);
                }
            }
        } 
    } 
}
