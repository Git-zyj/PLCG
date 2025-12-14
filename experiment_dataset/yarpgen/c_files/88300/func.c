/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88300
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                arr_5 [i_1] = ((/* implicit */unsigned short) ((int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_11))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0]))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                            {
                                arr_20 [(_Bool)1] [i_3] [i_3] [(_Bool)1] [7U] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned short)0);
                                var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_6]))));
                                var_18 = ((/* implicit */short) arr_17 [i_2] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_15 [14LL] [i_5 + 1] [(unsigned short)14] [i_5 + 1])))))))));
                                var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned short)9])) && (arr_19 [i_3] [i_5 - 1] [10] [6] [i_5 + 1])));
                            }
                            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                            {
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (unsigned short)3);
                                var_21 *= ((/* implicit */unsigned char) arr_4 [i_2] [i_3] [i_5 - 1]);
                                var_22 = ((/* implicit */_Bool) (unsigned char)0);
                            }
                            arr_25 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) var_6)))))))) ? (((((/* implicit */int) arr_21 [i_5] [(unsigned short)15] [i_5 - 1] [i_3] [i_5 + 1] [i_5] [i_5 + 1])) - (((/* implicit */int) arr_21 [i_5] [9] [i_5] [i_3] [i_5 + 1] [13ULL] [i_5 - 1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5 - 1] [(unsigned short)14] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)12))))));
                            arr_26 [i_2] [i_2] [i_4] [i_3] = max(((-9223372036854775807LL - 1LL)), (9223372036854775798LL));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_5 - 1])) ? (((/* implicit */int) min((var_2), (var_4)))) : (((/* implicit */int) arr_15 [(unsigned char)1] [i_5] [i_3] [i_5 - 1]))));
                        }
                    } 
                } 
                arr_27 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)231)))) ? (arr_23 [i_2] [i_2] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7225730308129824121LL)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (var_9))))))) ? (((/* implicit */long long int) var_9)) : (var_12)));
                arr_28 [i_3] = arr_22 [i_2] [15U] [(unsigned char)3] [(unsigned char)3] [15U];
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    arr_32 [(signed char)3] [(short)0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [i_2] [i_2]))) % (arr_4 [i_2] [i_2] [i_2])))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8])))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_38 [i_2] [i_3] [(signed char)12] [i_2] [i_2] = ((/* implicit */unsigned int) 2147483647);
                                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(-2147483637))) / (((/* implicit */int) arr_21 [i_2] [i_3] [(_Bool)1] [i_9] [(_Bool)1] [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)113)) <= (((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (short)-24328)) : (((/* implicit */int) (unsigned short)65507))))))) : (((/* implicit */int) (unsigned short)65515))));
                                var_25 = ((/* implicit */long long int) (+((-(((var_10) >> (((((/* implicit */int) var_8)) + (146)))))))));
                                arr_39 [i_3] [i_3] = var_2;
                                arr_40 [i_3] [i_10] [15] [i_10] [i_10] [i_10] [(unsigned char)7] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (arr_8 [i_2] [i_2])))), (var_12)));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 3; i_11 < 14; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            {
                                arr_48 [i_3] [i_3] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_11] [i_11 - 2] [i_11 - 2])) ? ((-(((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [10] [i_2] [i_3])) || (((/* implicit */_Bool) var_2)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) arr_0 [i_11 - 3])) : (((/* implicit */int) (unsigned char)216))))) : (min((((((/* implicit */_Bool) -2079342391)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [4] [i_11] [i_3]))) : (arr_3 [i_3] [i_3]))), (((/* implicit */unsigned int) var_4))))));
                                var_27 = ((/* implicit */int) arr_0 [i_12]);
                            }
                        } 
                    } 
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [5U] [5U] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) var_2);
}
