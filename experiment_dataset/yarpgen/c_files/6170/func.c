/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6170
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
    var_13 = ((/* implicit */_Bool) (+(max(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_1)) - (46064)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)55518)), (16435719868393236138ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) max(((unsigned short)55518), (var_11)))) ? ((-(((/* implicit */int) (unsigned short)0)))) : ((~(((/* implicit */int) var_7)))))) : (max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) var_8))))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                    var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_1]))) ? (((((/* implicit */_Bool) arr_3 [i_1] [10ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) arr_1 [i_0])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_21 [(signed char)5] [i_5] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) ((_Bool) (unsigned short)59812))) | (((/* implicit */int) ((_Bool) arr_11 [i_3] [i_5]))))), (((/* implicit */int) max(((unsigned short)55510), ((unsigned short)33850))))));
                            var_16 ^= max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64569))) * (28766211495441945ULL))) >> (((((/* implicit */int) (unsigned short)23182)) - (23178))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0] [i_5])) != (((/* implicit */int) arr_1 [i_5])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)87))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (max((16435719868393236126ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))));
        }
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)4])))))) & (((/* implicit */int) arr_11 [i_0] [i_0])))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [(signed char)6]))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (arr_22 [i_7] [i_7])));
        var_20 += arr_22 [i_7] [i_7];
    }
}
