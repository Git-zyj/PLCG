/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94804
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((4028958311U), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((-2031791477464515041LL) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (2031791477464515047LL))))), ((~(min((arr_5 [i_0] [i_1]), (((/* implicit */long long int) 639990363U))))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (arr_7 [i_0] [(unsigned char)3] [3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (-(arr_3 [i_1])))) : (((2031791477464515046LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) -135189618)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (arr_7 [i_0] [13U] [i_2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (short)-19907);
    var_16 = ((/* implicit */_Bool) ((int) 714509362U));
    var_17 = ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_14)))) ? (max((1086956552U), (127U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-88)))))));
}
