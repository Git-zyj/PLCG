/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88463
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
    var_20 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) (signed char)-66))), (var_15)))) ? (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_5))) : (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51617)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170)))))) ? (-288324097) : (((/* implicit */int) ((unsigned char) 2114023455)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)115)) & (((/* implicit */int) (unsigned short)11043))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)36282)) * (0))) - (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_13))) || (((/* implicit */_Bool) ((long long int) arr_1 [i_0]))))))));
                arr_5 [i_0] = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)63186)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23884))) : (15053001959637137581ULL)));
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_24 += ((/* implicit */_Bool) arr_1 [i_2]);
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
        arr_9 [(unsigned char)8] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_19 [i_5] [(unsigned short)10] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1460434894)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))));
                        var_25 = ((/* implicit */unsigned char) arr_0 [i_3] [i_3 + 1]);
                    }
                } 
            } 
            arr_20 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */_Bool) ((arr_18 [i_3] [i_3]) << (((((((/* implicit */_Bool) -1330157179)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3]))) : (arr_18 [i_3] [i_3]))) - (12721U)))))) : (((/* implicit */_Bool) ((arr_18 [i_3] [i_3]) << (((((((((/* implicit */_Bool) -1330157179)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3]))) : (arr_18 [i_3] [i_3]))) - (12721U))) - (4294957777U))))));
            arr_21 [i_2] [i_3] = ((/* implicit */unsigned short) (~((~(1460434894)))));
            arr_22 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-110)))) << (((((/* implicit */int) arr_16 [i_3] [i_3] [i_3 + 1] [i_3])) + (13290)))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [19ULL])) && (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && (((/* implicit */_Bool) arr_7 [i_2] [14LL]))))));
    }
    for (unsigned short i_6 = 2; i_6 < 24; i_6 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            arr_31 [i_6 - 2] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) arr_26 [13U]));
            var_27 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_26 [i_7]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_6 - 2] [i_7 + 2])), (var_13)))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_23 [i_6] [i_7])) && (arr_30 [i_7]))), ((!(((/* implicit */_Bool) -1460434889)))))))));
            arr_32 [(_Bool)1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_24 [3])) > (((/* implicit */int) (signed char)101)))))))) ? (((((0) >= (((/* implicit */int) (unsigned char)7)))) ? (((((/* implicit */_Bool) (unsigned short)37945)) ? (((/* implicit */int) (short)21441)) : (-1))) : (((/* implicit */int) arr_27 [i_6] [i_7 + 2])))) : (((/* implicit */int) ((unsigned short) ((((((/* implicit */int) arr_26 [i_6])) + (2147483647))) >> (((((/* implicit */int) arr_29 [i_7] [i_6])) - (189)))))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_35 [i_8] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [(_Bool)1])) ? (((/* implicit */int) arr_29 [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_29 [i_6] [i_6 - 1]))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_6 - 1])))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_26 [i_6 - 1])) : (((/* implicit */int) arr_26 [i_6 + 1])))))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 3; i_10 < 23; i_10 += 4) 
                {
                    arr_40 [i_8] [5] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((arr_23 [i_10 + 2] [(unsigned char)0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_28 [i_6] [i_8])))))));
                    arr_41 [i_8] [i_10] = ((/* implicit */short) arr_39 [i_10] [i_9] [i_8] [i_6]);
                    arr_42 [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_9] [i_10 + 2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6]))) - (arr_37 [i_6] [i_8] [i_9] [i_8])))));
                    arr_43 [i_10 - 3] [i_8] [i_9] [i_8] [i_6] = ((/* implicit */unsigned char) ((unsigned int) -1));
                }
                arr_44 [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((0U) < (((/* implicit */unsigned int) 0))));
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((min((arr_39 [(unsigned char)1] [i_6] [i_6] [i_6]), (var_15))), (((/* implicit */long long int) arr_33 [i_6])))))));
            arr_47 [i_6] [(unsigned short)20] = ((/* implicit */unsigned int) min((min((134217696), (327445808))), (((/* implicit */int) (unsigned short)0))));
        }
        var_31 = ((/* implicit */signed char) arr_37 [i_6] [18] [i_6] [i_6]);
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_38 [17]))) == (arr_23 [i_6] [(_Bool)1])))) : (((((/* implicit */int) arr_36 [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 2])) << (((/* implicit */int) arr_36 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2]))))));
    }
}
