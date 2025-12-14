/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85673
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [9LL] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) % (((/* implicit */long long int) var_11))));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((((/* implicit */_Bool) (short)9338)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19573))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (((/* implicit */int) var_10)) : (arr_5 [i_2] [i_3 + 2] [i_3] [i_3]))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(signed char)10])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)19573)) ? (2858872215U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19573))))))))));
}
