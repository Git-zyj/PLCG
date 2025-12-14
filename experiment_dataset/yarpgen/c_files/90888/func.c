/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90888
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
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) -1)))) && (((/* implicit */_Bool) ((var_2) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */int) 2263107100575818183LL);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) max((min((((/* implicit */unsigned int) arr_4 [i_0])), (3069113406U))), (max((1225853892U), (1225853884U))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) 3069113435U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [6LL])))) > ((-(((/* implicit */int) (_Bool)0))))))), (((((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0])))) | (((/* implicit */int) max((arr_4 [i_0]), (arr_1 [i_0]))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -302191028)) ? (6549187670361637839LL) : (15LL)));
                var_15 = (-(((/* implicit */int) (_Bool)0)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_4)), ((short)-4540)))))))));
    var_17 = ((/* implicit */int) (((~(((var_11) ^ (-19))))) > (((/* implicit */int) ((((1200194797) >= (var_12))) || (((/* implicit */_Bool) ((int) var_6))))))));
}
