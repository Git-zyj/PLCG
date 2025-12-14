/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63054
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
    var_14 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_2)))))))));
    var_15 = ((/* implicit */int) 2341345101180288404ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((signed char) (~(3595808438U)));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_3 [i_2])) : (var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_1]))))), (((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) 351493869)) : (arr_4 [i_0])))))));
                    var_18 = ((/* implicit */unsigned short) arr_5 [i_1 + 2] [i_1 + 2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)205)) ? ((-(((/* implicit */int) (short)16942)))) : (((/* implicit */int) ((unsigned char) (short)13169))))))));
}
