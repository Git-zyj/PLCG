/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87635
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4019290599U)), (((unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) ((_Bool) 15365731468706894268ULL))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (var_12))))))) : (((((var_2) / (var_12))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1849)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_2]))))) | ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32760))) : (15365731468706894285ULL)))))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) 3081012605002657348ULL))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (arr_0 [i_0])))) >> (((((min((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_2] [i_2] [i_1] [i_1 - 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_6)))))))) - (10232U)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_7);
}
