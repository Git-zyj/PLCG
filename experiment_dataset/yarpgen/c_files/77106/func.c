/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77106
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
    var_18 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))) - (((/* implicit */int) max((var_3), (var_3)))))) + (((/* implicit */int) ((_Bool) var_5)))));
    var_19 *= ((/* implicit */signed char) max((max((max((var_6), (((/* implicit */unsigned short) var_10)))), (max((var_3), (var_6))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) max((var_8), (var_13)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_7)))) == (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_5))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_15);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) var_14)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) max((var_1), (((var_9) || (((/* implicit */_Bool) var_6))))))), (((short) max((((/* implicit */unsigned long long int) var_1)), (var_11))))));
        var_21 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_12)) : (var_14)))))), (max((((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))), ((-(((/* implicit */int) var_16))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_14)))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_3))))) : (((/* implicit */int) min((var_1), (var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) ((short) var_10))))) : (((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */unsigned short) (+(max((var_14), (((/* implicit */unsigned long long int) ((unsigned int) var_10)))))));
                }
            } 
        } 
        arr_14 [(_Bool)0] [(short)10] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (max((var_11), (((/* implicit */unsigned long long int) var_15)))))) && (((/* implicit */_Bool) max((((signed char) var_11)), (((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_0))))))))));
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) var_10);
        var_26 = ((/* implicit */unsigned short) min((var_26), (var_13)));
        var_27 -= ((/* implicit */unsigned long long int) ((short) max((max((var_14), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), (var_8)))))));
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) ((signed char) var_4))))))));
    var_29 = ((/* implicit */long long int) var_11);
}
