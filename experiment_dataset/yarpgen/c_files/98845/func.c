/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98845
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
    var_19 -= ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_13))));
        var_21 *= ((/* implicit */unsigned long long int) (~((-((~(var_12)))))));
        var_22 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (9689241963662295640ULL)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_1) ? (var_12) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((-1386133066) & (((/* implicit */int) (short)(-32767 - 1)))))) : (var_4)))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) var_16);
                        arr_15 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
                        var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_10))))))), (min((max((((/* implicit */unsigned long long int) var_9)), (var_10))), (((/* implicit */unsigned long long int) var_9))))));
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-24)), (var_6)))), (max((var_2), (((/* implicit */long long int) var_14))))));
                    }
                } 
            } 
        } 
    }
}
