/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82266
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [(_Bool)1] [i_1] [i_0] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */int) ((3198616300U) >= (arr_5 [i_0] [i_1] [i_2] [i_2 - 1])))) | (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) <= (1144920378U))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2] [i_2])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))) : (((long long int) 3611857957U)))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_6)), (arr_4 [i_2] [i_1] [i_0 + 1]))) <= (((/* implicit */long long int) arr_2 [i_0] [i_0 + 1])))))));
                    arr_9 [i_0] [(signed char)5] [i_1] [i_2] = ((((/* implicit */long long int) max((((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (max((((/* implicit */unsigned int) (unsigned char)80)), (3611857957U)))))) < (((((/* implicit */_Bool) (signed char)-97)) ? (((((/* implicit */_Bool) var_4)) ? (5045005830273924783LL) : (((/* implicit */long long int) 188518645U)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_5))));
    var_12 = ((/* implicit */short) (signed char)104);
}
