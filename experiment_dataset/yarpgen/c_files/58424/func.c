/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58424
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_0 [i_0 + 4]));
        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 + 3])) | (((/* implicit */int) (signed char)-25)))) % (((/* implicit */int) ((6755399441055744ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [0U] [i_1] [i_2] [i_3] = (+(min((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])), (var_7))));
                        var_16 = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 + 2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0 + 4] [i_3] [i_2] [i_0 - 1]))) * (5U))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    {
                        arr_21 [1] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((((/* implicit */unsigned long long int) var_3)) - (18053701412242120814ULL))))), (((/* implicit */unsigned long long int) var_2))));
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) (+(arr_17 [(short)10] [0U] [(short)10] [i_4] [i_6])));
                        arr_23 [i_4] = ((/* implicit */short) arr_6 [9U]);
                        var_17 = ((/* implicit */unsigned long long int) (((~(0U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0 + 1] [3U] [i_0 + 3] [i_0]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 3])))))));
                        var_18 = ((/* implicit */int) ((signed char) ((signed char) (unsigned char)247)));
                    }
                } 
            } 
        } 
        var_19 = var_14;
    }
    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */short) ((unsigned char) (unsigned char)212));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (signed char i_11 = 2; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_40 [i_9] [i_10] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((var_3) | (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U))))));
                                arr_41 [(unsigned char)11] [i_8] [(unsigned char)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)54014))));
                                var_20 = ((/* implicit */int) ((unsigned long long int) 5U));
                                arr_42 [3LL] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) << (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_51 [i_13] [i_12] [i_9] [i_8] [i_7] = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                                var_21 = var_0;
                                var_22 = ((/* implicit */unsigned short) -1158542127);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) var_1);
}
