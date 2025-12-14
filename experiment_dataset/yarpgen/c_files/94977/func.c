/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94977
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)114))), (var_5)));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_1] [i_1])), (var_10)))) ? (((long long int) arr_3 [i_0] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [(signed char)7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8859512119316627172LL)))))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_12 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 6674857173590962750ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2] [i_0])))));
            arr_13 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) arr_3 [i_0] [(short)9])))) ? (arr_3 [i_2] [i_0]) : (var_2)))));
            arr_14 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (signed char)64))))) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])) : (min((((/* implicit */long long int) var_8)), (-8604258670433831959LL))))), (((long long int) arr_1 [i_0]))));
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_17 [11LL] [i_0] [(signed char)19] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) / (var_4));
            var_14 = ((/* implicit */short) arr_6 [i_0] [i_3]);
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_20 [i_0] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_4 - 1] [i_3])) : (((/* implicit */int) arr_2 [i_4 - 1] [i_3])))) : ((~(((/* implicit */int) arr_2 [i_4 - 1] [i_3]))))));
                var_15 = ((/* implicit */long long int) min((4018994693U), (((/* implicit */unsigned int) arr_16 [i_0]))));
            }
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_15 [i_3] [i_3] [i_0])))));
            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_3 [i_0] [i_3])))) ? (((/* implicit */int) ((short) arr_18 [i_0] [i_3] [i_3]))) : (((/* implicit */int) ((unsigned char) arr_15 [i_3] [i_0] [i_0])))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_27 [i_5] [i_6] [(short)11] = (~(((((/* implicit */_Bool) var_7)) ? (arr_9 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
            arr_28 [i_6] = ((/* implicit */unsigned short) arr_0 [i_6]);
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 4; i_8 < 16; i_8 += 3) 
            {
                arr_33 [i_7] [18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32757)) : (arr_31 [i_5] [i_7] [i_8] [i_8]))) : (((/* implicit */int) arr_10 [i_8 + 3] [(_Bool)1] [(unsigned short)17])))))));
                arr_34 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_15 [i_8 + 2] [i_8 - 1] [i_8]), (arr_15 [i_8 + 2] [i_8 + 3] [i_8])))) > (((unsigned long long int) arr_31 [i_7] [i_8 + 3] [i_8 - 2] [i_8 - 3]))));
                var_17 = ((/* implicit */unsigned char) (((+(arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1]))) / (max((arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1]), (arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1])))));
            }
            for (short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_6 [i_5] [i_7])), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)56)))))));
                            arr_44 [i_5] [i_7] [i_9] [i_7] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_45 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_42 [i_9] [i_5] [i_7] [(unsigned char)18] [i_5]), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((var_2) != (((/* implicit */long long int) arr_16 [i_7])))))))) : (max((max((arr_15 [i_5] [i_5] [i_5]), (((/* implicit */long long int) (signed char)-85)))), (((/* implicit */long long int) var_3))))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [(_Bool)1] [i_9])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        {
                            var_20 -= ((((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_9] [i_12] [i_13 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5] [i_13])))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) arr_48 [i_5] [i_13]))) : (((/* implicit */int) min((var_10), (((/* implicit */short) arr_29 [i_5]))))))));
                            var_21 |= ((/* implicit */signed char) -5365230417541625640LL);
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned char) var_5);
            var_23 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-1238450014621878277LL))));
        }
        arr_52 [i_5] [i_5] = ((/* implicit */long long int) arr_49 [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_53 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_24 ^= ((/* implicit */long long int) var_9);
    }
}
