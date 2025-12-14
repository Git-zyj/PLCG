/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73450
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
    var_13 = ((/* implicit */short) (+(min(((+(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0])) >> ((((~(((/* implicit */int) arr_3 [i_0] [15U] [15U])))) + (29353))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_6 [i_1] [i_1] [i_0]))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3]);
                        arr_10 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */long long int) (~(((arr_9 [i_0] [9] [i_0] [i_2] [i_2] [9]) & (arr_5 [i_3] [i_0] [12])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_0])) % (arr_5 [i_0] [i_0] [i_2])))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_15 [i_5] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_0] [23] [i_2] [i_2] [i_4] [i_5])) << (((/* implicit */int) arr_12 [i_4] [i_0] [i_0] [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5])))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_14 [i_4] [(short)8] [i_2] [2ULL]))));
                            arr_16 [i_0] [i_0] [i_1] [15] [i_4] [i_5] = (-((~(arr_8 [i_0] [i_1] [i_2] [i_4]))));
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_0] [19LL] [i_2] [(short)13] [i_6] = ((/* implicit */signed char) (-(arr_6 [(short)6] [(short)6] [(short)6])));
                            arr_21 [i_0] [i_1] [14ULL] [i_1] [i_4] [i_0] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [20LL])) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [(unsigned short)12] [i_6]))))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_4])))))));
                            arr_26 [(signed char)5] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (~((+(arr_6 [i_0] [i_0] [i_0])))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) | (2798122603860223824ULL))))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-114)))))))));
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) ((arr_22 [i_0] [i_0] [(signed char)9] [23ULL] [(unsigned char)13]) != (arr_22 [i_0] [i_4] [i_2] [i_0] [i_0])))) << ((((~(((/* implicit */int) arr_4 [i_0])))) - (30)))))));
                        }
                        arr_28 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])))))));
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [14ULL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((-(arr_5 [i_2] [i_0] [i_2]))) ^ ((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)20]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_0] [i_8] [i_0] [i_0]), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [(unsigned char)18] [(unsigned char)18])))))) & (max((arr_30 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_2] [i_8] [(signed char)4] [i_0] [i_8]))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)32765)))))))));
                        }
                        arr_36 [i_0] [i_1] [(short)22] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [(unsigned short)20] [4] [i_2] [i_2] [4]))));
                    }
                }
            } 
        } 
    } 
}
