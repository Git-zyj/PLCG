/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71010
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) arr_6 [i_0]);
                    arr_7 [i_0] [i_2] [i_0] = ((arr_6 [i_2 + 1]) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_17 [i_0] [i_0] = ((/* implicit */short) 5255184493689272640LL);
                        arr_18 [i_0] [9U] [i_0] [i_0] [i_0] [9U] = ((/* implicit */short) arr_16 [i_0] [i_3] [i_4] [i_5]);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3 + 1])) && (((/* implicit */_Bool) var_0))));
                            var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)764)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65521)))));
                            arr_22 [i_6] [i_3] [i_4] [i_5] [(signed char)4] [i_0] [(unsigned char)3] = ((/* implicit */long long int) arr_1 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned short) var_0);
                            arr_25 [i_0] [i_3] [i_3] [9ULL] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [10LL]))));
                            arr_26 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 2])) ? (arr_14 [i_0] [i_3] [i_4] [i_5] [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_12 [i_0] [i_4] [i_0]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) var_9);
}
