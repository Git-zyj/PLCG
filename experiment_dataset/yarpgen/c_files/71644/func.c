/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71644
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : ((~(((1491404484363690334ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [15U] [19]))) : (var_4)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 16955339589345861281ULL)) ? (((/* implicit */int) (signed char)-94)) : (-326682854))))));
                var_19 = max((((/* implicit */short) ((max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (arr_3 [i_1] [i_1]))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)105)))))))), (arr_2 [11ULL] [i_0]));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_10))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 292441895U)), (var_6)))) ? (max((var_6), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_11)), ((signed char)124)))))))));
}
