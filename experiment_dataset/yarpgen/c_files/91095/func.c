/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91095
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
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) (-(18446744073709551603ULL)))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) (unsigned char)151)) ? (arr_1 [(unsigned char)20] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_0 [i_0]))));
    }
    var_21 = ((/* implicit */long long int) 4294967295U);
    var_22 = min((((/* implicit */unsigned int) var_3)), ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2))))));
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned short) 17453568746785905742ULL);
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)252)), (arr_10 [i_1] [i_1] [i_1]))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1])) << (((((/* implicit */int) ((signed char) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) - (58)))));
                            var_26 = ((/* implicit */unsigned short) var_4);
                            var_27 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-25980)))) != ((+(var_9)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)16991)));
            }
        } 
    } 
}
