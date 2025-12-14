/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61607
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */unsigned int) (unsigned char)147)), (109359268U))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (max((4185608036U), (((/* implicit */unsigned int) min((var_2), ((unsigned char)222)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)17947)))))))));
            var_13 = ((/* implicit */short) (-(109359268U)));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_3] [i_1] [i_4] = ((/* implicit */short) arr_11 [i_2] [i_0]);
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (4185608028U) : (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) max((605080397U), (arr_12 [i_0] [i_1] [i_2] [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_3] [i_3] [i_2])) * (((/* implicit */int) (unsigned char)0))))) : (((arr_7 [i_1] [i_3] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4]))))))));
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_9))))) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1889051385U)) ? (((/* implicit */int) (unsigned char)27)) : (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
        }
        arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (arr_10 [i_0])))) > (((((/* implicit */_Bool) arr_10 [i_0])) ? (2129692701U) : (((/* implicit */unsigned int) arr_10 [i_0]))))));
    }
    for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((arr_18 [i_5 - 2]) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)98))))))) / (arr_18 [i_5 + 1])));
        arr_20 [i_5 + 1] = ((/* implicit */unsigned short) max((arr_17 [i_5 - 2] [i_5 - 1]), ((+(var_6)))));
        var_16 = ((/* implicit */unsigned long long int) ((((arr_18 [i_5 + 1]) | (arr_18 [i_5 - 1]))) >> (((/* implicit */int) ((arr_18 [i_5 - 1]) < (arr_18 [i_5 + 1]))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_7] [i_8] [i_9] [i_9] = min((((/* implicit */long long int) 0)), (max((((/* implicit */long long int) var_5)), (arr_23 [i_9] [i_9] [i_6] [i_9]))));
                            arr_32 [i_6 + 3] [(short)16] [i_8] [(short)16] |= ((/* implicit */unsigned char) ((signed char) ((arr_27 [i_5] [i_6] [i_6 + 2] [i_5 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)0))))));
                            var_17 = ((/* implicit */unsigned char) arr_24 [i_9]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                        {
                            arr_35 [i_5] [i_6 + 1] [i_6] [i_7] [i_8] [i_10 + 2] [i_5] = ((/* implicit */int) (~(((arr_18 [i_7]) / ((~(arr_27 [i_6] [i_6] [i_8] [i_10 - 2])))))));
                            arr_36 [i_5] [i_6 + 2] [i_7] [i_6] [i_10] [i_10 + 2] = ((/* implicit */unsigned short) ((((arr_24 [i_6 + 3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) >> (((/* implicit */int) (unsigned char)5))));
                        }
                        arr_37 [i_6] [i_7] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned int) 2147483647)) & (496943263U))))) >> (((arr_17 [i_6 + 1] [i_5 - 1]) - (549607857)))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((max((((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11]))))), (((/* implicit */long long int) arr_39 [i_11])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_39 [i_11])) : (var_5)))) || (((/* implicit */_Bool) (~(-20LL)))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((4185608028U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_11])) >> (((((/* implicit */int) arr_39 [i_11])) - (45821))))))))))))));
        arr_40 [i_11] [i_11] = (short)0;
        var_20 = max((((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)251))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) arr_39 [i_11]))))))), (max((arr_38 [i_11]), (arr_39 [i_11]))));
    }
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 2; i_13 < 10; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((-29LL), (((/* implicit */long long int) (short)25833)))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_12] [i_13 - 2] [i_13 - 2] [i_14] [i_12] [i_12])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        arr_50 [i_12] [i_13] [i_15 - 1] = ((/* implicit */unsigned long long int) (+(arr_17 [i_13] [i_12])));
                        arr_51 [i_12] [i_12] = ((/* implicit */long long int) max((((/* implicit */int) (short)31)), ((~(arr_17 [i_13 + 1] [i_13 - 1])))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_46 [i_13 - 1] [i_12] [i_15 + 3]))) > (arr_17 [i_12] [i_13])));
                    }
                }
            } 
        } 
        arr_52 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((1839081685), (((/* implicit */int) arr_46 [i_12] [i_12] [i_12])))))));
        var_23 |= ((/* implicit */signed char) 4185608028U);
        var_24 = ((/* implicit */short) max(((+(((/* implicit */int) arr_49 [i_12] [i_12])))), (((((/* implicit */int) max(((unsigned char)3), ((unsigned char)163)))) + (((/* implicit */int) arr_25 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
    }
}
