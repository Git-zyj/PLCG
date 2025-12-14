/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83747
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(min((arr_6 [i_0] [i_1] [i_2 + 2]), (arr_6 [i_0] [(unsigned short)15] [i_2 + 1]))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((+((+(623423535U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (-(var_1))))) + (((((/* implicit */_Bool) 623423535U)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_13 [(_Bool)1] [i_2] [i_1] [i_0]))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3671543761U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_3]))) : (arr_6 [i_0] [i_2 - 2] [i_2 - 1]))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (3671543761U)));
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)122)) + (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]))));
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)11999))) == (var_1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) arr_15 [i_7]);
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_3 [i_0]))))))));
                                arr_23 [i_0] [i_1] [(short)8] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (623423534U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((-(var_1))) : (((/* implicit */long long int) ((623423535U) + (((/* implicit */unsigned int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) arr_6 [i_8 - 2] [i_0] [i_0]);
                    arr_26 [i_0] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-12000)) ? (623423534U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_1] [i_8 + 1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_1));
                                var_23 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_5))))) ? (max((var_3), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), ((signed char)-113))))))), ((~((((_Bool)0) ? (var_3) : (var_1)))))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */signed char) min((((var_11) ? (arr_31 [i_0] [i_1] [i_8] [i_8 + 1] [i_8]) : (((/* implicit */unsigned long long int) 8933279143730258022LL)))), (arr_31 [i_0] [i_0] [i_8] [i_8 - 1] [i_1])));
                }
                arr_33 [(signed char)1] [3ULL] [3ULL] |= ((/* implicit */signed char) min((max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7))))), (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1))))))), ((-(((/* implicit */int) ((var_3) != (((/* implicit */long long int) arr_0 [i_0])))))))));
                arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_11 = 1; i_11 < 16; i_11 += 1) 
    {
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_14 = 4; i_14 < 15; i_14 += 3) 
                    {
                        var_25 -= ((/* implicit */_Bool) ((arr_37 [i_14 + 2] [i_14 + 2]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)11999))) | (2245684350U));
                    }
                    for (unsigned char i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_5))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_46 [i_12 - 1] [i_12 - 1])) < (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [i_12])))))));
                    }
                    var_29 = ((/* implicit */short) (signed char)2);
                }
            } 
        } 
    } 
    var_30 |= ((/* implicit */unsigned int) var_5);
}
