/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98120
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((((_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) -8910010521142804728LL)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))) == (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_1 [i_0])))))))));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)18981))));
        var_14 = ((/* implicit */int) arr_1 [i_0 - 1]);
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_2 [i_2]))), (var_4))))));
                    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1] [i_1]) : (11192907363606151724ULL)))) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_0)))))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) var_3))));
    var_18 = ((/* implicit */unsigned short) var_6);
}
