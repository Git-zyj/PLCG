/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76484
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                        var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_7 [i_0])))) ? (max((var_2), (arr_0 [i_0]))) : (arr_11 [(short)14] [i_1] [i_2 - 1] [i_0] [3U]))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) var_1))))) ? (arr_6 [i_0] [i_0] [i_0]) : ((~(((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) var_10);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (int i_6 = 3; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((signed char) min((arr_12 [i_6] [i_5] [i_6 - 3] [i_6 + 2]), (((/* implicit */long long int) var_9))))))));
                        var_15 ^= ((/* implicit */unsigned char) max((((var_3) ? (((((/* implicit */_Bool) arr_14 [i_5] [7ULL])) ? (arr_23 [i_6] [i_6] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((var_1) ? (3296341620U) : (((/* implicit */unsigned int) arr_11 [i_0] [i_4] [i_5] [i_5] [i_6 + 1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(short)7] [(_Bool)1] [i_5]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : (min((((/* implicit */int) (unsigned short)12)), (var_4))))))));
                        arr_24 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */signed char) (~(var_2)));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) var_6);
}
