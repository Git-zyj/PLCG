/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98754
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) & (0ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (short)4429)) != (((/* implicit */int) (short)-4430))))) : ((~(((/* implicit */int) var_7)))))) > (((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) (short)-13418)) + (2147483647))) >> (((((/* implicit */int) (short)2464)) - (2441))))) : (((((/* implicit */_Bool) (short)4439)) ? (((/* implicit */int) (short)4429)) : (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((_Bool) (unsigned short)56244));
        var_14 = ((/* implicit */unsigned short) ((signed char) 15365674777248718376ULL));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))) == (((/* implicit */int) (signed char)-93))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)4429)) : (((/* implicit */int) (short)4430))));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)111)) / (((/* implicit */int) (short)-4429))))));
        var_17 -= ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)-4429)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (short)4430))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 812943145U)) - (((7546146357595282507ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))));
        arr_9 [i_1] = ((/* implicit */short) (-((+((-(((/* implicit */int) (short)30007))))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_6))));
    }
}
