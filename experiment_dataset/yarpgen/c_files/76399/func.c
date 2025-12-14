/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76399
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_15 |= ((/* implicit */unsigned int) min((-743218066), (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18166158527577688214ULL)) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [10ULL])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_16 ^= (+(((/* implicit */int) (_Bool)1)));
                        arr_9 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)7492)) <= (((/* implicit */int) arr_8 [i_2]))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_17 = (short)12267;
        var_18 = ((/* implicit */_Bool) 1592672426081787950ULL);
        arr_13 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) arr_14 [i_5]);
        var_19 *= ((/* implicit */unsigned long long int) var_6);
        arr_18 [i_5] [i_5] = max((((/* implicit */unsigned long long int) -302455272)), ((+(min((arr_14 [i_5]), (((/* implicit */unsigned long long int) 2082280730U)))))));
        var_20 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_5 + 1] [i_5]))))), (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min(((~(422231648U))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)9)))))))));
    var_22 ^= ((/* implicit */signed char) var_11);
    var_23 = ((/* implicit */signed char) var_0);
}
