/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98600
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
    var_18 = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5560309398325595322ULL))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)114))))), (arr_3 [(unsigned char)7] [(unsigned char)17] [(unsigned short)11])));
                var_20 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [17ULL])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) (signed char)-120)), (16763487144426749710ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))));
                var_21 = max(((+(((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) (unsigned char)6)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (unsigned short)13075);
    var_23 = ((/* implicit */short) (((+((+(((/* implicit */int) (unsigned char)1)))))) ^ (var_17)));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)53)))), (((/* implicit */int) ((signed char) (unsigned char)12)))))) ? (var_17) : (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max(((unsigned char)181), (var_11))))))));
}
