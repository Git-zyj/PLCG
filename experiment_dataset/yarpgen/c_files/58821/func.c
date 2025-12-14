/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58821
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((6150496900499488538ULL) == (12222149808409117651ULL)))), (((unsigned short) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((6224594265300433957ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (var_3)))));
    var_21 = ((/* implicit */unsigned short) var_0);
    var_22 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((12222149808409117657ULL) ^ (max((((12222149808409117653ULL) * (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_11)), (arr_2 [i_0 - 1]))))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) 6224594265300433958ULL))));
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (6150496900499488536ULL)));
        var_26 = ((/* implicit */signed char) (-(((int) -21213320))));
        var_27 ^= ((/* implicit */short) var_0);
    }
}
