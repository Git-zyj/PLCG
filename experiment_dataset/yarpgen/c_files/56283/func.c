/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56283
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
    var_13 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) var_7))))), (max((6200540662940146006LL), (((/* implicit */long long int) (unsigned short)0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)60890)))), (((/* implicit */int) max((max((((/* implicit */unsigned short) (unsigned char)130)), ((unsigned short)65532))), (((/* implicit */unsigned short) (_Bool)1))))))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_0 + 2] [i_4])) ? (6200540662940146006LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_4] [i_1])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2] [(short)6] [i_2] [5U]))))))) : (min((15790251201424611208ULL), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1])))))))));
                                arr_13 [(unsigned char)7] [i_1] [3LL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 3976164626883154362ULL);
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_6 [i_4 - 2] [i_4 - 2] [i_1]), (arr_6 [i_4 + 1] [i_4 + 1] [i_1])))) + (((((/* implicit */_Bool) (short)-8076)) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)51))))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)3] [i_1 + 2] [i_1 + 2])) ? (arr_8 [i_0 + 3] [i_0 + 3] [i_1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 3])))) ? (max((((/* implicit */int) (short)-2241)), (arr_8 [i_0 + 3] [i_1] [i_0 + 3]))) : (((((/* implicit */int) (unsigned short)65528)) | (((/* implicit */int) (unsigned short)4)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_12);
}
