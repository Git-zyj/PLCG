/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89873
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))), (max((3911575538781664608ULL), (3911575538781664608ULL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (3911575538781664625ULL)));
                    var_16 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)0)))), ((-(((/* implicit */int) (unsigned short)30015))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 3911575538781664608ULL)) ? (5153149122160406367ULL) : (((/* implicit */unsigned long long int) var_13))))))));
                    arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? ((+(5153149122160406367ULL))) : (max((3911575538781664626ULL), (14535168534927887008ULL))))), (((/* implicit */unsigned long long int) var_12))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-47)), (var_4))))) >= (max((3911575538781664605ULL), (14535168534927886997ULL)))))) : ((~((~(((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_4);
}
