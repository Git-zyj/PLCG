/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84794
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
    var_12 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */int) ((unsigned char) -1097468252))), (((int) 511)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (short)-7813)) >= (-1128001010))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_8);
                    arr_10 [i_0] [i_0] [i_0] [(unsigned short)0] |= ((/* implicit */unsigned long long int) ((int) arr_6 [i_2] [i_2] [i_2] [i_2 - 3]));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1097468229)) & (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) 1097468235)) : (arr_7 [i_2 - 4] [i_2 - 4] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_15 [i_0 + 3] [i_3 + 3] [i_0 + 3])))));
                    var_14 ^= ((/* implicit */int) ((((5269128367439354533ULL) <= (((/* implicit */unsigned long long int) 1737532028)))) ? (5269128367439354533ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 322907090U)) ? (1444113031) : (-1))))));
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((int) arr_0 [i_5] [i_5]))))) ? (((/* implicit */int) (((~(((/* implicit */int) (short)-12227)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5])))))))) : (((((/* implicit */int) var_1)) ^ (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)-12896))))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) arr_11 [i_5]);
        arr_23 [4U] |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (short)31487)))));
    }
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_5))))) * (var_4)))) ? (((long long int) (-(var_3)))) : (((/* implicit */long long int) var_9))));
}
