/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73215
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 3] [i_2 - 1] [i_2])) ? (((/* implicit */int) (signed char)-17)) : ((+(((int) var_7))))));
                        var_12 = ((/* implicit */unsigned int) var_2);
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)138))));
                        var_13 = ((/* implicit */long long int) max(((-(((/* implicit */int) ((_Bool) (unsigned char)51))))), (((/* implicit */int) ((_Bool) arr_5 [i_0 - 1])))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_4] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 2] [i_2 - 3] [i_0] [i_2])) ? ((+(arr_8 [i_1] [i_4] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0]))))));
                            var_14 = ((/* implicit */unsigned char) arr_2 [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 ^= ((/* implicit */unsigned char) ((unsigned int) (((_Bool)0) ? (max((arr_8 [i_0] [i_0 + 1] [i_0] [i_0 - 1]), (((/* implicit */unsigned int) arr_5 [i_1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)251))))))));
                            var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_0] [i_2 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_2] [i_0])) : (((/* implicit */int) (_Bool)0))))) : (arr_0 [i_3 - 1] [i_0])))));
                            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)141))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2]))))) : (max((((/* implicit */long long int) var_5)), (var_9)))));
                            var_18 = ((/* implicit */long long int) (+(((unsigned long long int) arr_11 [i_3] [i_3 + 2] [i_3 - 2] [i_3] [i_3]))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2 - 1] [i_3] [i_3 - 2] [i_6])))))) + (var_4)));
                            var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)30)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_6))), (min((((/* implicit */unsigned int) arr_3 [i_0])), (var_4)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 1])) : (-1239585599)))) : ((+(arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                {
                    arr_28 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(min((var_8), (((/* implicit */long long int) var_1)))))))));
                    var_21 = ((/* implicit */unsigned char) 11725020569756922128ULL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_22 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_7] [i_7] [i_9 + 2] [i_0] [i_9 + 1])) + (2147483647))) >> (((arr_2 [i_0]) - (4237216541U)))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0])))))) : (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_7] [i_7] [i_9 + 2] [i_0] [i_9 + 1])) + (2147483647))) >> (((((arr_2 [i_0]) - (4237216541U))) - (3803839453U)))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0]))))));
                        var_23 = ((/* implicit */int) ((9293997713009601411ULL) <= (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_24 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */long long int) (-(max((max((arr_16 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10] [i_10])) ? (arr_8 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        arr_36 [8U] [i_10] |= ((/* implicit */unsigned char) max((((/* implicit */int) ((var_7) < (arr_23 [i_10])))), (((((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_10])) + (((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_10]))))));
    }
    var_25 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_9))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)13313)) : (((/* implicit */int) (signed char)32))))))), (var_0)));
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                {
                    arr_45 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) var_10))) != (((/* implicit */int) min((arr_1 [i_11]), (((/* implicit */unsigned short) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_11] [i_11] [i_11]))) : (max((var_8), (max((var_8), (((/* implicit */long long int) var_5))))))));
                    var_26 |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_11] [i_12 - 2] [i_13]))))) : (var_8)));
                }
            } 
        } 
    } 
}
