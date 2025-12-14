/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6668
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = 336321543;
        arr_3 [12] [i_0] &= ((/* implicit */unsigned char) 10960670);
        var_11 = ((/* implicit */short) 0LL);
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 3178166826180729242LL)) ? (4294967281U) : (((/* implicit */unsigned int) -494380211))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44519)) ? (((/* implicit */int) (unsigned short)44507)) : (1982811645)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (unsigned short)44526)))) : (((/* implicit */int) (unsigned short)6046))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) (_Bool)0);
                    var_15 = ((((/* implicit */_Bool) 1060822159U)) ? (-610444909) : (((/* implicit */int) (unsigned char)206)));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) (unsigned short)21016)) : (((/* implicit */int) (signed char)-118))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            {
                arr_23 [i_7] [i_7 + 2] [(unsigned short)3] = ((/* implicit */unsigned int) 8089995666233102746LL);
                /* LoopNest 3 */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) 3076740525U);
                                var_17 = ((/* implicit */unsigned int) (signed char)-118);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = 610444908;
}
