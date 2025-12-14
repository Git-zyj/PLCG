/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91916
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
    var_19 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_14))) / ((~(((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_4))))))));
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(0)));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */int) (short)32767)), (((((/* implicit */int) (!(((/* implicit */_Bool) -7484450363738498468LL))))) + (((/* implicit */int) (short)-1)))))))));
        var_23 = ((/* implicit */int) ((unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_2))))))));
    }
    var_24 = (((-(var_6))) >> (((((((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))) - (14432147586617853964ULL))));
    var_25 |= max((((/* implicit */short) min((((((/* implicit */_Bool) 7484450363738498468LL)) || (((/* implicit */_Bool) (short)32767)))), (((var_15) != (var_5)))))), (var_13));
}
