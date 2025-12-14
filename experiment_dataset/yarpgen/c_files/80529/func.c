/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80529
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
    var_10 = ((/* implicit */unsigned long long int) -1119142936);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((var_1) + (2147483647))) << (((arr_1 [(unsigned char)13]) - (11728924201662718258ULL)))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)57153)) : (((/* implicit */int) var_2))))))), (min((((/* implicit */unsigned int) (unsigned short)57143)), (var_9)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 &= ((/* implicit */_Bool) (+(max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)8379)), (var_8)))), (max((((/* implicit */long long int) var_3)), (var_7)))))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    }
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) / (var_7)))) == (var_0))))) % (((var_2) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
}
