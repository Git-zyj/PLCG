/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7087
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
    var_10 = ((/* implicit */_Bool) (~(var_3)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [(signed char)10] |= ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
        var_11 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)118), (var_4))))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_7 [i_1])), (arr_4 [i_1] [(_Bool)1])))), ((~(var_2))))))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(max((8234539111746504007LL), (-8234539111746504006LL))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -8234539111746504008LL))))) >> ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) -8234539111746504022LL)) >= (var_8))))))));
    }
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1)))))))));
}
