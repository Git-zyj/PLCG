/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95963
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 16004738467472830092ULL)) ? (531861377) : (arr_0 [i_0])))));
                var_13 = ((/* implicit */short) min((arr_3 [i_0]), (((/* implicit */long long int) ((signed char) arr_4 [i_0 + 3] [i_1 - 1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)9] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))) | (((2442005606236721523ULL) << (((/* implicit */int) (unsigned char)35))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))) : (((/* implicit */int) min(((unsigned short)24782), (((/* implicit */unsigned short) (_Bool)0))))))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0])) ? (arr_7 [i_0] [i_0 + 2] [(unsigned short)2]) : (arr_7 [i_0] [i_0 + 3] [i_0 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [10U])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-7)), (var_4)))) : (((arr_0 [(unsigned short)5]) >> (((var_8) - (1496569413U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_6))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-21774)) != (((/* implicit */int) (short)13713))));
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
}
