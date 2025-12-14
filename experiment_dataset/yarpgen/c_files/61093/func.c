/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61093
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
    var_20 ^= ((/* implicit */unsigned char) ((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (max((-7686614359333757314LL), (((/* implicit */long long int) var_11)))) : (7686614359333757314LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [5]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) (unsigned char)251)) : (((/* implicit */unsigned long long int) ((int) 1612711144U))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) ((var_11) < (var_2))))));
                            var_24 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((unsigned long long int) var_12)) < (((/* implicit */unsigned long long int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_19)) | (var_8)))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_17)))))))));
                            var_25 = ((/* implicit */unsigned short) var_14);
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            } 
            var_26 ^= ((/* implicit */unsigned long long int) (-(((-2147483629) / (((/* implicit */int) (unsigned char)10))))));
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
            arr_15 [4U] [i_0] [(unsigned short)11] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned char)10))));
        }
        for (unsigned char i_5 = 3; i_5 < 19; i_5 += 4) 
        {
            arr_19 [i_0] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_13))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))));
            var_27 -= ((/* implicit */unsigned short) -7686614359333757315LL);
        }
    }
}
