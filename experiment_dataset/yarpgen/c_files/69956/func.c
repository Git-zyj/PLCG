/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69956
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_11))) + (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (var_6)))), ((-(((/* implicit */int) (unsigned short)52430))))))));
        var_12 = ((/* implicit */int) var_8);
        arr_4 [i_0] = ((/* implicit */int) var_1);
        var_13 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)0] [(unsigned short)0]))))))) - (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_6 [13LL] [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12219))) * (0ULL)))) ? ((-(((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) var_2)))))));
            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_2] [i_1]))))))))))));
            var_17 = (((-(var_10))) * (((((arr_8 [i_1] [i_2] [11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (((/* implicit */unsigned long long int) min((arr_9 [i_2] [i_2] [i_1]), (((/* implicit */long long int) arr_6 [i_2] [i_1]))))))));
            var_18 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))));
        }
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((~(arr_9 [i_1] [i_1] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1]) > (((/* implicit */long long int) var_0)))))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((((arr_11 [i_3]) < (var_10))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) == (var_6)))));
        var_21 = var_3;
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775798LL)))))))));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((arr_15 [i_4]) - (((/* implicit */int) arr_13 [i_4]))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)2143)) : (772075459))) - (((/* implicit */int) var_9))))) : (min((arr_14 [i_4]), (((/* implicit */long long int) arr_13 [i_4]))))));
        arr_18 [i_4] = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [18U]))) >= (arr_11 [i_4])))))) >= ((-(arr_12 [i_4])))));
    }
    var_23 *= ((/* implicit */unsigned int) (~((~(var_11)))));
    var_24 = ((/* implicit */signed char) (~(((var_8) + (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
    var_25 = ((/* implicit */unsigned long long int) var_1);
}
