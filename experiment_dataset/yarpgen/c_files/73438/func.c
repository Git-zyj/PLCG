/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73438
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
    var_15 = ((/* implicit */unsigned int) 18446744073709551615ULL);
    var_16 = ((/* implicit */unsigned long long int) 4294967282U);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((arr_6 [i_1 + 2] [i_1 - 2]) << (((8ULL) - (8ULL))))) != ((~(arr_6 [i_1 - 3] [i_1 - 1])))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] &= ((/* implicit */signed char) var_5);
                                arr_14 [i_1] [i_1] [(unsigned char)1] = ((/* implicit */signed char) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((max((((/* implicit */unsigned long long int) (-(4958167441825506824LL)))), (max((var_2), (2647279085524371742ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_12)) - (30672)))))), (((7290606687646519054ULL) % (1ULL)))))))));
                    arr_15 [i_1] [i_0] [15ULL] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_2))) >= (max((((/* implicit */unsigned long long int) var_3)), (var_2))))))) | (3536716241729327210LL));
                    var_19 = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
}
