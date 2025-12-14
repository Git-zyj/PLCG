/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84513
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (12153766580052519627ULL) : (11195043227685224469ULL)));
    var_11 = ((/* implicit */unsigned char) var_9);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((((/* implicit */_Bool) min((2739960435792708390ULL), (((/* implicit */unsigned long long int) 1748480533U))))) ? (((((/* implicit */_Bool) 3526808317U)) ? (((/* implicit */unsigned long long int) 1745861398)) : (18ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (16603671U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1473545569433630744LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)10] [i_1] [i_1]))) : (var_1)));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1])) - (-606178494)))) ? (((/* implicit */int) (unsigned char)142)) : (1153661859)))) + ((+(min((11195043227685224469ULL), (10502893398162822729ULL)))))));
            }
        } 
    } 
}
