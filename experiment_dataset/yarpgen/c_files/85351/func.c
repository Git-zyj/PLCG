/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85351
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
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))));
        var_19 += ((/* implicit */_Bool) (~((-(((/* implicit */int) var_3))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)13801)) : (-710924485)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-118))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_0)))) ? (((var_6) << (((((/* implicit */int) var_13)) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) (+(var_5)));
        var_23 = ((/* implicit */unsigned int) ((((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_15))));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_24 = ((/* implicit */signed char) var_11);
            var_25 = ((/* implicit */_Bool) ((unsigned char) var_2));
        }
        arr_10 [i_1] = ((/* implicit */unsigned short) ((_Bool) var_4));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) var_3);
        arr_14 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-69))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (max(((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((var_4) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2227013514U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((-4462701861351413299LL), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)47974)))) : (((/* implicit */int) max((var_10), (var_15))))))));
    }
}
