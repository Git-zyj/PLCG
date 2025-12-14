/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71864
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
    var_19 = ((/* implicit */unsigned short) min((((((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_11)))))))), (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 3])) != (var_3))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */int) ((((_Bool) ((int) var_10))) ? (((arr_1 [i_0 + 2]) ? ((-(22U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */unsigned long long int) var_8)) : (917504ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -910876166)) ? (((/* implicit */int) (_Bool)1)) : (-910876166)))) : (arr_3 [i_0 + 1] [i_1])))));
            arr_8 [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 2]);
        }
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_9 [i_2 + 4])))));
            var_22 += ((/* implicit */unsigned int) ((var_12) - (-3091672564648010809LL)));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_17 [i_4] [i_2] [i_4] = ((/* implicit */signed char) var_15);
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_23 = ((((/* implicit */_Bool) arr_18 [i_2 - 3] [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])));
                        arr_23 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(arr_2 [i_2 + 3])));
                        arr_24 [i_2] = ((/* implicit */unsigned int) var_11);
                        arr_25 [i_2] [i_4] [i_5] [i_4] |= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        arr_31 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (arr_10 [i_2]) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (((arr_6 [i_2]) / (((/* implicit */unsigned long long int) var_9))))));
                        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_8] [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_4] [i_4])) || (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) 910876156)) ? (var_18) : (var_15)))));
                    }
                } 
            } 
            arr_32 [i_2 + 4] = ((/* implicit */unsigned long long int) arr_19 [i_2] [i_4]);
        }
        arr_33 [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((int) arr_2 [i_2])));
    }
}
