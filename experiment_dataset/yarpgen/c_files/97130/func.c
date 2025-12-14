/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97130
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((/* implicit */int) min((arr_2 [4ULL] [i_0]), (arr_2 [i_0] [i_0]))))));
                var_17 += min(((short)29161), (((/* implicit */short) (_Bool)0)));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -917843084)) & (1061129625U)))) ? (((/* implicit */int) min((arr_2 [(unsigned short)5] [i_1]), (((/* implicit */short) (unsigned char)121))))) : (((/* implicit */int) ((arr_3 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))))))))) < (((((/* implicit */_Bool) -917843070)) ? (11138202565854446174ULL) : (((/* implicit */unsigned long long int) -917843060))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_12);
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10)))))) : (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */short) max(((unsigned char)119), ((unsigned char)105)))), (var_4))))));
    var_21 = ((/* implicit */unsigned short) var_5);
}
