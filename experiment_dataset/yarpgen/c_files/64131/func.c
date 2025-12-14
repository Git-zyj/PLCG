/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64131
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_1]))))) ? ((~(((long long int) (unsigned char)207)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_1])))));
                            arr_10 [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [(unsigned char)5] [i_1])), (arr_5 [i_0] [i_1] [i_3])))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) arr_8 [i_0] [i_0] [i_1] [i_0]))), (min((min((var_5), (((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_1])))), (((/* implicit */unsigned short) (_Bool)1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (var_0))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6583))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_4)), (var_3))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (((((/* implicit */_Bool) ((long long int) var_12))) ? (min((var_3), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65535)))))))));
    var_18 = ((/* implicit */unsigned short) var_10);
}
