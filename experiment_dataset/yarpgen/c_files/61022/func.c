/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61022
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(short)12] [(short)12]))))) ? ((-(((/* implicit */int) arr_0 [(unsigned short)10] [(unsigned short)10])))) : (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)10] [(unsigned short)10]))))))));
                    var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(var_10))), (((14419814590749432943ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)0] [i_2] [i_1])))))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4026929482960118671ULL)) && (((/* implicit */_Bool) 14419814590749432929ULL))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned long long int) var_11))));
}
