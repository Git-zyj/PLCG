/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56982
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = min((((/* implicit */int) ((((int) (short)1)) >= (-17524619)))), ((((-(((/* implicit */int) (short)-32751)))) << (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) > (((/* implicit */int) (short)-32756))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_1]))) % (arr_2 [i_0] [i_0] [0ULL]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2))))))))));
                var_22 = ((/* implicit */short) max((var_22), (((short) ((((((/* implicit */_Bool) (short)1)) || (((/* implicit */_Bool) (short)-32736)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (arr_4 [i_1] [i_1])))))))));
                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((4294967294U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))))) >= ((+(min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_5 [(_Bool)1] [i_0] [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) max((((/* implicit */int) ((min((var_16), (((/* implicit */int) (short)-4634)))) > ((+(((/* implicit */int) (short)-15))))))), (((var_10) >> (((var_17) - (3406626120872163210ULL)))))));
    var_25 = ((max((((var_9) ? (var_10) : (((/* implicit */int) (short)32755)))), (((/* implicit */int) (short)32751)))) < ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-32753))))))));
}
