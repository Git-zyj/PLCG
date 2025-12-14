/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81337
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (min((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) var_1))))));
    var_18 = ((/* implicit */int) 13599565283612157044ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_14)), (var_16))))), (((/* implicit */long long int) ((_Bool) var_9)))));
            var_20 = ((/* implicit */short) var_11);
            arr_4 [i_0 - 1] [i_1] = ((/* implicit */signed char) var_5);
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))))));
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((long long int) arr_3 [i_0 - 2])) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_2] [(short)15]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0 + 1]) : (arr_5 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) arr_0 [(short)14])) ? (max((428368640U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8446276394336376278LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))))));
            var_24 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (arr_6 [(short)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (18446744073709551615ULL)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    var_25 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_10))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)9)))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((var_11) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_3 + 1]))))))));
                }
                for (short i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_3 + 1] [i_4] [13LL] [(unsigned char)0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_12)))));
                    var_27 += ((arr_11 [i_0 - 2] [17] [i_4 - 3] [i_6 - 2] [i_3 + 2] [i_4 - 3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                }
                for (short i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    arr_18 [i_4] [5U] [i_4 - 2] [i_4 - 2] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)9))) + (var_7))) >> (((((var_2) ^ (((/* implicit */int) var_3)))) + (15929369)))));
                    var_28 = (-(((/* implicit */int) var_10)));
                    arr_19 [(unsigned short)10] [i_3] [i_3 - 1] [7U] [(unsigned short)18] [i_4] = ((/* implicit */unsigned int) ((17ULL) >> (((/* implicit */int) (short)0))));
                }
                for (short i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_29 &= (-(arr_23 [i_0 + 1] [i_3 + 2] [i_4 + 1] [(_Bool)1]));
                        arr_24 [i_0 - 1] [i_4] = ((/* implicit */short) ((int) 18446744073709551615ULL));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(signed char)0] [i_0 + 1] [i_3] [i_3 + 2] [i_4 - 2] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_3] [3LL] [i_9])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)9)))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_28 [i_3 + 2] [i_4] [i_3] [i_8 - 1] [i_10] [i_3 + 1] [(short)15] = ((/* implicit */signed char) arr_25 [i_4] [i_3 + 2] [i_4 - 2]);
                        arr_29 [1U] [i_3 + 1] [(signed char)3] [i_8 - 2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_4] [i_8] [i_10] [i_4])) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((short) (signed char)122)))));
                        arr_30 [i_3] [i_4] [i_0] [i_8 - 2] [i_3 - 1] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (var_16)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-6))));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_34 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_4] [i_0 + 2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                        var_31 *= ((/* implicit */short) ((arr_13 [i_8 + 2] [i_3 + 2] [i_0] [i_4 - 2]) ? (((/* implicit */int) arr_13 [i_8 - 1] [i_3 - 1] [19] [i_4 - 1])) : (((/* implicit */int) arr_13 [i_8 - 1] [i_3 + 2] [i_4 + 2] [i_4 - 3]))));
                    }
                    arr_35 [i_0] [i_0] [i_4] [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (var_2)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
                var_32 += ((/* implicit */unsigned char) ((unsigned short) arr_17 [i_4] [i_3 + 1] [i_3 + 1] [i_4 - 3] [i_3 + 1]));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_31 [i_0 - 1] [i_4] [i_3] [i_3 + 1] [i_4 - 2]))));
                    arr_40 [i_0] [i_0] [i_3 - 1] [i_4] [i_12] = ((((/* implicit */int) ((var_14) || (((/* implicit */_Bool) var_5))))) % (((/* implicit */int) var_6)));
                }
                var_34 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_3 + 1] [i_0])) == (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) arr_37 [i_3]))))));
            }
            for (unsigned char i_13 = 3; i_13 < 18; i_13 += 1) /* same iter space */
            {
                arr_43 [11U] [11U] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                var_35 += ((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) arr_21 [18U] [i_3 + 2] [i_3 + 2] [9LL] [i_13]))) ? (((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */long long int) arr_33 [i_0 + 1] [i_3] [i_3] [i_0 + 3] [i_0])))), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) arr_36 [i_0 + 1] [i_3 + 1] [i_13 + 1])), (var_8)))))));
                arr_44 [i_0] [i_3 - 1] [i_13] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) -143343326)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_13])) ^ (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 2] [(signed char)15]))) : (min((var_12), (((/* implicit */unsigned long long int) arr_8 [18])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (arr_9 [i_13 - 2] [i_3])))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_13 - 1] [i_3])))))));
                var_36 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
                arr_45 [i_0] [i_3] [i_13] = ((/* implicit */unsigned long long int) var_8);
            }
            for (unsigned char i_14 = 3; i_14 < 18; i_14 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */_Bool) ((((arr_14 [i_3 - 1] [16]) >> (((arr_14 [i_3 + 1] [(_Bool)1]) - (2013738281))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                var_38 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_14 + 2] [i_14 - 2] [i_14 - 1] [(signed char)0]) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))))) & (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_23 [i_0 - 2] [i_3 + 2] [(signed char)14] [(unsigned short)12])))));
            }
        }
        arr_48 [i_0 + 2] = ((/* implicit */_Bool) var_16);
        var_39 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_5)) ? (-1094482150) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_8) <= (((/* implicit */long long int) arr_14 [6] [6])))))))));
    }
    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */long long int) 1064134932)), (((((/* implicit */_Bool) (short)0)) ? (var_16) : (((/* implicit */long long int) var_2)))))))))));
}
