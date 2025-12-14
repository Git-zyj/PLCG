/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78127
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (var_12) : (var_10))), (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_17))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_11))))) : (max((-7613317351228208717LL), (((/* implicit */long long int) 1231230350U)))))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-9223372036854775795LL), (-7613317351228208717LL)))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_13))))))));
            var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_3)), (var_10))), (var_12)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_12)))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_13)) : (var_5))))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (min((var_6), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (var_10) : (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_14)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) : (((var_11) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_13)) : (var_5)))) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) : (((/* implicit */unsigned long long int) var_14))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_23 ^= ((/* implicit */signed char) var_14);
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (var_5)))) ? (((((/* implicit */_Bool) 1048448)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3072))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) var_10))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_25 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_16))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (var_5))))), (((((/* implicit */_Bool) var_13)) ? (var_14) : (var_10)))));
                        arr_18 [i_2] [i_3] [i_5 + 1] [i_5] [(signed char)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2908974650663857669LL) : (9223372036854775804LL)))) ? (min((((/* implicit */unsigned int) var_8)), (max((var_0), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((var_11) ? (var_6) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) var_9)), (var_12))))))));
                        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) 4286578688U)) ? (-1313619712150018312LL) : (((/* implicit */long long int) 4U)))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                    }
                } 
            } 
        } 
    }
    var_28 |= ((/* implicit */unsigned int) var_7);
    var_29 = ((/* implicit */short) var_6);
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((var_0), (((/* implicit */unsigned int) var_15))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))))));
    var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_7)));
}
