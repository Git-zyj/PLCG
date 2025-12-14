/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97178
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 &= ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((arr_11 [i_3] [i_3 - 1] [i_3 + 2] [i_3] [i_3]), (((((arr_11 [i_3] [i_3 - 1] [i_3 + 2] [i_3] [i_3]) + (2147483647))) >> (((/* implicit */int) var_4))))));
                            var_22 = ((/* implicit */short) var_15);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_4 [i_0]))));
        }
        var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_11)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_19)) >= (var_13)))))));
        var_25 = ((/* implicit */unsigned short) var_1);
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        var_26 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (var_13) : (var_13))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_27 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (17088685130380903307ULL))))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((_Bool)1) && ((_Bool)1))))));
        }
    }
}
