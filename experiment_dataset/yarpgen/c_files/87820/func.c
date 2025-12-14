/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87820
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [8ULL] = ((/* implicit */int) var_5);
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (4194302U))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_7);
    var_12 &= ((/* implicit */unsigned long long int) ((unsigned int) var_2));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 270215977642229760LL))));
            var_14 = ((/* implicit */unsigned long long int) (unsigned short)43411);
            arr_13 [i_2] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_2]))));
        }
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */long long int) (unsigned char)127)), (((long long int) (unsigned char)176)))))));
        var_16 *= ((/* implicit */unsigned long long int) (((_Bool)1) && ((_Bool)1)));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_18 [i_2] [8U] [i_2] [i_6])) ^ (((504403158265495552LL) - (((/* implicit */long long int) var_1))))));
                        var_18 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(504403158265495550LL)))) ? (((/* implicit */int) (unsigned short)21451)) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5] [i_5 - 1]))))));
                    }
                } 
            } 
        } 
    }
}
