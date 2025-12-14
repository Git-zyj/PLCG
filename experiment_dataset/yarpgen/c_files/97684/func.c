/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97684
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_10 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_7 [i_0] [i_2] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))) > (var_1)))) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_0]))));
                                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 549755813888LL))));
                                arr_12 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (arr_2 [i_0] [i_1] [i_3])))) ? (arr_11 [i_3 + 2] [i_3 + 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_9 [i_0] [i_2 + 2] [i_2 + 1] [i_3] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_2])) | (((/* implicit */int) var_7))))) & (var_4))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_7 [i_3] [i_3] [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (var_2)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [i_0] [i_0]))) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (unsigned char)168)))))) : ((~(((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5648283075084712574ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
                    {
                        var_14 |= ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_2 + 1]);
                        var_15 += ((/* implicit */_Bool) (signed char)0);
                        var_16 += (~((((_Bool)1) ? (arr_1 [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_1])))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = arr_14 [i_2] [i_1] [i_2] [i_6] [i_2];
                        arr_18 [i_6] [i_1] [i_2] [i_6] [i_2] = ((((/* implicit */_Bool) (~(arr_6 [i_6 - 2] [i_1])))) ? (((((/* implicit */_Bool) ((unsigned short) arr_16 [i_1] [i_1]))) ? (max((var_3), (((/* implicit */long long int) (unsigned short)40242)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6 + 2])) || (((/* implicit */_Bool) 5648283075084712574ULL))))), (((int) var_5))));
                        var_17 = ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_6] [i_0] [i_6]))))))) ? (((((/* implicit */int) arr_0 [i_1] [i_0])) + (((/* implicit */int) arr_16 [i_1] [i_1])))) : ((-((+(((/* implicit */int) (unsigned short)40242)))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (549755813888LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_7] [i_0] [i_1] [i_1] [i_1] [i_0])) - (((/* implicit */int) (_Bool)1))))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) ? (((((/* implicit */int) arr_13 [i_0] [6U] [i_2] [i_2] [i_2] [i_7 - 1])) + (((/* implicit */int) (unsigned short)25293)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= ((-2147483647 - 1)))))))) ? (((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1)))))) : (((((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 2] [i_7 + 1] [i_2 + 1] [i_7 - 1] [i_7 + 1])) ^ (((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_7 - 2] [(unsigned short)1] [i_7] [i_7 + 2])))))))));
                    }
                    var_19 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)244))))) >> (((/* implicit */int) (_Bool)1))))) & (2495690452U)));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)60719), (((/* implicit */unsigned short) (_Bool)1))))) * (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_8))))));
}
