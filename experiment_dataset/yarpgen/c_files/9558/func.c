/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9558
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
    var_19 = ((/* implicit */int) ((((((/* implicit */int) min(((signed char)110), (var_5)))) * (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_17))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(signed char)10] = ((/* implicit */unsigned short) ((signed char) var_7));
        arr_4 [(_Bool)1] = min((((/* implicit */unsigned long long int) (!((!(arr_1 [i_0])))))), (((unsigned long long int) (unsigned char)35)));
        arr_5 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */int) max((((/* implicit */short) var_3)), (var_18)))) >= (((/* implicit */int) arr_0 [i_0] [i_0])))), ((!(((/* implicit */_Bool) 9451946523007342656ULL))))));
        arr_6 [i_0] [2LL] = ((/* implicit */signed char) ((8780996214348656664ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */int) ((((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_8 [i_1])))) & (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_5)) + (139))))))) > (((/* implicit */int) ((_Bool) arr_9 [i_1])))));
        arr_11 [4LL] = ((/* implicit */unsigned long long int) ((_Bool) 773220675));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (~(9665747859360894949ULL))))) ? (((((/* implicit */int) (short)-32757)) | (((/* implicit */int) (signed char)112)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_14), (var_14)))) : (((/* implicit */int) (signed char)74))))));
    var_21 = ((/* implicit */_Bool) min((var_5), (var_5)));
}
