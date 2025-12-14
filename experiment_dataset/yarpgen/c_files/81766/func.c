/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81766
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
    var_13 = ((/* implicit */_Bool) var_12);
    var_14 &= ((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((long long int) min((2590833685316589754LL), (((/* implicit */long long int) var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_15 -= ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(min((min((-3196361376231179300LL), (((/* implicit */long long int) (short)32762)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (signed char)-109)))))))));
                            var_16 *= ((/* implicit */unsigned int) min((min(((+(-3196361376231179300LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */int) arr_13 [i_3]))))))), (((/* implicit */long long int) arr_8 [i_3] [i_1] [i_2] [i_1]))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_10);
                            var_17 = (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)-32763)) * (((/* implicit */int) (short)-13989))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1]))) : (3196361376231179290LL))));
                            var_18 -= ((/* implicit */unsigned long long int) 922609752);
                        }
                    } 
                } 
            } 
            arr_18 [i_1] = ((/* implicit */_Bool) 2735451578U);
            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((min((arr_12 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)113)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))), (min((((unsigned int) 1191602751848446911ULL)), (min((arr_10 [i_0]), (((/* implicit */unsigned int) var_6))))))));
            arr_20 [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_8 [(unsigned char)6] [i_1] [i_1] [i_0 + 1])))) ? (((/* implicit */int) min((arr_8 [14LL] [i_0] [i_0] [14LL]), (arr_8 [16ULL] [i_0] [i_0] [16ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)0] [(unsigned char)0] [i_0] [(unsigned char)0])))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5 - 1] [i_0 - 1])) ^ (((/* implicit */int) (short)13989))));
            var_19 -= ((/* implicit */unsigned char) arr_22 [2ULL] [2ULL]);
            /* LoopSeq 4 */
            for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
            {
                var_20 -= ((/* implicit */long long int) ((arr_26 [i_6 - 1] [i_0 + 1]) >> (((arr_26 [i_6 - 1] [i_0 + 2]) - (234889404U)))));
                arr_27 [i_0] [i_5] [i_0] = ((((long long int) var_10)) <= ((-(arr_9 [i_0] [i_5] [i_6] [i_5]))));
                arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_5] [i_5] [i_6]);
            }
            for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((arr_26 [i_5 + 1] [i_0 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 + 1]))))))));
                var_22 -= ((/* implicit */unsigned long long int) var_4);
                var_23 ^= ((/* implicit */unsigned int) var_2);
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_6))));
                var_25 = ((/* implicit */unsigned short) ((signed char) arr_14 [i_5] [i_7] [i_7 + 3] [i_5] [i_5]));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_34 [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) arr_13 [i_0]);
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_40 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((var_11) ^ (((/* implicit */int) arr_31 [i_5] [i_5] [i_10])))));
                            var_26 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))));
                            var_27 = ((/* implicit */unsigned short) arr_0 [i_8]);
                        }
                    } 
                } 
                arr_41 [i_5] = ((/* implicit */unsigned int) arr_22 [i_5] [i_5]);
                arr_42 [i_5] = ((long long int) arr_10 [i_5 - 1]);
                var_28 ^= ((/* implicit */long long int) ((int) ((arr_37 [i_8] [i_8] [i_5] [i_5] [i_5] [i_0]) + (((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_45 [i_5] = ((/* implicit */unsigned char) arr_35 [i_11] [i_5] [i_0]);
                arr_46 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_0] [i_11]) / (-174250290)))) ? ((-(((/* implicit */int) (unsigned char)55)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-174250290) : (arr_36 [i_0] [i_0])))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(-174250313))))));
            arr_49 [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((arr_9 [i_0] [i_12] [i_12] [i_12]) != (((/* implicit */long long int) ((/* implicit */int) (short)24279)))))), (var_3))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_12]) != (arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_12])))))));
            arr_50 [i_0] [i_0] [i_12] = ((((/* implicit */_Bool) 174250260)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_5) >> (((3196361376231179298LL) - (3196361376231179296LL)))))) ^ (min((8374944918599142360LL), (((/* implicit */long long int) (unsigned char)155))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2184680074U)))));
        }
    }
}
