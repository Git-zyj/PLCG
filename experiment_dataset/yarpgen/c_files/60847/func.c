/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60847
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (715749877) : (((/* implicit */int) (signed char)-70))))), ((~(((unsigned int) var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [(signed char)14] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [8LL])) : ((~(((((/* implicit */int) arr_9 [i_1])) & (((/* implicit */int) (unsigned short)7392))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_1]))))) + (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) % (4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7595712476849685562LL)))))))));
                    arr_19 [i_1] = ((/* implicit */long long int) var_3);
                    arr_20 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((var_8), (((/* implicit */long long int) var_3))))))) ? (min((((/* implicit */int) ((short) 459213280U))), ((+(-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_17 [i_0] [i_0] [i_0] [0])))))))));
                }
                for (long long int i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_1] = ((/* implicit */signed char) 5039642745426006649LL);
                    var_12 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_6] [i_6 - 2]))) : (((/* implicit */int) (short)-24725)))))));
                    var_13 = ((/* implicit */signed char) min((var_13), (arr_3 [i_0] [0LL] [i_6 + 1])));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                    arr_27 [i_7] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((unsigned int) arr_25 [i_0] [i_1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7])))))))))));
                    var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) min((arr_14 [i_0] [16U] [i_0]), (((/* implicit */unsigned long long int) arr_16 [(signed char)0]))))) ? ((-(((/* implicit */int) (unsigned char)192)))) : ((+(((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_32 [i_1] [i_1] [i_9] [i_1] [i_9] = min((((/* implicit */unsigned long long int) min((((unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_0))))))), ((+(min((((/* implicit */unsigned long long int) var_9)), (arr_14 [i_9] [i_1] [i_1]))))));
                                arr_33 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_10 [i_1] [i_9] [i_8 - 1] [i_8 - 2] [i_9] [(short)15] [i_8 - 1]), (((((/* implicit */_Bool) 35184372088831LL)) || (((/* implicit */_Bool) arr_1 [(signed char)5])))))))));
                                arr_34 [i_0] [i_1] [i_1] [i_7] [i_8 + 3] [(unsigned char)14] = ((/* implicit */_Bool) arr_0 [i_1]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
