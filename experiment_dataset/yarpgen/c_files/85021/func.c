/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85021
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min(((-(((/* implicit */int) min(((unsigned char)85), ((unsigned char)171)))))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])))))));
                            arr_15 [i_4] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)9] [i_0] [(unsigned short)9]))))))));
                        }
                        arr_16 [i_1] [i_2] [10ULL] [i_1] [i_1] [4] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_13 [i_3] [13U] [i_0] [i_1] [i_0] [i_0]))))));
                    }
                    var_20 = ((/* implicit */short) max((var_20), (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_14 [(short)1] [16U] [i_1] [i_1] [i_1] [i_2] [i_2]))))));
                    arr_17 [i_0] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) arr_4 [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_5] [i_6] [8ULL] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((arr_0 [i_5]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((arr_8 [i_5] [i_5] [i_5] [i_9]), (((/* implicit */short) arr_29 [i_7] [i_6] [12LL] [i_7] [i_9] [(_Bool)1] [i_5]))))), (arr_11 [i_6] [i_7] [i_8] [i_6])))))))));
                                arr_31 [(unsigned short)9] [i_5] [i_7] [i_8] [(short)0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_5] [i_6] [(unsigned char)6] [6ULL]))))), (arr_2 [(short)13])))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84))))))))));
                                arr_32 [i_5] [i_9] [i_8] [i_7] [i_5] [i_5] = ((/* implicit */long long int) arr_0 [i_6]);
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_4 [i_7])))), ((-(((/* implicit */int) arr_30 [i_7] [i_5] [(signed char)2] [(unsigned short)12] [(unsigned short)12] [i_7] [i_9]))))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [4U] [i_6] [4U]))))))))));
                }
            } 
        } 
    } 
}
