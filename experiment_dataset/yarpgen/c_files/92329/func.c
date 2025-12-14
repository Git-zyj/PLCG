/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92329
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
    var_14 = ((((var_12) > ((-(((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) min(((unsigned short)15337), (((/* implicit */unsigned short) var_2))))) ? ((-(((/* implicit */int) var_7)))) : (var_12))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)15337)) != (((/* implicit */int) (unsigned char)49))))) : (max((((/* implicit */int) var_0)), (var_10))))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)206)), (max((((((/* implicit */int) var_13)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_9))))))));
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_6)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((int) max((var_7), (((/* implicit */unsigned char) (_Bool)0))))), (((int) var_4))));
}
