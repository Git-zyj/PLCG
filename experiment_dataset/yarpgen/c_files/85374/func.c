/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85374
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
    var_10 += ((/* implicit */short) ((unsigned short) min((((/* implicit */short) var_2)), ((short)10024))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = 1210741834;
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max((arr_7 [i_0]), (((((/* implicit */_Bool) (unsigned short)46323)) ? (((/* implicit */int) (unsigned short)10376)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_6), (((((/* implicit */_Bool) 5895144910172258771LL)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (short)-1))))))), ((+(var_0)))));
}
