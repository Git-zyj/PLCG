/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98495
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_4);
        arr_3 [i_0] = ((/* implicit */long long int) var_11);
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 1]))));
                arr_9 [i_0 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3849480805U)) ? (arr_5 [i_0 + 1] [i_0 - 1]) : (arr_5 [i_0 + 1] [i_0 - 1])));
                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1596061671079786340LL)))) || (((/* implicit */_Bool) arr_5 [i_1] [i_2]))));
                arr_10 [i_0 - 1] [i_1] [i_1 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 2]))));
                var_14 ^= ((/* implicit */short) (~(arr_4 [i_0 + 2])));
            }
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) : ((+(arr_7 [i_0 + 1] [i_1] [i_0])))));
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((arr_12 [(unsigned short)12] [i_0 + 2] [i_1]) != (((/* implicit */int) var_0))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_17 [i_4] [i_4])) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    arr_18 [i_0] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                }
                arr_19 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3849480805U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        }
        for (int i_5 = 4; i_5 < 17; i_5 += 4) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5 - 3] [17]))))) ? (var_4) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_5] [i_0] [i_5])))));
            arr_23 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 - 1]))));
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_27 [i_6] |= ((/* implicit */long long int) (((~(var_2))) * (((/* implicit */unsigned long long int) ((arr_17 [i_6] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (var_6))))));
            var_19 -= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)-1))))));
            arr_28 [i_6] [i_0] = ((/* implicit */_Bool) var_8);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_36 [i_0] [i_6] [i_0] [i_8] &= ((/* implicit */_Bool) (unsigned short)44050);
                        arr_37 [i_0] [i_6] [(unsigned short)4] [i_8] [i_8] [i_6] &= ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        }
    }
    var_20 = ((/* implicit */unsigned short) ((min((var_8), (max((var_2), (((/* implicit */unsigned long long int) var_11)))))) & (((/* implicit */unsigned long long int) ((((_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3300)) * (((/* implicit */int) (_Bool)1))))) : (((unsigned int) (_Bool)1)))))));
}
