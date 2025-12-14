/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87711
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(short)4] [i_1] [(short)4] = max((((((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (4962890495746660163ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)160))))), (arr_1 [i_0 + 1])))));
                var_19 = ((/* implicit */unsigned short) ((max((((((/* implicit */long long int) arr_2 [i_0])) - (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) || (((/* implicit */_Bool) -2147483639))))))) <= (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) arr_4 [i_0 + 1])), (((/* implicit */unsigned short) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_12))) / ((-(var_3)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) (((-(16711680))) / (((/* implicit */int) min(((unsigned short)33876), (((/* implicit */unsigned short) var_13))))))))));
    var_22 = ((/* implicit */unsigned short) (+(-2690735420730843094LL)));
}
