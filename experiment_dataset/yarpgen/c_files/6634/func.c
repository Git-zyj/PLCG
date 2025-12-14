/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6634
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
    var_12 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned short) (signed char)-98))))), (((((/* implicit */_Bool) 8274708620862831668LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (1281261581U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)62743)) : (((/* implicit */int) ((_Bool) 1866760503334357943LL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (9223372036854775807LL) : (-1057608084967960516LL)))) && ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((arr_5 [i_1 - 4]) - (arr_5 [i_1 - 1]))) != (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)19473), (var_9)))))));
            arr_8 [i_0] [i_0] [6LL] &= ((/* implicit */unsigned char) (~(((unsigned int) ((unsigned long long int) var_8)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_14 = arr_10 [i_0] [i_0];
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46063))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)116)) / (((/* implicit */int) var_7))))) : (arr_1 [i_0])));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 17ULL))));
        }
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)3])) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])) : (arr_5 [i_0]))))));
        var_18 &= ((/* implicit */long long int) ((unsigned char) (unsigned short)51833));
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) 7788764973602571969LL);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_5))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) min(((unsigned short)36226), (((/* implicit */unsigned short) (signed char)6))))), (-1936785746)))), (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (-1530821010100508440LL))))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [(signed char)5] [i_3]), (((/* implicit */unsigned char) (signed char)21)))))) - (min((arr_12 [i_3] [i_3]), (3348551117U))))));
    }
}
