/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75880
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [17] [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_10 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_1))))))))) <= (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (-1460354774))))) : (max((((/* implicit */unsigned long long int) 16777215LL)), (12948564464109687920ULL))))))))));
            var_12 += ((/* implicit */unsigned char) ((long long int) var_6));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) var_2);
            var_14 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0]))) <= (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2]))))), (max((var_6), (arr_0 [i_0])))))));
            var_15 ^= ((/* implicit */int) (unsigned char)124);
        }
        arr_9 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) <= (arr_6 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) var_6))));
    var_17 = var_2;
    var_18 = (((-(((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_3))))))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
}
