/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6682
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_12))));
    var_14 |= ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)19)) / (var_4)));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((((/* implicit */_Bool) arr_1 [i_2 - 1])) || (((/* implicit */_Bool) arr_6 [i_4 - 1] [i_3 - 1] [i_2 + 1] [i_1 - 1])))) ? (min((arr_6 [i_4 - 1] [i_3 - 3] [i_2 - 1] [i_1 + 1]), (arr_6 [i_4 + 1] [i_3 + 1] [i_2 + 2] [i_1 + 1]))) : (((/* implicit */unsigned long long int) var_4))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)212))))) && ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)19)))) == (1035457998)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4094383258254857583ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_2 [14ULL] [i_6])))))))) / (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_10 [12LL] [(unsigned short)19] [i_1] [i_2] [(unsigned short)19] [i_6])) : (var_3))), (((/* implicit */int) var_2)))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 13412586240265346791ULL)) ? (((((/* implicit */_Bool) var_3)) ? ((+(7347361986339289403ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_5] [i_2] [i_1] [i_2]))) % (arr_5 [i_0] [15ULL] [i_0] [(unsigned char)8]))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_2))))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_2)))) ^ (((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned char)87))))))) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)165)) & (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39070))) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)10] [i_1]))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)63713))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) var_0))))) & ((+(((/* implicit */int) var_5))))))) <= (var_10))))));
}
