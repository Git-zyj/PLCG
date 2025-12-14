/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99190
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
    var_15 = (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (-2063717781)))), (var_3))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))) : (((unsigned long long int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))))) ? (((long long int) var_2)) : ((~(-8828984709835909250LL)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-25155))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) || (((/* implicit */_Bool) (short)-25162))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14270331032599082184ULL))))))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_16 [i_3] [i_4 + 1] [i_4] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_4 + 2] [i_4 + 1] [i_4])) ? (arr_13 [i_3 + 2] [i_4 - 3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) 1056563821U)))));
                            arr_17 [i_5] [i_4] [i_3 + 1] [i_4] [i_1 - 4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_15 [13LL] [i_5] [i_5] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_15 [(signed char)15] [i_4 - 2] [i_4] [i_4 - 3] [i_3 + 2])))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_11 [i_3] [i_3] [i_3 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))))));
                            var_19 = ((/* implicit */unsigned int) arr_3 [i_4]);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 4; i_6 < 15; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_6 + 1] [i_9 - 1] [i_9 - 2] [i_9] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_30 [i_6 + 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 2] [9U])) : (((/* implicit */int) arr_30 [i_6 + 1] [i_9 - 1] [i_9] [i_9] [i_9 - 2] [i_6 + 1]))));
                                arr_31 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(var_9))))));
                                var_21 = ((/* implicit */unsigned short) (-((~(var_3)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) arr_19 [i_6] [i_6]);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 4] [i_6 - 4] [(signed char)11])) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 3] [i_6])) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6 - 4] [i_6 - 3] [i_6]))));
                    var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) & (((arr_27 [i_7] [i_7]) ? (arr_10 [i_7]) : (arr_20 [i_7])))));
                }
            } 
        } 
        var_25 = (~(((/* implicit */int) (unsigned short)49970)));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) > (1633174325U))))));
        var_27 -= ((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [i_6] [i_6] [(short)4]);
    }
    for (unsigned char i_11 = 4; i_11 < 15; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (max((((/* implicit */unsigned int) ((signed char) ((unsigned long long int) (short)-25155)))), (max((arr_7 [i_11 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_13])) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) arr_8 [i_13] [i_13] [i_13] [i_13])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 14; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 14270331032599082184ULL)) ? (arr_18 [i_11 - 2]) : (((/* implicit */unsigned long long int) arr_20 [i_13])))) <= (min((14955337720322897187ULL), (arr_42 [i_11]))))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_39 [i_14] [i_13] [i_12] [i_11])), (arr_12 [i_11] [i_12] [(unsigned char)10] [i_14 - 2] [i_12])))))))))));
                                var_30 = 2233984712U;
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_11] [i_11])), (max((2ULL), (((/* implicit */unsigned long long int) arr_37 [12] [i_12] [i_12])))))))));
                }
            } 
        } 
        arr_44 [i_11] = ((/* implicit */long long int) min(((-((~(((/* implicit */int) (signed char)-62)))))), ((~(((/* implicit */int) arr_22 [i_11 + 1] [i_11]))))));
    }
}
