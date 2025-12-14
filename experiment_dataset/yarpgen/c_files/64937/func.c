/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64937
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)150)))))))));
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) >= (1706646722U))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)1636)), (1422885398))) / (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 201326592)) ? (-1) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((arr_6 [i_1]), ((unsigned short)61087)));
        var_20 = ((/* implicit */unsigned char) min((min(((+(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) arr_5 [i_1])))), ((-(((/* implicit */int) max((var_16), (arr_2 [i_1]))))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_17), (var_6)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (0U))))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20242))))) == (var_1)))))));
}
