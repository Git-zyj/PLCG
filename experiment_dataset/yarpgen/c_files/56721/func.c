/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56721
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
    var_15 = ((/* implicit */_Bool) (signed char)-41);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned long long int) (_Bool)1);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) (~(arr_6 [i_1] [i_1])));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) var_1)))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_3]);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_1] [i_1]) : (((/* implicit */long long int) arr_10 [i_1] [8] [2ULL])))));
                            var_23 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_14 [i_3 - 1] [i_3] [(unsigned short)4]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_25 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)114)) : (((((/* implicit */_Bool) (signed char)-31)) ? (var_10) : (arr_23 [i_1] [i_1] [i_1] [(signed char)16] [i_2] [i_1]))));
                            var_26 = ((/* implicit */short) (-(arr_20 [i_7] [i_7] [i_6] [i_3] [i_2] [i_1])));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [5LL] [i_2] [i_8])) < (((/* implicit */int) arr_14 [i_1] [i_8] [i_8]))));
                arr_28 [i_1] [i_2] [i_8] [i_1] = (~(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_8] [i_2])));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_24 [i_8] [i_2] [i_1]))))));
            }
            arr_29 [(signed char)0] [(unsigned char)8] = ((/* implicit */unsigned int) var_13);
            var_29 = ((/* implicit */unsigned short) (~(((47215500U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        }
    }
}
