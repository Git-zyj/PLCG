/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64508
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
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_10 -= 4969651939883398195ULL;
                        var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) (short)8102)), (min((arr_0 [8ULL] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_12 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 4117748167U)), (arr_2 [i_4] [i_2] [i_1])));
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(max((min((((/* implicit */unsigned long long int) var_6)), (var_0))), (min((((/* implicit */unsigned long long int) (short)-1540)), (arr_5 [i_0] [(short)6]))))))))));
                        var_14 -= ((/* implicit */short) (((+(((/* implicit */int) arr_4 [i_4] [i_2] [i_1] [i_0])))) > (((/* implicit */int) var_7))));
                        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_7))), (var_2)))) || (((/* implicit */_Bool) var_4))));
                    }
                    var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)95))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) ^ (((/* implicit */int) min((arr_18 [(_Bool)1] [i_6] [i_8] [i_9]), (((/* implicit */unsigned short) arr_19 [i_6] [i_6] [i_8] [i_9])))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) arr_18 [i_6] [i_7] [i_7] [i_9])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned char)51)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_15 [i_5 - 2] [i_5]))))));
                                var_18 ^= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned char)92))))));
                            }
                        } 
                    } 
                    arr_26 [i_5] [i_5 + 3] [i_7] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (min((((var_6) ? (((/* implicit */int) arr_13 [i_7])) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7])) <= (((/* implicit */int) var_6)))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_18 [i_6] [i_5 - 2] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned short) arr_13 [i_5 + 1]))))), ((~(((/* implicit */int) arr_13 [i_5 + 3]))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (arr_14 [i_6] [i_5 - 2] [i_5 - 1]) : (arr_14 [i_7] [i_5 + 4] [i_5]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_6] [i_5 + 3] [i_5 + 2]))))))));
                }
            } 
        } 
    } 
}
