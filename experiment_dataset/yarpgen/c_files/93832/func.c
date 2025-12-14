/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93832
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-956))));
        var_10 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (7729127693877277590ULL) : (((/* implicit */unsigned long long int) 1104537108U))))) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((/* implicit */unsigned long long int) arr_1 [12] [i_0])) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)16775)), ((unsigned short)31))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (short)32766)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_3)))) ? (((arr_1 [i_0] [i_0]) >> (((arr_1 [(signed char)5] [(signed char)5]) - (3065355820U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_0])))))))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_1 [i_0 + 1] [i_0 - 1])))));
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned short)20])) >> (((((/* implicit */int) var_6)) - (95)))))) ? (max((((/* implicit */long long int) arr_8 [i_1])), (arr_5 [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1687)))))))) ? (((/* implicit */unsigned long long int) var_4)) : ((-(16510808283651839848ULL)))));
            var_13 = (~(var_5));
            var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_11 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_10 [i_2]))))))), (((((/* implicit */_Bool) 17971412459256459537ULL)) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) -1055340484)) : (arr_11 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_3]);
            var_15 = ((/* implicit */unsigned long long int) var_6);
            arr_15 [i_1] [i_3 - 1] = ((/* implicit */short) arr_9 [i_3] [i_1]);
        }
    }
    var_16 = ((/* implicit */int) var_1);
    var_17 = ((/* implicit */long long int) var_1);
}
