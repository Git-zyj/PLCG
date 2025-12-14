/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94060
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((var_4) | ((~(((/* implicit */int) var_14)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_6 [(unsigned short)8] [i_1 - 1] [i_2 + 2] [i_1 - 1]);
                    arr_9 [i_1] [(signed char)3] [(signed char)3] [i_0 - 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                    arr_10 [4ULL] [i_2] [i_1 - 1] [4ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1])))) | (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0 - 3]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_2 + 2] [i_2] [i_2 - 1] = ((/* implicit */short) (-(((arr_17 [i_0] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1]) + ((+(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
                                arr_19 [i_0] [i_3] [i_2 + 1] [i_3] [i_3] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2 + 2] [i_3]))))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) var_8)))) : (((234662403) + (((/* implicit */int) arr_0 [i_0 - 3])))))), (((/* implicit */int) var_8))));
                                arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */signed char) arr_2 [i_3]);
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1] [i_2 + 2]))))))) + (max((arr_4 [i_1]), (((/* implicit */unsigned int) var_11))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_32 [i_5] = ((/* implicit */unsigned short) arr_31 [i_5] [i_6] [i_5] [i_8]);
                            arr_33 [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))));
                        }
                    } 
                } 
                arr_34 [i_5] [i_5] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}
