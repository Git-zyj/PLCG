/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86114
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 9062954775623969037LL);
    }
    var_15 = ((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-122)), (1972358350)))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)22)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopNest 2 */
    for (long long int i_1 = 4; i_1 < 22; i_1 += 2) 
    {
        for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            {
                arr_9 [i_2] [i_1 - 3] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))))))));
                var_17 += ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) > (arr_6 [i_2]))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned int i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4])) : ((((-(((/* implicit */int) arr_13 [i_1] [13] [i_1 + 1] [i_1])))) / (((/* implicit */int) var_5))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) -1972358375)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (arr_11 [i_4] [i_1]))))) - (((((long long int) 2237262793U)) % (((/* implicit */long long int) arr_12 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1 - 2] [i_1])))))))));
                            /* LoopSeq 3 */
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                arr_18 [i_1] [i_2 + 2] [21LL] [i_4] [i_5] [i_1 - 1] [22LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((int) arr_6 [i_5])) | (((/* implicit */int) var_12))))) ^ (((((/* implicit */_Bool) 5331231379279333756LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119)))))) : (arr_12 [i_1] [i_2] [i_1] [i_2 + 1] [i_3])))));
                                arr_19 [i_1 + 1] [i_4] [i_3] [(_Bool)1] [(_Bool)1] = (~((~(((/* implicit */int) (unsigned char)255)))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned int) ((1945632816U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [6LL] [i_4] [i_3] [12U] [i_6] [i_6] [13LL])))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) var_0)))))));
                                arr_24 [i_3] = ((/* implicit */int) 1786434663U);
                            }
                            for (long long int i_7 = 3; i_7 < 20; i_7 += 2) 
                            {
                                arr_28 [(signed char)7] [i_4 - 1] [11LL] [i_2] [i_1] = ((/* implicit */unsigned short) (signed char)-16);
                                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) arr_14 [(unsigned char)22] [i_2 - 2] [22] [i_3] [i_2 - 2] [i_2 - 2])) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_20 [i_7 + 2] [i_4 + 1] [i_2 - 2] [i_1 + 1] [i_1])))) : (((/* implicit */int) ((_Bool) ((long long int) 4107103128U))))))));
                            }
                            arr_29 [i_1 - 3] [i_2 - 1] [(unsigned short)7] &= ((/* implicit */long long int) min(((~(((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [(signed char)19] [i_2 + 3] [i_1 + 1] [i_1 + 1])))), ((~(1972358323)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */int) (signed char)-36)) < (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1] [(unsigned char)22] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_23 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1]))))));
            }
        } 
    } 
}
