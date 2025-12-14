/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58705
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
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)6144)) >= (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = var_10;
                            arr_9 [i_2 + 2] [i_1] [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) arr_5 [i_2 - 2] [5] [i_1]);
                        }
                    } 
                } 
                arr_10 [i_1] |= ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_2 [i_1] [i_0]))))))) : (max((((/* implicit */unsigned long long int) (-(4294967291U)))), (arr_0 [i_0] [i_1]))));
                var_21 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) var_3)))), ((-(((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)-23619))))))));
                var_22 = ((/* implicit */short) max((2071299874U), ((+(1990880974U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_14)))))) : ((~(((/* implicit */int) ((short) var_14))))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) 23U))), (max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))))), (max((((/* implicit */long long int) (signed char)-102)), (arr_20 [i_4] [i_8 - 2])))))));
                                var_26 = ((/* implicit */unsigned int) 168907374557076870ULL);
                                var_27 = ((/* implicit */unsigned int) ((unsigned short) max((0ULL), (((/* implicit */unsigned long long int) ((signed char) 5529329903139359843ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((unsigned long long int) (+((~(1024547964U)))));
}
