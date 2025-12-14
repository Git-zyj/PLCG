/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/744
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((15448019137757413112ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50297))));
        var_19 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (var_8));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((max((473581), (-473582))), (((int) (+(8787970685530962087ULL)))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) (((~(-473573))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8ULL] [2ULL] [(unsigned short)7])))))))))))));
                arr_7 [(unsigned short)2] [1ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)58353))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)40511)) : (473577))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))))));
}
