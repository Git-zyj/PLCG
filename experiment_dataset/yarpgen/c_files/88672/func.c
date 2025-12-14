/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88672
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(signed char)2] |= ((/* implicit */unsigned char) 5029204257451487181LL);
                arr_5 [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) (~(arr_1 [i_0])))))) || (((/* implicit */_Bool) ((unsigned char) (_Bool)1))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)4032), (((/* implicit */unsigned short) (signed char)127)))))) - (((unsigned int) arr_1 [i_1 + 1]))));
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)29)) << (((((/* implicit */int) (signed char)52)) - (42)))))))), (var_12)));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) ((((long long int) 6564487729650115743ULL)) >= (((/* implicit */long long int) ((((2147483647) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */int) (unsigned char)84)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_2)))))))));
    var_20 = var_10;
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((var_3), (var_2)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_1))))))))))));
    var_22 = ((/* implicit */_Bool) var_2);
}
