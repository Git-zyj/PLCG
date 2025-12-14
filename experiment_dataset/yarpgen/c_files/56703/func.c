/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56703
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) min((var_19), (arr_2 [i_0])));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_17))));
        arr_4 [i_0] [12U] = ((/* implicit */int) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)17054))))))) < (((max((2999077600U), (((/* implicit */unsigned int) (short)-17065)))) & (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)17054))))) % (1295889695U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) <= (2147483647)))) > (((/* implicit */int) arr_7 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((759083962U), (((/* implicit */unsigned int) min((var_18), (max((1494881854), (2147483647))))))));
        arr_9 [i_1] [i_1] |= ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3496462205U)) ? (arr_2 [i_1]) : (var_18)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (1295889698U))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2])))))));
        arr_14 [i_2] = ((/* implicit */unsigned char) arr_2 [i_2]);
        arr_15 [i_2] = ((/* implicit */int) 3496462205U);
    }
    var_23 += max((min((((((/* implicit */_Bool) (unsigned char)249)) ? (662108411U) : (2999077601U))), (((/* implicit */unsigned int) var_11)))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)14027)), ((unsigned short)6)))), (2419039321U))));
    var_24 = ((/* implicit */int) ((min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) (short)17049)) ^ (-1288158764))))) > (var_10)));
}
