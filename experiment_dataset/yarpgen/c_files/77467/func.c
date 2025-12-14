/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77467
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
    var_11 *= ((/* implicit */signed char) max((-1480854517580614840LL), (((/* implicit */long long int) 1455289393U))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [10LL] = ((/* implicit */long long int) ((2839677903U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) ((-6974477635160058630LL) != (((/* implicit */long long int) var_2)))))))))));
        var_12 = ((/* implicit */unsigned int) max((min(((signed char)-115), (arr_0 [i_0] [i_0]))), (((/* implicit */signed char) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) + (2147483647))) << (((min((1455289393U), (2591919606U))) - (1455289393U)))));
        var_14 = (~((+(2571178645U))));
    }
}
