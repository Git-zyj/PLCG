/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97028
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_2 [i_0 - 1]);
                var_14 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                var_15 *= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))) & (min((((/* implicit */unsigned long long int) var_5)), (2236788214162592308ULL))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_1))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(2206363849987991793ULL)))) || ((_Bool)1)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min(((~(-682333828))), (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (signed char)81)) ? (2147483622) : (((/* implicit */int) (signed char)76))))));
    var_17 = ((_Bool) min((max((-177425827), (((/* implicit */int) var_3)))), ((((_Bool)1) ? (((/* implicit */int) (short)-32748)) : (-1049495137)))));
}
