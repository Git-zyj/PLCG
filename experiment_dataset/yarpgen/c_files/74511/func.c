/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74511
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) (unsigned short)0);
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 - 3]))))))));
            arr_6 [i_0] = min((((/* implicit */int) ((((/* implicit */int) ((signed char) var_17))) >= (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13716))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_8)))) : (((/* implicit */int) (unsigned short)65532)))));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            var_23 = ((((/* implicit */_Bool) (signed char)0)) ? (((long long int) (signed char)-5)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (2864461841198671647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
            arr_13 [(unsigned short)18] [i_0] = ((-9074195186928310160LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)113))));
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (unsigned short)0));
            var_26 = ((/* implicit */long long int) var_13);
        }
    }
    var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48529)) ^ (((/* implicit */int) (signed char)127))))))))));
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((unsigned short) var_14))))));
}
