/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58500
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */unsigned char) (~(var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) min((arr_1 [0ULL]), (((/* implicit */int) var_8))))), (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)12067))))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) var_3)), (var_9)))), (arr_6 [i_1] [i_1])))) ? (1743405129) : (-1743405142)));
                arr_7 [i_1] = ((/* implicit */long long int) (unsigned char)74);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min(((-(var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))))));
}
