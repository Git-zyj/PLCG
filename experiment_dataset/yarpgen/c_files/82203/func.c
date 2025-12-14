/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82203
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 1642997077258136501ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [3LL])) ? (max((var_11), (((/* implicit */unsigned int) arr_3 [i_0])))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_2))))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 491520)) : (arr_2 [i_1])))))));
        arr_9 [2] [(unsigned char)8] |= ((/* implicit */long long int) arr_6 [4ULL]);
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 491526)) || (((/* implicit */_Bool) 491503))));
                        var_17 = ((/* implicit */short) (!(((((/* implicit */_Bool) 622462657)) && (((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3] [i_2]))))));
                        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) ((((/* implicit */int) (short)12463)) / (((/* implicit */int) arr_13 [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_0);
                    arr_25 [i_2] [i_6] [i_6] = ((/* implicit */long long int) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_30 [3ULL] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((491503) & (((/* implicit */int) (unsigned short)31981))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_29 [(_Bool)1] [i_6] [i_2] [i_8] [(_Bool)1])))) ? ((((-(((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))) - (((((/* implicit */_Bool) 491520)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (unsigned char)155)))))) : (((((_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (unsigned short)33698))))));
                                var_20 -= ((/* implicit */unsigned short) ((unsigned int) (short)-1));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)90)) / (((/* implicit */int) arr_26 [i_6] [i_2] [i_7] [i_7 + 1])))), ((+(((/* implicit */int) var_0))))));
                }
            } 
        } 
        arr_31 [i_2] = ((/* implicit */unsigned int) arr_26 [i_2] [3LL] [i_2] [i_2]);
    }
    var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) (short)1)))), (((/* implicit */int) var_2))));
    var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) & (((long long int) (short)-25843)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) min((var_9), (var_9)))))))));
}
