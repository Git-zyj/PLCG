/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71837
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) 826877671U)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            var_19 -= ((/* implicit */_Bool) (short)5328);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((+(((/* implicit */int) arr_9 [16] [i_2 - 2] [i_3] [16])))), (657828676))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            var_22 = ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2 + 2] [i_2] [6ULL] [i_2] [i_2] [i_2 + 2])), (var_15))), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)5] [i_5] [(unsigned char)5] [i_5] [(unsigned short)8] [(short)4] [i_5])) ? (1411628147) : (((/* implicit */int) var_10))))))))));
                            arr_15 [i_1 - 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_5])) <= (((/* implicit */int) (unsigned char)153))))) < (min((((/* implicit */int) arr_1 [i_5] [i_3])), (1411628125)))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [i_0 + 1] [i_1 + 1] [i_3] [(unsigned short)1] [i_3] [i_5] [i_1 - 1])))) ? (((int) (~(657828686)))) : (((/* implicit */int) ((unsigned short) 1721538888))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0 - 1] [i_6] [8] = ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_2 + 2] [i_0 - 1])));
                            var_24 = ((/* implicit */signed char) 9223372036854775808ULL);
                        }
                        var_25 = ((/* implicit */int) ((_Bool) max((arr_7 [i_0] [i_1] [i_3]), (((/* implicit */unsigned short) var_7)))));
                        var_26 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) << (((((/* implicit */_Bool) -1507903960)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))))));
                    }
                    var_27 *= ((/* implicit */unsigned short) var_3);
                    var_28 -= max(((~(((/* implicit */int) ((arr_0 [i_1 + 1] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)15360)))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 3] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 2; i_7 < 11; i_7 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_5))));
        arr_25 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_11 [i_7] [i_7]))) != (((/* implicit */int) (short)15377)))))));
        arr_26 [i_7 - 1] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_24 [i_7] [i_7 + 1]), (((/* implicit */unsigned char) arr_5 [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2]))))), (min((arr_2 [i_7 - 2]), (var_14)))));
        var_30 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min(((unsigned short)28149), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_17 [i_7 - 2] [i_7] [i_7 + 1] [(_Bool)1])))), (((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? ((~(((/* implicit */int) (signed char)-94)))) : (-2095103966)))));
        arr_27 [i_7] &= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_14)))));
    }
    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7286433720525418363ULL))))))))));
}
