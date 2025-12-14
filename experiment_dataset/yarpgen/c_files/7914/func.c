/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7914
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
    var_14 |= (short)21794;
    var_15 = ((/* implicit */unsigned short) max(((short)-2244), (((/* implicit */short) (unsigned char)58))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_6 [i_0 - 2] [i_0 + 1] [i_1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_7))) % (arr_3 [i_1] [i_1] [i_1])))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)8064))))), ((-(arr_0 [i_0])))))));
                    var_16 = ((/* implicit */short) var_10);
                    var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (short)8064)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)174))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)-73)))))))));
}
