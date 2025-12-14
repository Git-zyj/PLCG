/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74740
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */short) max((7ULL), (min(((+(18446744073709551598ULL))), (18446744073709551609ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_2 - 2] [i_3])) ? (1ULL) : (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                                arr_18 [i_0] [i_1] [(_Bool)0] [(unsigned char)0] [i_0] = ((/* implicit */signed char) var_5);
                                var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_2 [i_3])) | (((((/* implicit */_Bool) arr_6 [i_0 - 1] [0LL] [i_2])) ? (((/* implicit */int) (short)-22019)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_14))), (8047003387372026654LL)))) ? (((/* implicit */int) (unsigned short)56086)) : (((/* implicit */int) (short)23944))));
}
