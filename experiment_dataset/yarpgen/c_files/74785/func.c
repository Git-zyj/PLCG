/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74785
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
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (4294967295U)))) % (((/* implicit */unsigned long long int) arr_8 [i_0]))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_14), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))))));
                        arr_11 [i_0] [i_3] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_2 - 2]))))), (max((((/* implicit */unsigned long long int) (unsigned char)213)), (36028797018963964ULL)))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((int) -4784055042680273453LL))), ((-(var_2)))))));
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(-1111118646)))) ? (((/* implicit */int) ((unsigned char) 4784055042680273452LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), (((/* implicit */int) ((19U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
}
