/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6463
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
    var_12 = var_6;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (+((+(((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((~(arr_7 [i_0] [i_1] [i_0] [i_3]))) ^ (((arr_8 [i_0] [i_2] [i_2] [i_3] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (var_1)))))) | ((~(arr_5 [i_1] [i_1 + 1] [i_1 + 1])))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 783267611U))));
                            var_16 = ((/* implicit */unsigned int) var_2);
                            var_17 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_3 [i_3] [i_3] [i_4])), (max((var_1), (((/* implicit */long long int) arr_6 [i_0] [i_0])))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) (+(((arr_6 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19)) * (((/* implicit */int) arr_0 [i_3] [i_2]))))) : (var_5)))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28)) ? (min((var_11), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((long long int) var_8)))));
                            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])))))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2] [i_0])) ? ((+(((((/* implicit */_Bool) (unsigned char)142)) ? (2240241970U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-126)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)89)))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_1 + 1] [i_3] [i_2 - 1])), ((-(arr_16 [i_1 + 1] [i_3] [i_2 + 1]))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) (-((~(2240241988U)))));
                            var_27 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_0 [i_1 + 1] [i_2 - 1])) != (((/* implicit */int) arr_0 [i_1 + 1] [i_2 + 1]))))));
                            var_28 ^= ((/* implicit */unsigned short) (+((-(((arr_14 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_14 [i_7] [i_2 - 1] [i_0] [i_2 - 1] [i_1] [i_0] [(unsigned char)5]))))))));
                        }
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)-37)))), ((+(((/* implicit */int) var_7)))))))));
                        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2054725337U)));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
        } 
    }
}
