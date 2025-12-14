/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9581
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
    var_17 = ((/* implicit */_Bool) max((var_12), (var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-4019444606227104186LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) -3068239026830379130LL)) ? (((((/* implicit */_Bool) var_2)) ? (2442605171U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_4] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) (_Bool)0)));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 + 1]))))) ? ((-(((((/* implicit */_Bool) -350296317)) ? (127ULL) : (((/* implicit */unsigned long long int) -195258465)))))) : (((/* implicit */unsigned long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_1])) : (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))))))));
                                var_20 += ((/* implicit */_Bool) 1227728427);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] [i_0] = min(((~(1292532220231189329ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (+(var_1))))));
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) min((min((arr_10 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                    arr_14 [i_0] [i_0] [i_0] [11LL] = ((/* implicit */long long int) var_10);
                }
            }
        } 
    } 
    var_21 = min((((/* implicit */long long int) var_10)), (var_12));
}
