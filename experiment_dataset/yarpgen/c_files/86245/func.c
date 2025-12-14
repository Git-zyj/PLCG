/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86245
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) -1864766314);
        var_13 *= (short)38;
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_14 |= ((/* implicit */_Bool) (unsigned char)60);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_12 [i_2] = (unsigned char)1;
                        arr_13 [i_2] = ((/* implicit */int) (unsigned char)0);
                        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)43);
                        arr_15 [(_Bool)1] [i_4] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (short)32767);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2] = ((/* implicit */short) -960247337);
                                var_15 = ((/* implicit */short) (unsigned char)1);
                                arr_23 [i_2] [i_1] [i_5] [i_5] [i_2] = ((/* implicit */int) (unsigned char)187);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) (unsigned char)59);
                    var_17 = ((/* implicit */_Bool) -1367362885577885455LL);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) var_7);
}
