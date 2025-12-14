/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78515
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((min((((arr_1 [(unsigned char)5] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_2))))))) >= (((int) (short)260)));
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned short) var_5))) ? (var_0) : (var_11)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14869)) ^ (((/* implicit */int) (short)232))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_2] [i_1 - 2] [i_2] [i_2] = ((((/* implicit */_Bool) min((var_6), (((arr_9 [i_0] [i_0] [i_2] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_0] [(unsigned char)4] [i_2] [i_3] [(unsigned char)6]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((2719116257681505438ULL), (((/* implicit */unsigned long long int) (short)227)))));
                                arr_14 [i_0] [i_0] [(short)8] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2]);
                                arr_15 [i_2] = ((/* implicit */unsigned int) min(((unsigned short)6509), (((/* implicit */unsigned short) (short)-7186))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59026)))))) ^ (((((unsigned long long int) (short)256)) / (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0])), (arr_4 [i_5] [i_5])))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59026)))))) ^ (((((unsigned long long int) (short)256)) * (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0])), (arr_4 [i_5] [i_5]))))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)59026)) ? (((/* implicit */int) (unsigned short)55282)) : (((/* implicit */int) (unsigned char)203))))))) ? (((/* implicit */int) (short)-4520)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) || (var_12))))));
                            }
                            arr_21 [(signed char)4] [i_2] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)239)) | (((((/* implicit */_Bool) (short)234)) ? (((((/* implicit */_Bool) (unsigned short)59026)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)229)))) : (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_0);
}
