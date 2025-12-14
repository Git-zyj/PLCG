/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81153
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */unsigned int) (~(((var_9) / (((/* implicit */int) var_10))))))) % ((+(max((var_1), (((/* implicit */unsigned int) 2029531907)))))))))));
    var_13 = ((/* implicit */short) (!(((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (short)-29104)))) == (((/* implicit */int) ((((/* implicit */int) (short)-29119)) <= (((/* implicit */int) (short)10)))))))));
    var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */int) ((signed char) var_11))), (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) 2009646866031556477LL);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-29112)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (6106122584516973915LL))))));
        arr_4 [i_0] [2LL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-29119)) : (((/* implicit */int) (short)-29104))))) == (arr_1 [i_0 - 2])));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        arr_7 [6] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (short)29112)))));
        var_15 = ((/* implicit */int) (unsigned char)229);
    }
    var_16 -= ((/* implicit */short) var_4);
}
