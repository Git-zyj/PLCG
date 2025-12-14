/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99915
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) -1073741824))), ((~(((/* implicit */int) max(((unsigned short)26181), (var_0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((arr_0 [i_0]) > (arr_0 [i_1 + 1]))))));
                var_19 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_1]))))), (min((7535308139697534561LL), (((/* implicit */long long int) 2099131145))))))) ? ((-(255912844))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)9]))))));
                var_20 |= ((/* implicit */unsigned short) (+(max((max((arr_1 [(_Bool)1]), (2147418112U))), (((/* implicit */unsigned int) ((arr_0 [(unsigned short)2]) + (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [(unsigned short)9])))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_2 [(unsigned short)3] [i_1 + 1] [i_0])), ((short)-6794))))) : (min((arr_1 [(unsigned short)12]), (((/* implicit */unsigned int) (unsigned short)26163))))))) ? (min((((/* implicit */int) max((arr_2 [(_Bool)1] [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_0])))), ((+(((/* implicit */int) (unsigned short)423)))))) : (((/* implicit */int) (unsigned short)52906))));
            }
        } 
    } 
}
