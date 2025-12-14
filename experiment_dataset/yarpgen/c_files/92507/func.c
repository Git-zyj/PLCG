/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92507
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((8870905200811667146LL) >> (((((/* implicit */int) (unsigned short)3926)) - (3913)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61609)) << (((((/* implicit */int) (unsigned short)61609)) - (61603)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (arr_2 [i_2]))) << ((((-(arr_2 [i_2]))) - (1616550252U)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)61609))))) ? (arr_11 [(signed char)17] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_0])))))));
                    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((short)-31613), ((short)32256))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_5 [i_0] [17ULL] [17ULL]))))) != (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0]))))))) : (((/* implicit */int) min(((unsigned short)61609), (((/* implicit */unsigned short) arr_10 [i_2] [i_1] [i_1] [i_0])))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) << (((arr_11 [i_3] [i_3] [i_3] [i_3]) - (4062357225911970101ULL)))))));
        var_24 *= ((/* implicit */signed char) (unsigned short)3915);
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_12 [i_3] [i_3] [i_3])))))))));
        var_26 = ((/* implicit */unsigned long long int) min((arr_1 [i_3]), (((/* implicit */signed char) ((_Bool) var_3)))));
    }
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -154167512))));
}
