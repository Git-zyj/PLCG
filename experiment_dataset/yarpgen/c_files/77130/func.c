/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77130
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (unsigned char)56);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((max((16078150560929576361ULL), (7369066246495318599ULL))), (((/* implicit */unsigned long long int) (short)31343))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_2] [i_0] [i_1] [i_1] [i_1] [i_2] = ((signed char) (signed char)92);
                        arr_13 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((long long int) (short)8567))) ? ((+(((((/* implicit */_Bool) 1008)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22629))) : (var_11))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_10 [i_1])))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_18 [i_2] [i_2 + 1] [i_1] [i_2] [i_2] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22616)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50541)))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_0] [i_1] [i_2 + 1] [i_1] [i_0] [i_2])))));
                        var_16 = ((/* implicit */short) ((unsigned short) 1441987330));
                        var_17 = ((/* implicit */long long int) ((int) ((unsigned short) var_0)));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (3926620481U)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-31331)) : (((/* implicit */int) (signed char)100)))) : (((/* implicit */int) max(((unsigned short)22609), (((/* implicit */unsigned short) (short)18978)))))))));
}
