/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73645
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
    var_15 ^= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (12786776232687595584ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) 928890987U)) ? (5659967841021956032ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27782)))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((int) (unsigned short)8226)))));
                        var_17 = ((/* implicit */int) arr_4 [3] [i_1] [3] [i_3]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_6))) ? (arr_1 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((-939167437) >= (((/* implicit */int) (signed char)42))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))), (((unsigned long long int) (~(((/* implicit */int) (short)12813)))))));
                        arr_13 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((0LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-78)))));
                        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) arr_10 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_4] [i_4])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (min((1992147778), (((/* implicit */int) arr_4 [i_0] [(short)5] [i_2] [(short)8]))))))));
                    }
                    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (3463711190U) : (arr_3 [i_1] [i_1] [i_2]))), ((+(236887186U)))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1788514533U)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (min((((/* implicit */unsigned long long int) 817388324U)), (max((((/* implicit */unsigned long long int) var_14)), (12786776232687595593ULL))))))))));
                    var_22 = ((_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    } 
}
