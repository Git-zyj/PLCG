/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88000
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((5575678659966909299ULL) * (((/* implicit */unsigned long long int) 0)));
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            for (short i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                {
                    var_13 = (~(((/* implicit */int) (unsigned char)94)));
                    arr_18 [i_5] = ((/* implicit */int) arr_11 [i_3] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (unsigned short)9255);
                                var_15 &= ((/* implicit */unsigned int) (unsigned char)94);
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 4336436013227318208ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (max((((/* implicit */unsigned long long int) ((unsigned int) 14107346893855557974ULL))), (max((arr_14 [i_7] [5ULL] [i_3]), (12871065413742642306ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */unsigned int) var_3);
                        arr_29 [i_5] = var_6;
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 8U))));
                        var_19 = ((/* implicit */unsigned long long int) arr_17 [i_9]);
                    }
                }
            } 
        } 
    } 
}
