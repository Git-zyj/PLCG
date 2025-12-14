/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58478
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)17] [i_1] [(_Bool)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(7ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2505427938901322559LL)) && (((/* implicit */_Bool) 1445545151337910381ULL))))), (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2])) > ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) (short)-5937)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [18U])) > (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((var_7) == (((/* implicit */int) var_5)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) + (3444338693144006706ULL))) : ((((+(var_10))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)27523)), (18U)))))))))));
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (1464340917U)))) || (((/* implicit */_Bool) 2967953512U))))));
}
