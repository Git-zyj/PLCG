/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64373
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
    var_18 = ((/* implicit */short) ((unsigned long long int) (-((+(var_7))))));
    var_19 += ((/* implicit */unsigned short) var_1);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) arr_2 [i_0 - 4] [i_0 + 1] [i_0 - 4])) : (var_14))))))));
                        arr_12 [i_0 - 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 4] [i_0] [i_0 - 3])) | (arr_0 [i_3])))) ? (arr_2 [i_0] [i_1] [i_3]) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)27532)))))))) ? ((((_Bool)1) ? (((arr_6 [i_3]) % (arr_1 [i_0] [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)38022)) ? (arr_6 [i_0 - 1]) : (arr_6 [i_2])))));
                        arr_13 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_15)))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_16 [(unsigned char)9] [(unsigned char)9] [(_Bool)1] [(unsigned char)9] [(signed char)9] = ((/* implicit */unsigned char) ((short) (-(arr_0 [i_0 - 1]))));
                        arr_17 [i_0 - 4] [i_0 - 2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) ((3379635263U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1432)))));
                        arr_18 [1] [1LL] [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((~(min((((5914580597342530609ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))))), (((/* implicit */unsigned long long int) (unsigned short)60300))))))));
                        var_23 = ((/* implicit */unsigned short) (!((((~(((/* implicit */int) (signed char)-50)))) >= (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_11))))))));
                    }
                    var_24 = ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)60277)) ? (((/* implicit */unsigned long long int) 3379635260U)) : (5914580597342530615ULL))))) <= ((+(arr_8 [i_0 - 1] [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */short) ((signed char) var_10));
}
