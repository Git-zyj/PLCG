/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56135
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)64472)));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((min((arr_4 [i_1 - 2]), (((((/* implicit */int) var_4)) <= (((/* implicit */int) var_4)))))) ? (((((/* implicit */int) var_8)) | ((+(((/* implicit */int) var_3)))))) : (((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) ((unsigned char) var_6))))))))));
        arr_6 [i_1] = ((unsigned short) (((!(var_10))) && (((/* implicit */_Bool) arr_5 [i_1]))));
        arr_7 [i_1] [i_1 - 1] = ((((((/* implicit */int) ((_Bool) (_Bool)1))) != (((/* implicit */int) ((unsigned short) var_5))))) && (max(((_Bool)1), ((_Bool)1))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_13 = var_7;
        arr_10 [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((_Bool) var_6))) % (((/* implicit */int) ((_Bool) (_Bool)1)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((((min(((_Bool)0), ((_Bool)1))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_9))));
        var_15 = min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)44032), (((/* implicit */unsigned short) var_7)))))))));
        var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [(_Bool)1])) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_12 [i_3]))))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_9))));
        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_3])), (var_7))))));
    }
    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
    {
        arr_15 [i_4 - 1] = ((/* implicit */_Bool) var_1);
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_4 - 2])) * (((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))) & (((/* implicit */int) arr_5 [i_4]))));
    }
}
