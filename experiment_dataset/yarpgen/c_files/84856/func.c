/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84856
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18348)) ? (((/* implicit */int) (short)18348)) : (((((/* implicit */int) (unsigned short)65195)) - (((/* implicit */int) (short)18358))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2923124729694176617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (min((((((/* implicit */_Bool) var_0)) ? (2008109074) : (((/* implicit */int) (short)18328)))), (((/* implicit */int) (signed char)28))))));
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        for (short i_2 = 3; i_2 < 7; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-25613)) || (((/* implicit */_Bool) 4225306559325332154ULL)))))));
                        var_19 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (signed char)29)), (arr_11 [i_2 - 2] [i_2] [i_3] [i_1] [i_2] [i_3]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((~(arr_15 [i_1 + 1] [i_2 + 2]))) != (((((/* implicit */int) arr_6 [i_2])) | (((/* implicit */int) (signed char)14))))));
                        arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_18 [i_1] [i_1] [i_3] [i_1] [i_5] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned char)235))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_20 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)18331)) | (((/* implicit */int) (short)-18328)))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 8U))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) < (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)234))))) / ((-(arr_20 [i_2] [i_2] [i_6] [i_6])))))));
                                var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_19 [i_3] [i_6 + 1] [i_3] [i_6]), (arr_19 [i_3] [i_6 + 1] [i_7] [i_7]))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_2] [i_1 + 2] [i_1 + 2] [i_1 - 1])) <= ((~(((/* implicit */int) (signed char)34))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
