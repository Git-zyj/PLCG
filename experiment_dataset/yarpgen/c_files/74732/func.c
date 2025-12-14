/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74732
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) var_10)), (((unsigned int) (unsigned short)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_11)), ((unsigned short)40275)))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) >= (((((/* implicit */int) (unsigned short)15)) | (((/* implicit */int) max(((unsigned char)242), (((/* implicit */unsigned char) (signed char)31)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned short)2048))) >= (max((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned short)18))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) -1983744961));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 2147483640);
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65520)) && (((/* implicit */_Bool) var_11))))), (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)13))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)9])) || (((/* implicit */_Bool) (unsigned short)65535))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)19640)) : (((/* implicit */int) (unsigned char)254))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_19 = (~((+(0ULL))));
                        var_20 = ((/* implicit */unsigned short) ((long long int) (unsigned char)67));
                        var_21 = var_3;
                        arr_16 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3940688669302507245LL)) ? (arr_1 [i_3] [i_2]) : (arr_1 [i_0] [i_2])));
                        var_22 = ((/* implicit */long long int) ((unsigned char) arr_15 [i_0] [i_4] [11] [(short)9] [i_0] [i_0]));
                    }
                } 
            } 
            arr_17 [i_0] [15] = ((/* implicit */long long int) 2054386559U);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_22 [i_0] [i_5] [i_5] &= ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775807LL));
                arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_2))) ? (((/* implicit */long long int) arr_21 [i_5] [i_0] [i_0] [i_0])) : (12LL)));
            }
        }
        arr_24 [i_0] = ((/* implicit */unsigned short) (-(134217664ULL)));
    }
}
