/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81795
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
    var_12 = ((/* implicit */signed char) ((long long int) var_9));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), ((((+(var_9))) - (arr_9 [i_2 + 3] [i_2 + 2])))));
                    arr_11 [i_0] [i_1] [11U] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) -631203306)))));
                    arr_12 [i_0] [i_1] [i_2 + 1] [i_2] = var_3;
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */int) (unsigned short)60253);
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((max((max((14968835366238459851ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [14U] [i_0])))))))) - (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
        arr_15 [i_0] [i_0] = ((/* implicit */int) -3581427737888191336LL);
    }
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_27 [i_3] [i_3] [2] [2] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 + 1] [i_6 + 1])) : (((/* implicit */int) arr_20 [i_3] [i_3 + 2] [i_6 + 3])))), (((/* implicit */int) ((unsigned short) -3581427737888191336LL)))));
                        arr_28 [i_6 + 4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3)))));
                        /* LoopSeq 2 */
                        for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            arr_33 [i_7 - 1] [i_4] [i_5] [i_4] [i_3 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_7 - 1] [i_7 - 1] [i_4] [i_4] [i_3]))));
                            arr_34 [i_7] [i_6] [i_6] [i_4] [i_4] [i_4] [i_3] = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7]))) : ((-(arr_26 [i_3 - 1] [i_4] [i_5] [i_6] [i_7 + 2]))))) | (((/* implicit */unsigned long long int) var_9)));
                            arr_35 [i_4] [i_6 + 1] [i_4] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_31 [i_7 - 1] [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_4])) : (((/* implicit */int) arr_31 [i_7 - 1] [i_6 + 2] [i_6] [i_6] [i_6 - 1])))) % ((+((~(((/* implicit */int) var_6))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_39 [i_5] [i_5] &= ((/* implicit */unsigned short) ((max(((-(8934040190816494710ULL))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_11))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6 - 2])) - (((/* implicit */int) arr_6 [i_6 - 2])))))));
                            arr_40 [i_3 + 2] [12U] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) var_1);
                            arr_41 [i_8] [7] [i_5] [i_4] [i_3 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_20 [i_3] [i_3 + 2] [i_5])) >= (((/* implicit */int) arr_31 [i_3] [i_5] [i_6 + 2] [i_6 + 4] [i_3 - 1])))))));
                        }
                        arr_42 [i_6] = ((/* implicit */unsigned char) ((arr_36 [i_3] [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_6 + 2]) ? ((~(3581427737888191309LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_36 [i_3] [i_3] [i_3] [i_3 + 2] [i_4] [i_4] [i_6 + 3]))))));
                    }
                } 
            } 
        } 
        arr_43 [i_3] [i_3 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_3] [i_3 + 1] [i_3] [i_3] [(short)6] [i_3] [i_3]))));
        arr_44 [(unsigned short)0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_5 [i_3 + 2] [i_3 - 1]) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_8))))))))));
    }
}
