/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66223
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
    var_14 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1]))))) * (((((/* implicit */int) (unsigned char)47)) >> (((((/* implicit */int) (short)30226)) - (30224)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]))))), (max((arr_10 [i_3] [i_1] [i_2] [(signed char)15] [i_4]), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_3 + 1] [i_3 - 1] [i_4])))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2]))))) && (((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_4])))))));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_2]);
                                arr_16 [i_0] [(unsigned short)11] = ((((/* implicit */int) (unsigned char)17)) ^ (((/* implicit */int) arr_4 [i_0] [0] [i_0])));
                                arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) && (((/* implicit */_Bool) min((max(((signed char)-1), ((signed char)-1))), (((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_4])) >= (((/* implicit */int) (unsigned char)208))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)31738))));
                    arr_21 [i_1] [(short)16] = ((/* implicit */short) max((((((((/* implicit */int) (unsigned short)51871)) & (arr_3 [i_0] [i_1] [i_5]))) * (((/* implicit */int) (((-2147483647 - 1)) != (2147483647)))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_5]))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5]))) > (arr_1 [i_0] [i_5])))))))));
                    arr_22 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_5])) - (16359))))) >> (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) <= (arr_13 [i_0] [(unsigned short)3] [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_6] = ((/* implicit */int) (signed char)(-127 - 1));
                                arr_28 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_5]);
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_1] [i_0 - 3] = ((/* implicit */short) ((min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_1] [15LL])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_33 [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_8]))));
                    arr_34 [i_0] [i_1] [i_1] [i_8] = ((((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1] [i_8])) | (18446744073709551615ULL))) << (((((/* implicit */int) (signed char)127)) - (95))));
                }
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned short) arr_23 [i_0] [i_1] [i_10]);
                            arr_41 [3] [i_1] [i_0] = ((/* implicit */short) (signed char)(-127 - 1));
                            arr_42 [i_0] [i_0] = ((((min((10468102368402303430ULL), (((/* implicit */unsigned long long int) (signed char)-1)))) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_25 [10LL] [i_1] [i_0])), (1109821616U)))))) / (((((arr_36 [i_10] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0 + 1] [i_1] [i_9] [i_9] [i_0]))))) - (arr_37 [i_0] [i_9]))));
                            arr_43 [i_9] [i_10] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)127)), (arr_13 [i_0] [i_0] [i_9] [i_10])));
                        }
                    } 
                } 
                arr_44 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)28))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_0))))));
    var_16 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) > (3274444889U))))) < (var_10));
}
