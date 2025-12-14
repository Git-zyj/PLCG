/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91564
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (unsigned char)120);
                                var_15 = ((/* implicit */unsigned short) (unsigned char)127);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0 + 3] [(signed char)3] = ((/* implicit */signed char) ((((((/* implicit */int) (short)7)) < (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [4LL] [i_2 + 1])))) ? (max((17261263796670659728ULL), (((/* implicit */unsigned long long int) (unsigned short)6827)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((((arr_16 [i_5] [i_5]) ? (((/* implicit */int) (short)-23582)) : (((/* implicit */int) arr_16 [i_6] [i_6])))) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_5])) + (61)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_17 = arr_25 [i_5] [i_5] [i_5];
                            var_18 += ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (signed char i_11 = 2; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_35 [i_5] [i_11] [16ULL] [(signed char)21] [16ULL] = var_5;
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_17 [i_5]))))));
                                arr_36 [i_5] [i_6] [i_6] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_11] [i_5])) ? (((/* implicit */int) arr_29 [i_5] [i_10] [i_11 - 2])) : (((/* implicit */int) (_Bool)1))))) ? (arr_25 [i_11] [i_11] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)147)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-124)))))));
    var_21 ^= ((/* implicit */signed char) (+(2225737737725100397LL)));
    /* LoopNest 2 */
    for (unsigned short i_12 = 3; i_12 < 13; i_12 += 3) 
    {
        for (short i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)123))));
                arr_44 [i_13] = (unsigned short)18271;
            }
        } 
    } 
}
