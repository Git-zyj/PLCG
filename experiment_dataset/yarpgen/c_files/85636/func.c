/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85636
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_12))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((short)-32760), (((/* implicit */short) var_0))))), (((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                arr_9 [(short)8] [17] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (short)-17739)) : (((/* implicit */int) (signed char)-24))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_0))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8710)) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) == (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((!(((/* implicit */_Bool) (unsigned char)235)))) ? (arr_2 [i_2 - 2]) : (((unsigned long long int) arr_2 [i_2]))))));
        arr_13 [(signed char)8] = ((/* implicit */signed char) (((+(max((var_17), (((/* implicit */int) arr_3 [i_2])))))) << (((((min((((/* implicit */int) (unsigned char)227)), ((-(((/* implicit */int) (_Bool)1)))))) + (18))) - (17)))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)59063), (((/* implicit */unsigned short) (signed char)-119))))), (((-677796299) + (((/* implicit */int) (short)-10889))))));
        arr_15 [(_Bool)1] = ((/* implicit */int) var_14);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 1011439738U))));
    }
}
