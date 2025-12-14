/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7768
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) / (((/* implicit */int) var_5)))), (((/* implicit */int) var_9))))) * (var_8)));
    var_14 *= ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((long long int) min((((/* implicit */unsigned long long int) (unsigned short)31817)), (arr_2 [i_0])))) << (((((arr_0 [i_0]) & (arr_0 [i_0]))) + (9070597282420910112LL)))));
        var_16 *= ((/* implicit */unsigned short) max((((min((((/* implicit */long long int) var_9)), (arr_0 [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22176)) || (((/* implicit */_Bool) var_9)))))))), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
        var_17 ^= ((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [(unsigned short)16])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_1] [(unsigned short)8]), (arr_5 [i_1] [(signed char)12]))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_1] = (unsigned short)23463;
            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)127)) >= (((/* implicit */int) min((arr_3 [i_1] [i_2]), (min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_2]))))))));
        }
        for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            var_19 = var_12;
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_3 - 1] [i_1]))) & (((/* implicit */int) max((arr_12 [i_3 - 1] [i_3 - 3] [i_1]), (((/* implicit */unsigned short) arr_5 [i_1] [i_1])))))));
            arr_14 [(signed char)12] [i_3 - 1] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [(unsigned short)14] [i_3 - 2] [(unsigned short)14])) ? (((/* implicit */int) arr_12 [(unsigned short)2] [i_3 - 1] [(unsigned short)2])) : (((/* implicit */int) arr_12 [12ULL] [i_3 + 1] [12ULL])))), (((/* implicit */int) (unsigned short)37665))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_3 - 3] [i_1]), (arr_5 [i_3 + 1] [i_1])))) != (((/* implicit */int) min((arr_5 [i_3 - 3] [i_1]), (arr_5 [i_3 - 2] [i_1]))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_4 [i_3 - 3]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))) ^ (arr_7 [i_1])))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) min((arr_12 [i_1] [i_3 + 1] [i_1]), (max((arr_3 [i_1] [i_1]), (var_9))))))));
        }
        arr_15 [(unsigned short)8] |= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_5 [(unsigned short)6] [(unsigned short)6])) > (((/* implicit */int) arr_5 [i_1] [(unsigned short)14]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_20 [i_4] = min((arr_8 [i_5] [i_5] [i_5]), (min((arr_3 [i_4] [i_4]), (((/* implicit */unsigned short) arr_17 [i_4])))));
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4]))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_5] [i_6 - 1] [i_5])), (arr_22 [i_4] [i_6 + 1] [i_6 - 1])))) ? (min((arr_24 [i_4] [i_6 - 1] [i_4] [i_6 + 2] [i_7 + 2]), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6 + 1] [i_6 + 1])))) : (max((1252675795932353948ULL), (((/* implicit */unsigned long long int) var_5))))));
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_7 + 2] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_19 [i_4] [i_7 + 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [i_4] [i_6 + 3] [i_7 + 2]))))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_35 [i_4] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */unsigned short) (+(17194068277777197668ULL)));
                            var_24 = ((/* implicit */long long int) ((unsigned short) var_9));
                            var_25 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_4] [i_4])))) ? (((((/* implicit */int) arr_3 [i_4] [i_5])) - (((/* implicit */int) arr_3 [i_9] [i_5])))) : (((/* implicit */int) max((arr_3 [i_5] [i_5]), (arr_3 [i_4] [i_8]))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 4; i_11 < 16; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [16ULL])) << (((((/* implicit */int) arr_40 [(signed char)6])) - (11)))))) || (((/* implicit */_Bool) min((arr_37 [i_12 + 3]), (arr_37 [i_12 + 2]))))));
                arr_41 [i_4] [i_4] [i_4] [i_12 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_12 + 3])) <= (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) arr_16 [i_4] [i_4])), (arr_21 [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 1] [i_12 - 1])) % (((((/* implicit */_Bool) (unsigned short)5448)) ? (((/* implicit */int) arr_18 [i_4] [i_11 + 1] [i_12 + 3])) : (((/* implicit */int) (unsigned short)40795))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_12] [i_4])) + (((/* implicit */int) (signed char)-87))))) ? (15461674952069643051ULL) : (((/* implicit */unsigned long long int) ((arr_22 [i_4] [i_11 - 3] [i_11 - 3]) & (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4]))))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (max((((/* implicit */long long int) min((arr_34 [i_4] [i_4] [i_4] [8LL] [i_4] [i_12 + 1] [i_4]), (arr_8 [i_4] [i_4] [i_11 - 4])))), (min((5116185671104113900LL), (((/* implicit */long long int) arr_34 [i_12 + 3] [i_12 - 1] [i_12 + 1] [(signed char)8] [i_12 + 2] [i_12 + 1] [i_12 + 1]))))))));
            }
            for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_28 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_23 [i_4] [i_4] [i_4] [i_13]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11 - 2] [i_11 - 2])))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_4]))) : (((/* implicit */int) var_1))))) : (arr_33 [i_11 - 4] [i_11 - 4] [i_4]));
                arr_44 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_7 [i_4]) != (17194068277777197642ULL)))), (((unsigned long long int) arr_30 [i_4] [i_4] [i_4] [i_11 + 1] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11] [i_13]))) : ((+(((long long int) (unsigned short)49307))))));
            }
            /* LoopSeq 4 */
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11 - 1] [i_11 + 1] [i_4] [i_11 - 1])) ? (max((max((arr_7 [i_4]), (17194068277777197642ULL))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_39 [i_4] [i_14] [i_11 - 1] [i_4]))))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) arr_22 [i_4] [i_11 - 3] [i_4]))), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52714))) + (arr_22 [i_4] [i_11 + 1] [i_4]))), (((/* implicit */long long int) (unsigned short)36721)))))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_21 [i_4] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_4] [i_11 - 2] [i_4])))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_4] [i_4] [i_15]))) < (arr_33 [i_11 + 1] [i_11 + 1] [i_11 + 1]))))));
                arr_49 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) max((arr_45 [i_4]), (arr_45 [i_11])))), (((long long int) arr_45 [i_4]))));
            }
            for (signed char i_16 = 3; i_16 < 17; i_16 += 2) 
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_52 [i_11 + 2] [i_11 + 1] [i_16 + 1] [(unsigned short)2]), (arr_52 [i_11 - 4] [i_16 - 2] [i_16 - 3] [(unsigned short)16])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52889))) >= (-6399355066545163547LL)))), (min((-6162218243363585494LL), (arr_22 [i_4] [i_4] [i_4])))))) : (((((/* implicit */_Bool) arr_16 [i_16] [i_16 - 1])) ? (arr_21 [(signed char)6] [i_16 - 2]) : (((/* implicit */unsigned long long int) var_6)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_33 += ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17194068277777197668ULL)) && (((/* implicit */_Bool) var_4))))), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) 9223372036854775807LL)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))))))) : (max((arr_47 [i_11 - 4] [i_11 - 3] [i_17]), (arr_47 [i_11 - 2] [i_11 - 3] [i_17]))));
                    var_34 = ((/* implicit */unsigned short) max((1252675795932353964ULL), (((/* implicit */unsigned long long int) var_5))));
                }
            }
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                arr_60 [i_11] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_31 [i_4] [i_11 - 4] [i_4] [i_18] [i_11 + 1])), (((((/* implicit */_Bool) var_1)) ? (arr_22 [i_11 - 3] [i_11 + 2] [i_11 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38907)))))));
                arr_61 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_11 - 3] [i_4])), (((((/* implicit */int) arr_5 [i_11 + 2] [i_4])) & (((/* implicit */int) arr_5 [i_11 - 3] [i_4]))))));
                var_35 = ((/* implicit */unsigned short) (+(var_6)));
            }
            var_36 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [i_4] [i_4])), ((unsigned short)43726)))), (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4] [i_11 - 2] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_11 - 4]))) : (var_6))))));
        }
        arr_62 [i_4] = ((/* implicit */unsigned short) var_4);
        arr_63 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_4])) >= (((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_4]))))) / (((/* implicit */int) arr_5 [i_4] [i_4]))));
        var_37 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_9)) | (((/* implicit */int) arr_51 [i_4] [i_4])))), (((/* implicit */int) ((arr_33 [i_4] [i_4] [i_4]) <= (arr_33 [i_4] [i_4] [i_4]))))));
    }
}
