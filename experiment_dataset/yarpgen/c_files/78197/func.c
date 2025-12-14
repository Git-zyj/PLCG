/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78197
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((2758615214021382358LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [12U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12])))))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (max((73908288), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) (unsigned short)56)) & (((/* implicit */int) arr_1 [i_0])))))) - (73908288)))));
        var_15 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */short) (((~(244335830U))) & (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)115))))) ? (max((((/* implicit */unsigned int) var_3)), (1795624362U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_17 ^= ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) * (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (var_10)))), ((-(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) % (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1])), (((short) arr_1 [i_0])))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) * (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1])), (((short) arr_1 [i_0]))))))));
            arr_5 [i_1] [i_1] = var_11;
        }
    }
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((((long long int) var_13)) + (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))));
    var_20 = ((/* implicit */short) var_5);
    var_21 = ((/* implicit */unsigned int) (+(var_7)));
}
