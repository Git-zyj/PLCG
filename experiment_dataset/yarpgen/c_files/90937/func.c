/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90937
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7306649415816319476ULL))));
                    arr_11 [i_1] [i_1] [i_2] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) -3192341547966653994LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))))) ? (-397544091827760142LL) : (((/* implicit */long long int) (+(((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)65527)) : (((((/* implicit */_Bool) (unsigned short)7)) ? (((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_13))))))));
                                arr_16 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))) ? (var_14) : (((/* implicit */unsigned long long int) ((long long int) var_3)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_15)))) : (((/* implicit */int) min(((unsigned short)60486), ((unsigned short)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)1)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65517)))) ? (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)60486)))) : (((((/* implicit */_Bool) (short)5301)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) var_2)))))))))));
}
