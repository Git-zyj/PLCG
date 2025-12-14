/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83430
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_10 ^= ((/* implicit */_Bool) arr_3 [(unsigned char)4] [(unsigned char)4] [i_1]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 6; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned short) (unsigned char)80);
                            var_12 *= ((/* implicit */unsigned long long int) ((int) (unsigned char)235));
                            arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) (_Bool)1);
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_14 *= ((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))));
                            var_15 ^= ((/* implicit */signed char) 0LL);
                        }
                        var_16 = ((/* implicit */signed char) ((unsigned short) var_2));
                        arr_17 [i_0] [i_1] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_2 + 1] [i_3 + 4]) != (((/* implicit */int) (signed char)7))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (int i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            var_17 *= (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6 + 3] [i_6] [5] [i_0])) : (arr_18 [i_6]))));
            var_18 *= ((/* implicit */int) ((unsigned short) (_Bool)1));
            var_19 ^= ((/* implicit */unsigned long long int) (unsigned char)1);
            var_20 = ((/* implicit */long long int) var_3);
        }
        for (unsigned char i_7 = 3; i_7 < 8; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (int i_8 = 4; i_8 < 8; i_8 += 2) 
            {
                for (long long int i_9 = 1; i_9 < 8; i_9 += 1) 
                {
                    for (unsigned short i_10 = 2; i_10 < 7; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((long long int) var_7))));
                            var_22 = ((((/* implicit */_Bool) -6137592823805387107LL)) ? (((/* implicit */int) arr_22 [i_0] [i_10 - 2] [i_8 + 1])) : ((+(((/* implicit */int) (unsigned short)16522)))));
                            arr_34 [i_10] [i_7] |= ((/* implicit */short) (~(arr_7 [i_9] [i_10] [i_0])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_11 = 3; i_11 < 8; i_11 += 1) 
            {
                for (int i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    for (short i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-21))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)-7668)) ? (6137592823805387119LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (5860088465194522079LL))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 520093696)) ? (((/* implicit */int) (unsigned short)64811)) : (((/* implicit */int) (unsigned char)255))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 1; i_14 < 9; i_14 += 1) 
        {
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_14] [i_0]);
            arr_50 [(unsigned char)6] [(unsigned char)6] |= ((/* implicit */int) ((arr_28 [i_0 - 1] [i_0 - 1] [i_14 - 1] [i_0 - 1] [i_0 - 1] [i_14]) & (((/* implicit */long long int) arr_23 [i_14 + 1] [2U] [i_0 - 1]))));
            var_26 -= ((/* implicit */long long int) var_1);
        }
    }
    var_27 = var_5;
    var_28 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (11U)))) ? (((((/* implicit */int) var_0)) & (-520093705))) : (((/* implicit */int) var_6)))));
}
