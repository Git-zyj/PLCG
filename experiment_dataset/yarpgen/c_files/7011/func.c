/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7011
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (945266456U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) (short)28097)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) | (arr_5 [(_Bool)1] [(_Bool)1])))) ? (max((((/* implicit */long long int) var_1)), (arr_0 [15LL]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11149))))))));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2988128660U)) ? (137908185) : (((/* implicit */int) var_7))))), (arr_5 [i_0] [i_0]))) * (((unsigned long long int) min((var_6), (((/* implicit */long long int) var_3)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_10);
    var_14 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) var_0))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))) / (var_8))))))));
}
