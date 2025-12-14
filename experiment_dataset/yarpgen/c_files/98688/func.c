/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98688
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (8931419179613699277LL))))))) >= (var_9)));
    var_15 = ((/* implicit */long long int) var_2);
    var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) 1615177336))));
    var_17 = ((/* implicit */short) (~(var_0)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)49912)))), (((/* implicit */int) (unsigned short)23))))) ? (max((arr_1 [i_0]), (8835078190923840666LL))) : (((((/* implicit */_Bool) 2002151989)) ? (((/* implicit */long long int) arr_0 [i_0])) : (((long long int) arr_1 [i_0]))))));
        arr_3 [i_0] = min((max((((long long int) 974118102)), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (arr_2 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) min(((~(-2002152012))), ((+(((/* implicit */int) var_11))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_20 ^= ((/* implicit */int) ((unsigned short) 1526511520));
        var_21 = ((/* implicit */long long int) max((((max((1244708958), (-2002151990))) % (((/* implicit */int) (short)8968)))), (((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */unsigned short) arr_6 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))), (((((/* implicit */_Bool) max((15ULL), (((/* implicit */unsigned long long int) (unsigned short)15623))))) ? (((/* implicit */int) min((arr_5 [19LL]), ((unsigned short)65531)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18295)))))))));
    }
}
