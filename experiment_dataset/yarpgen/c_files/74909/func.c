/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74909
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = (((!(var_2))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) arr_5 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_5 [i_1])))))));
                    var_13 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [(signed char)18])))) || ((_Bool)1))) ? (max((((/* implicit */long long int) (_Bool)1)), (-2502821905668087537LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_4 [i_2 + 3] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_11)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) > (arr_3 [i_1] [i_1]))))) < ((+(arr_3 [i_1] [(unsigned char)5])))))) : (((/* implicit */int) max((max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)161))), (max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max(((~((~(var_0))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)124)), (var_1))))));
}
