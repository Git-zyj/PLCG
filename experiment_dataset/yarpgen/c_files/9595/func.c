/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9595
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 183566672))));
    var_21 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2579196250641166503ULL)))) ? (63) : (((/* implicit */int) ((63) > (((/* implicit */int) (signed char)17))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-16)) && (((/* implicit */_Bool) (signed char)-99))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-64)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_24 = ((/* implicit */short) min(((+(14130314842258835127ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -64)))))));
        arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_1])), ((+(((/* implicit */int) var_3))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-17), ((signed char)-5))))))), ((+(var_11)))));
        arr_8 [i_1] &= ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [(unsigned short)7]))))), (((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))))));
    }
}
