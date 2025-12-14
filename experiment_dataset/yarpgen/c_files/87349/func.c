/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87349
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [12LL] &= ((/* implicit */unsigned short) arr_8 [(unsigned char)10]);
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */int) (unsigned short)61739)) / (((/* implicit */int) (unsigned short)61739)))))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_11 -= (((_Bool)1) ? (((/* implicit */int) (unsigned short)61759)) : (((/* implicit */int) (_Bool)1)));
        var_12 = ((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_3])), (((((/* implicit */int) arr_2 [i_3])) % (((/* implicit */int) arr_2 [i_3]))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_26 [4] [i_6] [i_7] [i_7]);
                            arr_29 [(unsigned char)3] [i_5] [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5])))))) / (max((((/* implicit */unsigned int) var_6)), (2107020767U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (max((((((/* implicit */_Bool) (unsigned short)61739)) ? (7802931498419214435LL) : (((/* implicit */long long int) 2107020767U)))), (((/* implicit */long long int) ((_Bool) 9223372036854775803LL)))))));
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_20 [i_5] [i_8 - 1] [i_5]), (arr_20 [i_5] [i_8 - 1] [5U]))))));
                            arr_30 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) max((2107020767U), (((/* implicit */unsigned int) min((var_3), (((/* implicit */short) arr_9 [i_4] [i_4] [i_4])))))))), (min((((((/* implicit */_Bool) (signed char)112)) ? (arr_21 [i_5] [(signed char)3] [i_6]) : (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) ((2147483629) > (((/* implicit */int) (signed char)-15)))))))));
                        }
                    } 
                } 
            } 
            var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_4] [i_5]) >= (arr_22 [i_4] [8U] [i_5] [i_5 - 1]))))) % (((((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)13])) ? (arr_17 [(signed char)16] [i_5 + 2]) : (arr_22 [i_5 + 4] [(signed char)6] [i_5] [i_5 + 4])))));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_33 [i_9] = ((/* implicit */short) min((-832590433), (-63773883)));
            /* LoopSeq 3 */
            for (short i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 - 2] [i_9] [i_9])) ? (arr_5 [i_10 + 1] [i_9] [i_9]) : (arr_5 [i_10 + 1] [7U] [i_9]))))));
                arr_36 [i_9] [i_10] [12] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)24826)) ? (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2327)))));
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    arr_40 [i_4] [i_9] = ((/* implicit */unsigned long long int) ((long long int) 2147483629));
                    arr_41 [i_4] [i_9] [i_9] [i_10 + 1] [22LL] = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)11), ((unsigned short)11)))) % (((/* implicit */int) max((arr_20 [i_9] [3LL] [i_4]), (((/* implicit */unsigned short) (_Bool)0)))))));
                }
            }
            for (short i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
            {
                var_17 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 5199512704138956188ULL)) ? (2187946556U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (2105458749507504997LL)));
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_18 = 5058911904840517044LL;
                    var_19 = arr_20 [i_9] [i_13] [i_13];
                    arr_48 [14] [i_9] [i_9] [i_4] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_5)))));
                }
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    arr_53 [i_9] [i_9] [i_9] [(signed char)21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_4] [(short)17] [i_4])) ? (((((/* implicit */_Bool) min((arr_52 [i_9] [(_Bool)1]), (arr_50 [i_9])))) ? (2107020734U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_37 [i_14] [21ULL] [i_14] [(signed char)4]), (arr_23 [i_4] [i_9] [8ULL] [i_9]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((-5058911904840517045LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) % (var_7))))));
                    arr_54 [(signed char)20] [i_9] [(unsigned short)16] [i_14] [i_14] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)8901)), (((((/* implicit */_Bool) ((int) (signed char)-106))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (5199512704138956169ULL)))));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        var_20 = ((/* implicit */int) arr_23 [i_4] [i_9] [i_9] [i_12 + 2]);
                        arr_57 [i_9] [i_9] [i_9] [13LL] [i_9] [13ULL] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) 5058911904840517048LL))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 21; i_16 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_58 [i_9] [i_14] [(unsigned short)18] [i_14]))));
                        var_22 *= ((/* implicit */unsigned long long int) ((arr_28 [i_16] [16LL] [i_16] [i_16] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_9] [(unsigned char)12] [i_16 + 1] [i_14]))) : (var_0)));
                    }
                    for (unsigned short i_17 = 3; i_17 < 22; i_17 += 1) 
                    {
                        arr_64 [i_17] [i_9] [i_14] [i_12] [i_9] [i_9] [(unsigned short)9] = ((/* implicit */short) (signed char)-30);
                        arr_65 [i_14] [14ULL] [i_14] [21U] [i_14] [i_14] [i_9] = ((/* implicit */unsigned long long int) var_6);
                        arr_66 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_9] [(short)5] = ((/* implicit */signed char) max((((/* implicit */short) arr_60 [i_17 - 3] [i_9] [2] [4U] [i_17])), (((short) arr_27 [i_12 - 2] [i_4] [i_12] [i_14] [i_17 - 3] [i_17 - 2]))));
                        arr_67 [(unsigned short)16] [i_9] = ((/* implicit */unsigned short) arr_31 [(_Bool)1]);
                    }
                    arr_68 [i_4] [(_Bool)1] [i_9] [i_9] [i_14] = ((/* implicit */long long int) ((signed char) arr_15 [(signed char)12]));
                }
            }
            for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 1) 
            {
                arr_71 [i_4] [i_4] [i_9] = ((/* implicit */unsigned char) var_9);
                arr_72 [i_9] [(unsigned short)17] [17LL] [15LL] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) / (8ULL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_19 = 4; i_19 < 22; i_19 += 4) 
                {
                    arr_75 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5199512704138956188ULL)) ? (((/* implicit */int) arr_69 [i_9] [i_18 - 1] [i_18 + 2])) : (((/* implicit */int) arr_69 [i_9] [i_18 - 1] [i_18 + 1]))));
                    arr_76 [(unsigned short)15] [i_9] [(signed char)10] [i_4] [14LL] [i_4] = ((/* implicit */unsigned char) ((arr_28 [5LL] [i_18 - 1] [18U] [(unsigned short)0] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_18] [i_18 + 1] [(unsigned short)8] [i_18 - 2] [i_9]))) : (arr_0 [i_4] [i_19 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        arr_80 [i_9] [i_19 - 1] [i_19 + 1] [9LL] [i_18] [i_9] [i_9] = ((/* implicit */unsigned short) ((((5199512704138956211ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_4] [i_18] [i_19 - 4])))));
                        var_23 -= ((/* implicit */long long int) var_3);
                    }
                }
            }
        }
        for (int i_21 = 2; i_21 < 21; i_21 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)58908)) : (2147483647)))))) ? (((((/* implicit */_Bool) (unsigned short)24948)) ? (((((/* implicit */_Bool) arr_49 [i_21] [i_21 - 1] [i_4] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) arr_39 [1LL])) : (arr_5 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) arr_46 [i_4] [i_21] [i_4] [i_21] [i_21] [(short)16])))) : (((/* implicit */unsigned long long int) ((int) ((var_1) << (((((/* implicit */int) arr_3 [i_21])) - (40166)))))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) max((arr_61 [i_21 + 2] [11ULL] [i_21 + 1]), (((/* implicit */unsigned short) arr_24 [(unsigned short)0] [i_21] [i_21] [i_21 - 1]))))))))));
            arr_84 [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_47 [i_21 + 1] [i_21 + 2] [i_21 - 2] [(short)13])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (9223372036854775807LL)))));
        }
        arr_85 [i_4] [i_4] = ((/* implicit */long long int) 16524240415043045671ULL);
    }
    var_26 = ((/* implicit */short) var_4);
}
