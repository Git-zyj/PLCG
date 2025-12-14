/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97313
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
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)60901)) : (((((/* implicit */int) var_4)) % (((/* implicit */int) (short)32762)))))), (((((/* implicit */int) var_6)) + (((/* implicit */int) (!(((/* implicit */_Bool) 6190775121774261121ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)18] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_3 [i_0] [i_0 - 1] [i_0 + 1]))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_2))))));
                arr_6 [i_0 - 1] = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (-559251982)));
                var_14 = arr_1 [15ULL];
                arr_7 [i_1 + 3] [i_0 + 3] [(signed char)13] = ((/* implicit */short) ((((/* implicit */int) (short)15208)) << ((((~(((/* implicit */int) var_7)))) + (27198)))));
            }
        } 
    } 
}
