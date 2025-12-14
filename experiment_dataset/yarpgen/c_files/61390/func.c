/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61390
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
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) -3616451376535189038LL);
        var_11 |= ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) max((arr_5 [i_0] [4U] [4U]), (((/* implicit */unsigned short) var_7)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_0 - 1] [i_1] [i_1])))) ? (((arr_3 [i_0] [(_Bool)1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_4 [i_1]))), (max((((/* implicit */unsigned short) (unsigned char)244)), ((unsigned short)43937))))))))))));
            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0 - 1])) / ((+(((int) (-2147483647 - 1)))))));
        }
        var_14 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))));
    }
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) max((var_8), (var_7)))))))))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) max((var_0), (10865585472810434644ULL))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)6330)) == (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (18446744073709551601ULL)))))));
    var_17 *= ((/* implicit */short) (+(((/* implicit */int) (signed char)(-127 - 1)))));
}
