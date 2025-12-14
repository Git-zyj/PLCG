/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90926
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(var_10))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)65), (((/* implicit */unsigned char) (signed char)17)))))) * (((var_1) >> (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) min(((unsigned char)55), (((/* implicit */unsigned char) (signed char)36)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)173)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31480)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (signed char)-19))))) : ((~(((/* implicit */int) (unsigned char)250)))))))))));
                arr_5 [(unsigned short)5] &= ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)191)), (arr_4 [i_0 - 4])))), (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)190)), (var_2))))) : (1097198717U)))));
                var_14 *= ((/* implicit */long long int) ((var_10) ? ((-((+(var_8))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) != (((/* implicit */int) (signed char)-37))))) : (((/* implicit */int) (unsigned char)12))))));
            }
        } 
    } 
}
