/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61297
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    var_19 = ((((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_0))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7812))));
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (unsigned short)7797)))))) & (2041242084U)));
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)7803)), (max(((((_Bool)0) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (min((var_0), (((/* implicit */long long int) var_10))))))));
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)21487))))));
                }
            } 
        } 
    } 
}
