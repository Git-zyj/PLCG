/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99547
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
    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_10))) != (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65532), (((/* implicit */unsigned short) (unsigned char)135)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_2])))) || (((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */long long int) arr_5 [i_1] [i_1])))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) max((((unsigned short) 3547789991260671643LL)), (((unsigned short) 1026313801)))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)184))))))) && (((((/* implicit */int) (unsigned char)165)) != (((/* implicit */int) (unsigned short)4095))))));
                    arr_8 [(unsigned short)10] [i_1] [(unsigned short)10] &= ((/* implicit */unsigned short) ((((3503975642U) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)19272))))))) ? (max((-1078388203588405496LL), (((((-1078388203588405517LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)55)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_5 [4ULL] [2ULL])))))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)13907))))))), (((var_14) << (((((/* implicit */int) var_9)) - (71)))))));
    var_19 *= ((/* implicit */unsigned char) (((+((~(((/* implicit */int) (unsigned short)21)))))) / (((/* implicit */int) ((((/* implicit */int) var_7)) < (((((/* implicit */int) (unsigned char)71)) & (var_13))))))));
}
