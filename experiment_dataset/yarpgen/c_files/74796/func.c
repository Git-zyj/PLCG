/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74796
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) max((-850666059), (((/* implicit */int) (short)29617))))) : ((-(var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (11443609141820276212ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) << ((((-(((/* implicit */int) (short)-29613)))) - (29588))))) : (2145386496)));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            {
                arr_15 [i_2] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2])))))))));
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3 + 2]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29620))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (arr_14 [i_2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3)))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23718)) ? (min((max((arr_14 [i_2]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8300973979132362506LL)) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) arr_0 [i_2])))) : ((+(((/* implicit */int) var_3)))))))));
                arr_17 [i_2] [i_2] = ((/* implicit */short) arr_8 [i_2]);
            }
        } 
    } 
}
