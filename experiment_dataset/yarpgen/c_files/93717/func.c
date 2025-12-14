/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93717
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)(-32767 - 1))), ((+(var_6)))))) ? (((/* implicit */unsigned long long int) 8838073574831478376LL)) : (arr_2 [i_1] [(_Bool)1]));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_1]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [(unsigned short)5] [i_1])))) * (((/* implicit */int) ((arr_2 [i_1] [i_1]) != (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned long long int) var_10);
    var_18 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) (unsigned char)22)), (var_6))))), (min(((+(var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
    var_19 = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_12)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(var_10)))));
}
