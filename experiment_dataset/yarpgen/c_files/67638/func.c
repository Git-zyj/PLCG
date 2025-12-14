/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67638
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
    var_18 = var_3;
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                var_20 = ((/* implicit */short) arr_3 [i_0] [12ULL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6455)) ? (15855632494971452506ULL) : (2591111578738099102ULL)))) ? (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [18ULL] [(signed char)4]))) : (var_2))) : (((/* implicit */long long int) var_1))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_8 [i_3 - 1]))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15855632494971452513ULL)) ? (-1) : (((/* implicit */int) (signed char)-68))))) ? (arr_11 [i_2] [(_Bool)1] [11LL]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */unsigned long long int) var_0)) : (15855632494971452501ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_3 - 1]))) : (arr_11 [i_3 - 1] [(short)10] [i_2])))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_7);
}
