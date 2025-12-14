/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99600
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
    var_14 = ((/* implicit */int) 6163901272158614176LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (29U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            var_16 = 4294967243U;
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                arr_7 [i_1] [i_1] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_6));
                var_17 += ((/* implicit */int) ((unsigned char) 48U));
            }
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) 14241492952322036167ULL);
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            }
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 244552541106376ULL))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
        {
            var_21 |= ((/* implicit */long long int) ((int) (unsigned char)25));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)59334))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59334)) / (var_0)))) : (902429631U)));
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (4294967272U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59334)))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5 - 2] [i_5 - 1] [i_5 - 1])) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5 - 2] [i_5 - 2])))));
            arr_14 [i_0] = ((/* implicit */short) 4294965248LL);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19; i_6 += 3) 
    {
        arr_19 [0] [0U] = ((/* implicit */_Bool) (unsigned char)0);
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_22 [i_7] [i_7] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 + 4]))) | (9U));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                var_25 |= ((/* implicit */int) ((arr_4 [i_6 + 1] [i_6 - 1] [i_6 + 3]) > (var_10)));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_0 [i_6 + 3])) : (((/* implicit */int) arr_0 [i_6 + 1]))));
            }
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)4668)) : (-2010040347)));
                    arr_30 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */unsigned int) ((long long int) 0U));
                }
                for (int i_11 = 4; i_11 < 22; i_11 += 2) 
                {
                    var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3611805961U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (6569610334111817184LL)))) ? (3136373357318482916ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    var_29 = ((/* implicit */short) ((4294967295U) / (((((/* implicit */_Bool) (signed char)-94)) ? (36U) : (36U)))));
                }
                for (int i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    var_30 *= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_9])) / (((/* implicit */int) arr_34 [i_6 + 1] [(signed char)14] [i_6 + 3] [i_6]))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_4 [i_6] [i_6] [i_9]))));
                }
                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4155027736U)) / (((((/* implicit */_Bool) arr_20 [i_6] [i_7] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (0ULL)))));
            }
            for (int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                var_33 = ((/* implicit */signed char) 4294967265U);
                var_34 = ((((/* implicit */int) arr_38 [i_6] [i_7])) / (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) var_3)) : (var_0))));
            }
            arr_42 [i_7] = ((/* implicit */unsigned int) var_13);
            var_35 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_11))));
        }
    }
    var_36 = ((/* implicit */int) var_12);
    var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (min((((((/* implicit */_Bool) 42U)) ? (1397338659772342082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))), (((/* implicit */unsigned long long int) ((unsigned char) 0U)))))));
}
