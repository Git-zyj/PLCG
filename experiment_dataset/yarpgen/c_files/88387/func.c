/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88387
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned char)122))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (var_12) : (((/* implicit */int) (_Bool)1))))))))));
                    var_22 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-32748)))))));
                    arr_7 [i_1] [i_1] [i_2 - 1] = ((/* implicit */_Bool) var_17);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)27)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748))) / (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [(short)5] [i_1] [i_0]), ((short)-32755))))))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) 3159414413U))));
}
