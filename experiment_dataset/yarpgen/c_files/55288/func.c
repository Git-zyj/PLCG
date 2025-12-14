/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55288
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
    var_10 *= ((((/* implicit */long long int) ((/* implicit */int) (((+(9223372036854775807LL))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)34821))))))))) / (var_2));
    var_11 += ((/* implicit */_Bool) max((((max((var_2), (((/* implicit */long long int) (unsigned short)13911)))) / (((/* implicit */long long int) 2068539725U)))), (((((/* implicit */long long int) ((int) -1563307821))) ^ (var_2)))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [(_Bool)0] [(unsigned short)12]), (((/* implicit */long long int) (short)-30693))))))))));
        var_14 = (+(min((arr_0 [i_0] [i_0]), ((+(var_2))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_0] [i_0])))))) & (((/* implicit */int) ((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))) == (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-385))) : (arr_0 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)25980))) : (((/* implicit */int) ((short) ((((/* implicit */long long int) var_0)) / (arr_0 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) var_6);
        var_18 = ((/* implicit */long long int) ((unsigned short) arr_4 [i_1]));
        var_19 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1])))));
        arr_8 [i_1] = ((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
    }
}
