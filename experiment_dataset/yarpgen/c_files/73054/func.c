/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73054
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) (unsigned char)126);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_18 = ((min((((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])), (2147483647))) != (((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2])) >= (((/* implicit */int) (!(var_8))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (short)-418);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)12658))))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_28 [i_5] = ((/* implicit */unsigned char) (unsigned short)40558);
                        var_20 *= ((/* implicit */short) -2147483647);
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_24 [i_6] [i_7] [i_6]) / (((/* implicit */long long int) 268435424)))))));
                        var_22 = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
    }
}
