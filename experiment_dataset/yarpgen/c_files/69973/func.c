/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69973
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (min((var_3), (((/* implicit */unsigned long long int) var_12)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [5U])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) % (((/* implicit */long long int) var_12))))) && (((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_0)))), ((~(((/* implicit */int) (unsigned char)227)))))))));
                    var_20 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_6)))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)51035)))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_3))) : (min((var_4), (((/* implicit */unsigned long long int) var_17)))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned short)51021)) < (((/* implicit */int) var_13))))))));
                    var_21 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) && (((((/* implicit */_Bool) (unsigned short)51038)) && (((/* implicit */_Bool) (signed char)-102))))))) : (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) 2147483631)) ? (var_15) : (((/* implicit */unsigned long long int) -543332681)))), (var_15)));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)14480))))) < (var_4))))) < (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15))), (min((var_1), (((/* implicit */unsigned long long int) var_14))))))));
}
