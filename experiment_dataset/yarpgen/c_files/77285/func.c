/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77285
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */int) arr_2 [(short)9])) : (((/* implicit */int) arr_6 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(arr_5 [i_2 + 2] [i_1] [i_2]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) == (((((/* implicit */_Bool) (unsigned short)51766)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1]))))));
                                arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) var_7);
                                var_14 += ((/* implicit */short) ((var_4) / (arr_12 [i_0] [i_1] [(unsigned short)6] [i_3] [i_4] [i_2 - 1] [(short)20])));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) > ((~(((/* implicit */int) (unsigned short)13763)))))))));
                    arr_18 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) var_1);
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) (+(((arr_12 [i_5] [i_1] [i_5] [i_5] [i_0] [i_5] [i_5]) - (arr_13 [i_0] [i_0])))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
                            var_18 = arr_4 [(unsigned short)1] [(unsigned short)1];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                arr_28 [i_7] [i_8] = ((/* implicit */int) (unsigned short)51766);
                var_19 = ((/* implicit */unsigned int) arr_21 [i_7] [i_8] [i_8]);
                /* LoopSeq 2 */
                for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 3; i_10 < 15; i_10 += 4) 
                    {
                        arr_35 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((arr_29 [i_7] [(unsigned short)11] [i_9] [i_10]), ((unsigned short)13766))))) ? (arr_8 [i_9] [i_9]) : (((((((/* implicit */unsigned long long int) arr_24 [i_9] [i_8])) != (var_2))) ? (arr_5 [i_7] [i_8] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)13] [i_9] [i_9 - 2])))))));
                        var_20 = ((/* implicit */int) max((var_0), ((unsigned short)13762)));
                        arr_36 [i_7] [i_7] [i_7] [i_7 + 3] [i_7] [i_7] = ((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_2 [i_9]))))))) * ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)31932))) / (arr_13 [11] [i_9]))))));
                    }
                    var_21 = ((/* implicit */unsigned int) arr_31 [i_9] [i_9]);
                }
                for (unsigned short i_11 = 2; i_11 < 14; i_11 += 4) /* same iter space */
                {
                    arr_39 [i_7] [i_7] = (-(min((arr_23 [i_8] [i_11]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_11])) : (((/* implicit */int) arr_31 [i_11] [i_7]))))))));
                    var_22 = ((/* implicit */short) (unsigned char)251);
                    var_23 = ((/* implicit */unsigned char) (unsigned short)13769);
                }
                arr_40 [i_7] [i_8] = ((/* implicit */short) ((2027878407U) / (((/* implicit */unsigned int) 1506647719))));
            }
        } 
    } 
}
