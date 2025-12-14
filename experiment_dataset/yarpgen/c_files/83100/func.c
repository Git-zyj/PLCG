/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83100
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (((+(min((((/* implicit */unsigned int) (unsigned char)63)), (3301656726U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))))))));
                    var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)-23979)) : (((/* implicit */int) (unsigned char)205))))))) : (((((/* implicit */long long int) arr_2 [i_0])) & (arr_5 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_11 [i_3 + 3] [i_5]))) * ((-(((/* implicit */int) (short)29584))))));
                    var_13 = ((/* implicit */unsigned char) (((~((~(134217727U))))) << ((((~(arr_15 [i_3 + 4] [i_3] [(unsigned char)5] [i_5]))) - (5433962803453316633LL)))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), ((unsigned char)21)))))))) ? (((/* implicit */long long int) ((int) ((var_1) / (((/* implicit */int) (unsigned char)58)))))) : (var_9)));
}
