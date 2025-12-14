/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9301
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
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_9)))));
    var_21 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)247);
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) arr_3 [i_0])) != (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            arr_8 [i_1] = (unsigned char)5;
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((((/* implicit */int) arr_1 [i_1])) & ((+(((/* implicit */int) (unsigned char)250)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3316518337U)), (var_2)))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)254)), ((short)127))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                arr_15 [i_1] [i_1 + 4] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) != (arr_7 [i_1 + 1] [i_2 - 1] [i_2 - 2]));
                arr_16 [i_0] [i_1] = ((/* implicit */int) var_8);
            }
            arr_17 [i_1] [i_1 + 3] [i_1] = (signed char)-28;
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            arr_21 [i_0] [0U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_0] [i_3]))))) ? (max((max((9223372036854775807ULL), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0] [i_0] [i_3] [0LL])))));
            arr_22 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) (~(5418363328228599689ULL))))));
            arr_23 [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) ((((long long int) -1062486427)) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)21)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 4; i_5 < 21; i_5 += 2) 
            {
                arr_28 [i_4] [i_5] &= min((min((4938300511078374542ULL), (4938300511078374542ULL))), (((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)15] [i_5] [i_0])));
                arr_29 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) var_4))));
                arr_30 [i_0] = ((/* implicit */signed char) (-(((min((arr_14 [i_5] [i_5]), (((/* implicit */unsigned long long int) (unsigned char)255)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)124)) * (((/* implicit */int) arr_18 [i_4] [i_4] [i_5])))))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_36 [i_0] [i_4] [i_5 - 1] [i_6 - 1] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)239)) + (((/* implicit */int) (unsigned char)251))));
                        arr_37 [i_0] [i_6 + 1] [i_6] [i_6] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)254))))));
                        arr_38 [i_5 - 3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (unsigned char)254);
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_41 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_20 [i_5 - 2] [i_8 + 2] [i_8]))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)33)) ? (947062671U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7089))))))))));
                        arr_42 [i_0] [i_5] [i_0] [i_4] [i_0] [i_6] [6LL] = ((/* implicit */long long int) var_3);
                    }
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        arr_47 [i_6] = ((/* implicit */long long int) ((signed char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_6 [i_6]))))) : (((/* implicit */int) (unsigned short)7677)))));
                        arr_48 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (short)0);
                    }
                    arr_49 [i_5] = (unsigned char)9;
                    arr_50 [i_6] [i_4] = ((/* implicit */short) ((((((/* implicit */int) (signed char)64)) >> (((((/* implicit */int) arr_25 [i_4])) + (136))))) << (((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_25 [i_4]))))) - (130)))));
                    arr_51 [i_6] [i_6] = ((/* implicit */unsigned short) (-(((unsigned int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_4] [i_0] [(signed char)9] [i_6 - 2]))))))));
                }
            }
            arr_52 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [(unsigned short)6] [i_4])) ? ((+(((/* implicit */int) arr_19 [i_0] [4])))) : (((/* implicit */int) arr_43 [i_0] [i_4] [i_4] [i_4] [(unsigned short)20])))) >> (((((((/* implicit */_Bool) (unsigned char)61)) ? (arr_11 [i_4] [i_0] [i_0] [i_0]) : (arr_11 [(unsigned char)6] [i_4] [i_4] [i_4]))) - (9507826903674265353ULL)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 13; i_10 += 1) 
    {
        arr_55 [0LL] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_45 [(short)2] [i_10 + 2] [(_Bool)1] [i_10 + 1] [i_10 + 3] [i_10 - 1]))));
        arr_56 [i_10 - 2] = ((/* implicit */int) (-(var_9)));
    }
}
