/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69738
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [10] &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_0])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) || (((/* implicit */_Bool) 15363537886068646550ULL)))))));
            var_13 ^= ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
        }
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((-1567195873) + (1567195903)))))) + (8495375802476777427ULL)));
            arr_10 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1]))));
            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
        }
        arr_11 [7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : ((-2147483647 - 1))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_8)) != (arr_7 [i_0] [i_0] [i_0])));
        arr_13 [i_0] &= ((/* implicit */unsigned long long int) var_2);
        var_16 = ((/* implicit */short) ((((int) var_6)) / (((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) var_4))))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_5 [i_3] [i_3]))));
        var_18 &= ((/* implicit */long long int) arr_16 [i_3]);
        var_19 -= arr_5 [i_3] [i_3];
    }
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_27 [i_4] [i_5] = var_0;
                    arr_28 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_4])) - (6))))))) ? (((((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (2121961696)))) * (((unsigned int) arr_17 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-32751)) != (((/* implicit */int) (short)-32751))))))));
                }
            } 
        } 
    } 
}
