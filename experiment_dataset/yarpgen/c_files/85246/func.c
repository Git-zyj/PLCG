/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85246
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
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [(signed char)12] [i_2 + 1] [i_2]))));
                    var_20 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) (+(var_14)))) >= (min((((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1])), (arr_7 [i_0] [i_1] [6ULL])))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_7 [i_0] [i_1 + 1] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (arr_7 [i_1] [i_1] [13]) : (((7ULL) | (arr_7 [i_2] [i_2] [i_2 - 1])))))) ? ((-(min((arr_7 [i_2 - 3] [i_1] [10ULL]), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0])) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_6 [i_0] [(unsigned short)10] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_2 - 2])))))))));
                }
            } 
        } 
    } 
}
