/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63402
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
    var_14 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58320))) > (1006644480072645772ULL)))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                var_16 ^= ((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 1]);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) var_8))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0] [i_1] [i_2] [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)4] [i_2])) ? (((/* implicit */unsigned long long int) 0LL)) : (18342380778404872144ULL))) : (((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */int) var_10)))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [7ULL])), (17758773510611264690ULL)))) ? (((/* implicit */int) arr_4 [i_0] [i_3] [(unsigned char)17])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)64145))))))) != (((/* implicit */int) ((signed char) arr_11 [i_0] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_2] [i_3])))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (15185900845455543172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (5186084399501005553ULL) : (((/* implicit */unsigned long long int) 32760))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
