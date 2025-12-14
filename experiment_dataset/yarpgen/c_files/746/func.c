/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/746
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
    var_11 = ((/* implicit */unsigned long long int) ((max((min((var_0), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46740)) && (((/* implicit */_Bool) (unsigned short)18795))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = var_6;
                arr_8 [6LL] = var_3;
                arr_9 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), ((+(arr_0 [i_0])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)3] |= max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)55846))))), (((unsigned int) var_1)));
                            arr_17 [i_3] [i_2] [(signed char)17] [i_1] [i_0] = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_14 [i_0] [i_1] [i_1] [i_3]))), (((/* implicit */unsigned int) (signed char)114))))));
                            arr_18 [i_3] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((arr_1 [i_1]) > (arr_1 [i_0]))))));
                            arr_19 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) max(((unsigned short)46733), (((/* implicit */unsigned short) var_2))))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_3] [(signed char)11] = ((/* implicit */unsigned short) ((unsigned char) (+(((unsigned long long int) 1497098718U)))));
                                arr_23 [i_0] [i_0] [i_2] [i_2] [16] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_7)) - (91))))), (((((/* implicit */int) (unsigned short)18795)) >> (((var_8) - (1751688290))))))), (((/* implicit */int) var_6))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_2] [i_2] [(unsigned char)12] [i_5] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))) || (((/* implicit */_Bool) var_6))));
                                arr_27 [i_0] [19U] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4028668012U))))) : ((~(((/* implicit */int) var_6))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) (unsigned short)46735)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */int) var_5))))));
                                arr_29 [i_1] [7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)57886);
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                arr_32 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */signed char) var_8);
                                arr_33 [i_6] [i_3] = ((/* implicit */unsigned long long int) 4028668013U);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
