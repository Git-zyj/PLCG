/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86846
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_15 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
        }
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (min((((/* implicit */int) arr_11 [i_2] [i_3] [i_2] [i_5])), (arr_2 [i_0] [i_0]))) : (((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)6166))))) << (((max((1854729226U), (((/* implicit */unsigned int) arr_2 [i_0] [i_3])))) - (2045335481U)))))));
                            arr_14 [i_3] = ((/* implicit */signed char) var_2);
                            var_17 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4]))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) (~((~(2458089710U)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0])) | (((/* implicit */int) var_10))));
                            arr_17 [i_6] [i_6] [i_3] [i_3] [i_2] [i_0] = max((-1008874682), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_8 [i_4] [i_3])))));
                            var_20 = ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_6] [i_2])))) : (((/* implicit */int) max((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_4])))));
                            arr_18 [i_0] [i_2] [i_3] [i_3] [i_6] = arr_12 [i_0];
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_23 [i_7] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_15 [i_2] [i_7])))) ? (((/* implicit */unsigned long long int) (-(arr_15 [i_2] [i_3])))) : (((unsigned long long int) arr_15 [i_7] [i_0]))));
                            arr_24 [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_4] [i_7]);
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_3]))))) : (((/* implicit */int) (short)-26676))))), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_21 |= ((/* implicit */int) (signed char)52);
                            var_22 |= (~(((/* implicit */int) var_8)));
                        }
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_29 [i_4] [i_0] [i_2] [i_0]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                {
                    var_24 -= var_12;
                    var_25 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((_Bool) -1008874686))))));
                    arr_37 [i_9] = ((/* implicit */unsigned short) arr_30 [i_9]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), ((+(max((var_7), (((/* implicit */unsigned long long int) var_10)))))))))));
}
