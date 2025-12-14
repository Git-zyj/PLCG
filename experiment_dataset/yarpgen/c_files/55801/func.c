/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55801
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_0 [i_0]))) / (var_3)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775793LL))))), (max((var_12), (((/* implicit */unsigned long long int) var_2))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
            {
                var_18 *= ((/* implicit */signed char) (-(9223372036854775793LL)));
                var_19 = ((/* implicit */unsigned short) (+(arr_2 [i_0])));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((int) arr_1 [i_0]));
            }
            for (int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_17 [i_4] [i_4] [i_3] [i_0] [(unsigned char)11] [i_0] = ((/* implicit */long long int) arr_6 [i_4] [i_3]);
                    arr_18 [i_0] [(signed char)10] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_0])) ? (((long long int) (signed char)-14)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))));
                    arr_19 [i_0] [i_0] [i_3] [i_4] |= ((/* implicit */unsigned int) arr_9 [i_0] [0] [i_3] [i_4]);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_8 [i_4] [i_3] [i_0]))));
                    var_21 = ((/* implicit */int) var_11);
                }
                for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                    arr_24 [(signed char)9] [i_1] [(unsigned char)7] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) arr_3 [i_5 + 1]))), (max((-9223372036854775794LL), (((/* implicit */long long int) arr_21 [i_1] [i_1] [i_5 - 1] [i_5 - 1]))))));
                    arr_25 [4LL] [i_0] [4LL] [i_0] = ((/* implicit */int) arr_4 [i_5 + 1]);
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((signed char) ((short) 9223372036854775793LL))));
                }
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3]))) ^ (4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_0] [i_0] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_1] [i_3])))))));
                arr_27 [i_0] = ((/* implicit */unsigned int) var_12);
                var_24 = ((/* implicit */int) ((((unsigned long long int) ((_Bool) arr_13 [i_0] [i_0] [i_1] [i_3] [i_3]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)98))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_3])) ^ (((/* implicit */int) arr_4 [i_3]))))))))));
            }
            arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_0] [9])) ? (-2072770229207188076LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) != (685677095575090586ULL)))), (arr_8 [i_0] [i_1] [i_1])))))));
        }
        arr_29 [(unsigned char)6] = (-(var_0));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
            {
                arr_35 [i_0] = ((/* implicit */short) arr_21 [i_0] [i_0] [i_0] [8]);
                arr_36 [3] [i_6] [3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775793LL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7168)))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)82)), ((unsigned short)24502))))))) == (arr_3 [i_6])));
            }
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    arr_41 [i_0] [i_6] [12] [7U] [(unsigned char)0] = ((((/* implicit */_Bool) ((unsigned short) arr_37 [i_0] [i_6] [i_8] [i_9]))) ? (((/* implicit */int) ((short) arr_21 [1U] [15U] [16ULL] [i_9]))) : (var_13));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_2 [i_8]))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [7U] [i_6])) || (((/* implicit */_Bool) var_10)))))));
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_7)))));
                    var_29 = ((/* implicit */unsigned short) 1U);
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) var_11);
                    var_31 = ((/* implicit */unsigned short) var_9);
                    arr_45 [i_0] [i_6] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 11U)) : (((((/* implicit */_Bool) (unsigned char)40)) ? (14281823562788792744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34376))))) ? ((-(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)98))))));
                }
                arr_46 [i_0] [i_6] [i_6] [i_8] = ((unsigned int) ((int) -2147483628));
            }
            arr_47 [i_0] [7U] [(unsigned char)0] = ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0])))) >= (((/* implicit */int) var_8)));
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)98)) ? (1152917106560335872LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
            arr_50 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) + (min((-1152917106560335873LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_11] [i_11] [i_11]))) ^ (2261058135U))))))));
            arr_51 [i_0] [(unsigned char)13] [i_0] = ((/* implicit */_Bool) var_8);
        }
    }
    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_12 - 1] [i_12 - 1])) - ((~(((/* implicit */int) arr_53 [(unsigned short)17] [i_12 + 1]))))));
        var_35 = ((/* implicit */_Bool) arr_53 [i_12 - 1] [i_12 - 1]);
    }
    var_36 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -3772934529691766872LL)))) : (min((2033909151U), (((/* implicit */unsigned int) (unsigned char)120))))))));
    var_37 = ((/* implicit */unsigned short) (+(((unsigned int) min((1152921504606846976ULL), (((/* implicit */unsigned long long int) (unsigned short)60337)))))));
    var_38 = ((/* implicit */unsigned short) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
