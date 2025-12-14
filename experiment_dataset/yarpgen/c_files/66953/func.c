/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66953
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_1] = arr_1 [i_0];
            var_14 = ((/* implicit */short) ((max((((-1) - (((/* implicit */int) arr_5 [16LL] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_3 [i_0])))))) * (((/* implicit */int) min((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_2 [i_1])))), ((!(((/* implicit */_Bool) (signed char)126)))))))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
        }
        var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) -7)), (((/* implicit */long long int) max((((/* implicit */signed char) arr_0 [i_0])), (arr_3 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (min((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]))), ((+(arr_1 [i_0])))))));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((1) << (((((/* implicit */int) (signed char)-43)) + (52)))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)123)))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_4]))));
                var_20 = ((/* implicit */unsigned char) (!((_Bool)1)));
                /* LoopNest 2 */
                for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_23 [i_5] [i_5] [(_Bool)1] = ((min((((/* implicit */unsigned int) arr_21 [i_5] [i_5] [i_5])), (((arr_22 [i_3] [i_3] [i_5] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3]))))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4747670785951330261LL), (((/* implicit */long long int) 1730370737U))))) ? (-19) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_6] [i_6 - 3])), (arr_16 [i_6] [i_5]))))))));
                            arr_24 [i_5] [i_4] [i_5] [i_6] = ((/* implicit */signed char) var_5);
                            /* LoopSeq 2 */
                            for (short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                            {
                                var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32748)))))));
                                var_22 ^= ((/* implicit */short) arr_17 [i_3] [i_3]);
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((((/* implicit */long long int) (+(min((arr_22 [i_3] [i_3] [i_5] [i_6]), (((/* implicit */unsigned int) arr_19 [(unsigned short)4] [i_3]))))))), (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-43)) * (((/* implicit */int) arr_18 [i_5] [i_3]))))), ((-(-1LL))))))))));
                            }
                            /* vectorizable */
                            for (short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_5] [i_4] [i_5] = ((/* implicit */short) arr_12 [i_4] [i_4]);
                                var_24 = arr_18 [i_8] [i_4];
                                arr_30 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_6] [i_8])) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)67)))) : (var_9)));
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_20 [i_4] [(unsigned short)2] [(signed char)11] [14LL]), (arr_18 [i_3] [i_4])))))))));
            }
        } 
    } 
}
