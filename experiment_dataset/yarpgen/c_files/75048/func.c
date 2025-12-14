/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75048
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [6ULL] [i_0] |= ((/* implicit */unsigned long long int) ((_Bool) min((arr_6 [i_2] [i_1] [2ULL]), (arr_6 [i_0] [i_1] [i_1]))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (var_16)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = 4046613900052424245LL;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_21 [i_3] [i_4] [i_5] [i_5] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14007)) ? (4046613900052424245LL) : (2303591209400008704LL)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_25 [i_3] [(unsigned short)7] [i_3] [i_7] [i_7] [i_3] = ((/* implicit */unsigned int) ((((arr_2 [i_3 - 2] [i_3 + 1] [i_3]) + (9223372036854775807LL))) >> (((var_14) - (3936557764U)))));
                            var_23 = (+(((/* implicit */int) ((short) arr_6 [i_3] [i_5] [i_7]))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3] [i_5] [i_5])) + (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_5] [i_6] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_4] [i_4] [i_4] [i_7] [7U])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_10))))) : (((long long int) (unsigned short)48908))));
                            arr_26 [i_3] [i_4] [i_5] [i_3] [i_3] [i_3 - 2] [i_6] = ((/* implicit */short) (~(((-4046613900052424246LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5])))))));
                        }
                        for (long long int i_8 = 2; i_8 < 12; i_8 += 4) 
                        {
                            arr_29 [i_3] [i_3] [i_5] [i_5] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_3 - 2] [i_8 - 1])) >> (((arr_2 [i_3 - 2] [i_3 - 2] [i_8 - 1]) + (7483494802247590470LL)))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((arr_20 [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 1]) >> (((arr_5 [i_3 - 2] [i_4] [i_5]) - (371076892U))))))));
                        }
                        var_26 = ((((((/* implicit */unsigned long long int) -4046613900052424266LL)) / (arr_7 [i_6]))) / (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3 + 1] [i_5])));
                        arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_3 + 1] [i_5])) | (((/* implicit */int) var_18))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            arr_38 [i_9] [i_9] [i_5] [i_5] [i_4] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_3 + 1]))));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 - 3] [i_4]))));
                            var_28 += ((/* implicit */unsigned int) (+(arr_31 [i_3 - 1])));
                            arr_39 [i_4] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_33 [i_10 + 2] [i_4] [i_9] [i_3] [i_3 + 1]);
                        }
                        arr_40 [i_3] [i_4] [i_5] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3 + 1])) ^ (((/* implicit */int) arr_22 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_8);
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)141))))) / ((~(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
}
