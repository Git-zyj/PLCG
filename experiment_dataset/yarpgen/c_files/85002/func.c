/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85002
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0 + 2] [i_0] = arr_2 [(unsigned char)2];
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 2]);
        arr_6 [i_0 + 3] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_16), (var_15)))) && (((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (26)))))))))) * (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)6859)))))) : (var_5))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) (short)-14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)13))))))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((max(((short)-14), (arr_7 [i_1]))), (((/* implicit */short) ((arr_8 [i_1]) == (arr_8 [i_1]))))))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_0), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2 + 1])) && (((/* implicit */_Bool) (short)-14)))) || (((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_8 [i_2])))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2 - 2])))))))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 3])) / (((/* implicit */int) arr_10 [i_2 - 2])))))));
    }
    var_22 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (short)-25))))))));
}
