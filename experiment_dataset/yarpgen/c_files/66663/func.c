/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66663
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                            arr_8 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((arr_3 [(_Bool)1] [i_1] [i_1]) < (arr_7 [i_3] [10LL] [i_2 - 2] [i_3] [i_3] [13LL])))));
                            var_11 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_0] [i_3]))))), ((+(((/* implicit */int) (unsigned char)255))))))), (((unsigned int) max((arr_7 [i_0] [i_1] [(unsigned char)7] [i_2 - 3] [2LL] [i_3]), (((/* implicit */unsigned long long int) var_3)))))));
                            var_12 -= ((/* implicit */unsigned int) ((((unsigned long long int) arr_5 [i_2] [i_2] [i_2 - 1] [i_2])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65525)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_13 [(unsigned char)10]), (((/* implicit */unsigned short) var_1))))) ? (min((var_4), (((/* implicit */unsigned long long int) (unsigned short)65516)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_1))))))) ^ (((/* implicit */unsigned long long int) var_6))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)194)))), (((arr_5 [i_0] [i_1] [3U] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_26 [i_8] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_6] [i_6] [(short)8])), (arr_24 [i_6] [i_6] [i_7] [i_8] [i_9]))))))), (((unsigned int) min(((unsigned short)65516), (((/* implicit */unsigned short) var_1)))))));
                            var_14 = ((/* implicit */long long int) (-(((((/* implicit */int) max(((unsigned short)4), ((unsigned short)65516)))) - (((/* implicit */int) (!(((/* implicit */_Bool) 896680844U)))))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65496)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (short)-28237)) : (((/* implicit */int) arr_21 [i_9] [i_8] [i_7])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17))))) >= (((/* implicit */int) (unsigned char)244))));
                            arr_32 [i_6] [i_7] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65516)) << (((int) (unsigned short)7)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_7] [5ULL] [i_11] [i_7] [i_11 - 1])))))));
                            var_17 = var_0;
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [3U] [i_11])) : (((/* implicit */int) arr_25 [i_6] [i_7] [(short)8] [(short)8])))) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_33 [i_6] [i_6] [i_10] = ((/* implicit */int) arr_18 [16U] [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_19 = (unsigned short)65496;
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_7] [i_13])) ? (((unsigned long long int) arr_29 [i_6] [i_7] [(short)0] [3U])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10)))))));
                            var_21 = ((/* implicit */short) ((-9223372036854775799LL) ^ (min((max((4830532144598351549LL), (((/* implicit */long long int) arr_28 [i_13])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6])) || (((/* implicit */_Bool) arr_29 [i_6] [i_7] [(unsigned char)5] [i_6])))))))));
                            arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) arr_31 [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            {
                                arr_50 [i_14] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */long long int) 255597804U);
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_21 [i_6] [(unsigned char)11] [(unsigned char)11])), (min((((/* implicit */int) (unsigned char)238)), ((-(((/* implicit */int) (unsigned short)65496))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
                                arr_64 [i_17] [i_18] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((min((arr_63 [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) (unsigned short)10)))) % (var_7)))), (min(((+(arr_60 [4ULL] [i_17] [i_18] [i_19] [i_20] [i_21]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23914))) : (arr_55 [i_17] [i_17] [i_17]))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((+(((arr_62 [i_21]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23915))) : (1422332008U))))) ^ (min(((-(arr_55 [i_17] [20ULL] [i_19]))), (var_7))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_58 [i_22] [i_23])))) ? (min((var_0), (((/* implicit */long long int) (unsigned char)255)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [1] [i_18]))))))));
                            var_26 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3648149763873358443LL)) ? (((/* implicit */int) (short)-28224)) : (((/* implicit */int) (unsigned short)65493))))) ? (arr_51 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23929))));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((-(arr_69 [i_17]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)10)))))))), (min((((/* implicit */unsigned long long int) arr_58 [i_22] [i_18])), (arr_53 [i_22] [i_18])))));
                            var_28 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) min((arr_54 [i_17]), (((/* implicit */unsigned short) (short)28235))))) < (((/* implicit */int) var_3))))));
                            var_29 = ((/* implicit */unsigned long long int) arr_56 [i_18] [i_22] [i_23]);
                        }
                    } 
                } 
            }
        } 
    } 
}
