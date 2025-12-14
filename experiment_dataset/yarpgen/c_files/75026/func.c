/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75026
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
    var_19 = ((/* implicit */long long int) 62914560U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_0]))))) & (((unsigned int) var_10))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((unsigned int) (_Bool)0)) ^ (min((((/* implicit */unsigned int) var_2)), (4232052768U))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_3 [i_0])))));
                    var_20 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) | (((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) max((((((/* implicit */long long int) 65011712U)) % (var_11))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_6 [i_3] [i_3] [i_3]))))))));
        var_22 = ((/* implicit */long long int) arr_4 [i_3]);
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) : ((+(((/* implicit */int) var_1)))))))));
                        arr_18 [i_3] [8ULL] [i_5] [i_5] [(unsigned char)9] [i_5] = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) 4232052736U)) * (16776192ULL))), (((/* implicit */unsigned long long int) (unsigned char)229)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 62914560U)) : (var_12))))));
                    }
                } 
            } 
        } 
    }
}
