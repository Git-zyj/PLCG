/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71775
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27649)) | (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)11))))))) ? (((/* implicit */unsigned long long int) ((-22002858) | (((/* implicit */int) (short)-1))))) : (((min((arr_7 [i_0] [i_1] [(signed char)10] [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])))) ^ ((~(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_1 [i_1])))) - (((/* implicit */int) arr_5 [(short)16] [i_1] [i_1] [i_4]))));
                                var_15 = ((/* implicit */unsigned short) ((var_4) - (((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_3])))))));
                                var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) (short)-32766)) - (((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) min(((short)-3704), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]))))))))) : (((((/* implicit */_Bool) ((signed char) arr_1 [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50139)) ? (((/* implicit */int) (unsigned short)42317)) : (2080061029)))) : (((9223372036854775787LL) % (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_19 [i_6]);
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 634383110U)) ? (((/* implicit */int) (unsigned short)62828)) : (((/* implicit */int) ((((/* implicit */int) (signed char)33)) <= (((/* implicit */int) (short)22311)))))))), (((unsigned long long int) 1514749161U))));
                arr_20 [i_6] [i_5] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7714))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_23 |= min((arr_19 [i_8]), (((/* implicit */long long int) arr_22 [i_7] [(signed char)6])));
                                arr_33 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)0))));
                                arr_34 [i_7] [i_8] [i_8] = ((/* implicit */short) min((arr_4 [i_7] [i_10] [(unsigned short)9]), (((/* implicit */unsigned long long int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4595007067189998889ULL)))))))));
                                var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) 9223372036854775792LL))) - (((((/* implicit */_Bool) -524288)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (signed char)4)))))) != (((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_8] [i_9] [i_11]))))))));
                                arr_35 [i_9] [i_10] [i_9] [i_9] [i_9] [i_8] [i_7] &= ((/* implicit */signed char) arr_25 [i_11] [i_11] [i_9]);
                            }
                        } 
                    } 
                } 
                arr_36 [i_7] [i_8] = ((/* implicit */signed char) ((4532013317999273601LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)8)))))));
                var_25 = ((/* implicit */signed char) (+(((unsigned int) (short)16384))));
            }
        } 
    } 
}
