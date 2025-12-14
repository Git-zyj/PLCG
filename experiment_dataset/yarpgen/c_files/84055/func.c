/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84055
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((4294967295U) < (0U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1 + 2] [i_0] [i_0] = ((/* implicit */short) ((((int) max((arr_5 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0 - 2] [i_0 - 2]))))) + (((/* implicit */int) ((unsigned char) arr_5 [i_1 + 2] [i_0])))));
            arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned int) 63488)) | (min((((arr_4 [i_0 - 1] [i_0 - 1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_0]))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) var_3))))));
            var_11 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)6] [(unsigned char)6])))))));
        }
        for (short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [(unsigned char)0] [i_3 - 1] [i_4] [(short)0] |= ((/* implicit */long long int) min((((unsigned int) arr_8 [6LL])), ((~(min((((/* implicit */unsigned int) var_3)), (arr_0 [10])))))));
                            var_12 = ((/* implicit */int) 33554431LL);
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_3 + 1] = ((/* implicit */unsigned char) ((int) ((arr_8 [i_0]) - (((arr_8 [i_0]) - (arr_8 [i_0]))))));
                arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3 + 1] [i_2] [i_3 + 3] [i_2 - 1])) + (((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((arr_12 [i_0] [i_2 + 1] [i_3] [i_0]) <= (-1965630200))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))))) : ((~(arr_17 [4LL] [(unsigned short)3] [i_2 + 4] [i_2 - 1] [i_0])))));
            }
            var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_9)), (((unsigned short) var_0))));
            arr_21 [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */unsigned int) (-(var_7)))) < (min((var_8), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2]))))))));
        }
        arr_22 [i_0] = ((/* implicit */int) 65504U);
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_1))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((long long int) (-(((((/* implicit */int) var_5)) - (((/* implicit */int) arr_3 [i_6] [1LL]))))))))));
        var_16 -= ((/* implicit */_Bool) min((((max((23U), (((/* implicit */unsigned int) (unsigned char)224)))) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (var_0))))), (var_6)));
    }
    var_17 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) 4294901792U)) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (16617701774289083887ULL)))))));
    var_18 &= ((/* implicit */long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) 23U)))) && ((!(((/* implicit */_Bool) var_2)))))))));
}
