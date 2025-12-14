/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89735
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (arr_5 [i_0] [(unsigned short)5]))));
                    arr_6 [12ULL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)90)), (var_4)))) ? (((((/* implicit */int) var_2)) - (1827281133))) : (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            arr_12 [(_Bool)1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((~(arr_0 [i_3 + 3] [i_3 + 2])))));
                            var_12 = var_7;
                            arr_13 [i_2] [(signed char)11] [i_4] = ((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2]);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_13 -= ((/* implicit */long long int) var_0);
                        var_14 = ((/* implicit */int) ((((/* implicit */long long int) var_7)) | (((((/* implicit */_Bool) 16973801129949744877ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_15 = (~(((unsigned int) var_7)));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 1) 
                    {
                        arr_19 [11] [i_2] [(unsigned short)10] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (33554430ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1827281129)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12ULL] [i_1] [1U]))) : (arr_15 [i_0] [i_0] [i_0]))))));
                        var_16 = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (unsigned short)0))))));
                        arr_20 [i_6] [i_1] [i_2] [i_6 + 2] = ((/* implicit */signed char) arr_8 [4U]);
                    }
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)-61))))))))) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_2))))));
}
