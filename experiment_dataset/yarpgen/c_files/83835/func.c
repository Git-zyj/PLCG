/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83835
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 1089792081418468892LL))));
                        var_21 ^= ((/* implicit */short) arr_10 [i_1] [13LL] [i_1] [i_3]);
                        arr_11 [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) min(((~((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) min((((/* implicit */signed char) (!(var_16)))), ((signed char)-5))))));
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_5)));
                    var_22 = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 7981860695054748978LL)), (var_13))))))), (min(((short)-12128), (((/* implicit */short) ((1298736669148609680ULL) == (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [i_4] [i_4]);
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((7981860695054748973LL) | (((/* implicit */long long int) ((/* implicit */int) (short)12127))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)32765)))))))), (max((((/* implicit */unsigned long long int) arr_1 [i_4])), (17480800342546158956ULL)))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_26 += var_7;
        var_27 = ((/* implicit */short) var_7);
        arr_17 [i_5] = ((/* implicit */_Bool) arr_5 [6] [i_5] [i_5]);
    }
    var_28 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) max(((signed char)79), ((signed char)29)))) == (((/* implicit */int) max((((/* implicit */short) (unsigned char)240)), ((short)-30496)))))))));
    var_29 &= ((/* implicit */unsigned char) var_8);
}
