/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70991
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((int) 1073741823ULL));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))) ? (max((((/* implicit */unsigned long long int) var_2)), (11141265881680821943ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)27189)))))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)8))))), (max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)246)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) var_7)))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) ? (((((/* implicit */int) (short)27205)) * (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3605725525U)) ? (((((/* implicit */_Bool) 2736948314U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (2262590830U) : (1558018961U)))) : (var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)30891)))))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) var_5);
    }
    var_18 = ((/* implicit */unsigned short) (+(var_12)));
}
