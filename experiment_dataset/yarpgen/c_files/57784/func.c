/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57784
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned int) ((((unsigned long long int) (-(((/* implicit */int) (short)-29921))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_1 [i_0] [(unsigned char)14])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_13 [i_2] [2LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_12 [i_3 + 4] [i_2] [i_2] [1ULL])))));
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_9 [(_Bool)1] [i_3 + 2] [(_Bool)1]) <= (arr_9 [(_Bool)1] [i_3 + 3] [(_Bool)1])))) >> (((((/* implicit */_Bool) (unsigned short)35921)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) : (arr_8 [i_1] [i_3 + 3]))))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */short) (unsigned char)86);
            var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)121)))))));
        }
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_12 [i_1] [i_1] [(unsigned char)8] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35336)))))))) ? (17361641172372265326ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_12 [i_1] [i_1] [(_Bool)1] [i_1])))));
    }
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (unsigned char)127))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min(((+((-(4085106943U))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))))));
}
