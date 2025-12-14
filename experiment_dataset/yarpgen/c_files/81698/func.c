/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81698
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 3]))))), (max((((((/* implicit */_Bool) 2ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) (_Bool)1)))))))));
                arr_5 [(unsigned short)1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)34133))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
    var_20 *= 18446744073709551605ULL;
}
