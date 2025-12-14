/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83165
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
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */_Bool) 2147483647);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3794355947U)) ? (((/* implicit */int) min(((unsigned short)54314), (((/* implicit */unsigned short) (unsigned char)0))))) : (((/* implicit */int) min((min(((short)-24048), (((/* implicit */short) (unsigned char)76)))), (((/* implicit */short) arr_4 [i_0])))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_0 - 3])), (arr_3 [i_0 + 1] [i_1])))) ? ((~(((/* implicit */int) (unsigned char)64)))) : ((-(((/* implicit */int) (unsigned char)80))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((unsigned char) ((signed char) (unsigned char)176)));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min(((unsigned char)251), (min(((unsigned char)80), ((unsigned char)9))))))));
                            var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_2 - 2]))), (((/* implicit */unsigned long long int) (~(var_3))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (unsigned char)120)), ((short)-18746))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) + (var_7)))) * (((arr_0 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32228)))))))))));
                                var_23 ^= ((/* implicit */int) min((((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [(unsigned char)9] [i_0] [(unsigned short)16] [(signed char)16])) : (((/* implicit */int) (unsigned char)85))))), (((/* implicit */signed char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_11 [i_2 - 1] [(unsigned short)5] [(_Bool)1] [i_4 + 1] [i_0 - 3] [i_1 - 1])))))));
                                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)88)) <= (((/* implicit */int) (short)24353)))))));
                                var_25 = ((/* implicit */unsigned short) min((((unsigned int) min((((/* implicit */unsigned int) var_5)), (var_6)))), (((/* implicit */unsigned int) (signed char)127))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
