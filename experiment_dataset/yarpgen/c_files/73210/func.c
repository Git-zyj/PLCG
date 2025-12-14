/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73210
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [10ULL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4534850473828694181LL))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) -4386265869174307007LL);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-6565319564674170454LL) : (arr_4 [i_0] [i_0])))))))) != (((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((((/* implicit */_Bool) 4386265869174306978LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((((/* implicit */int) (unsigned char)87)) - (87))))))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 72057594037927808LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (var_4))) : (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)180)) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (-7154336855823883708LL))))))));
    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(var_15)))) ? (max((var_6), (((/* implicit */int) (signed char)-26)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_18))))))), ((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (var_8)))));
}
