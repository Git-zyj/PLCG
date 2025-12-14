/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64969
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((_Bool)1) ? ((~(((5ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26687))))))) : (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)1)))), (((var_5) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) > (arr_7 [i_2] [i_3])))), (var_11))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) min(((short)-20560), ((short)20560)))))))));
                            var_20 |= ((/* implicit */short) ((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4611686018427387903ULL))))))));
                            var_21 = ((/* implicit */long long int) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20579))) * (15ULL)))))));
                            var_22 = ((/* implicit */unsigned short) 1168455391U);
                            var_23 ^= ((/* implicit */long long int) 18446744073709551615ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_1) : (((/* implicit */int) (signed char)124)))))))) != (((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_26 += ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_4] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) 20ULL);
}
