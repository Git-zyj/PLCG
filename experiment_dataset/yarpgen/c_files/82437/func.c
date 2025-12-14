/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82437
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
    var_20 += ((/* implicit */unsigned long long int) var_15);
    var_21 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (-736156454))), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18023530502487554207ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [10] = ((/* implicit */signed char) (~((((+(arr_2 [(_Bool)1] [i_1 - 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [20LL])))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) > (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_1 [i_0] [i_1])))))))) ^ (min((arr_5 [i_0] [i_0] [i_1 - 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned char) min((max((((/* implicit */unsigned int) arr_4 [i_0] [i_1])), (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22065)))))))))));
                arr_8 [i_0] [i_0] = (((+(((15435603697678481203ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [13ULL]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_0]))))));
            }
        } 
    } 
}
