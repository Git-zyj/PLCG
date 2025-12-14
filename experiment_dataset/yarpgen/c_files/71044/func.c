/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71044
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
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */short) (-(min(((+(((/* implicit */int) (unsigned short)8833)))), (min((var_5), (var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((((/* implicit */short) min((arr_1 [i_1]), (arr_1 [i_0])))), ((short)-4096)));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17780))) : (var_7)))) || ((!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)2))))))))));
                var_19 *= ((/* implicit */short) (-((-(((/* implicit */int) arr_4 [i_0]))))));
                arr_6 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25651)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])) : (var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))));
            }
        } 
    } 
}
