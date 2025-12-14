/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76744
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                            var_17 ^= ((/* implicit */unsigned long long int) var_14);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 1395247809))))))));
                        }
                    } 
                } 
                arr_11 [(unsigned char)24] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3760822304U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1801))))) : (var_3)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_3)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((signed char) (_Bool)1))))) != (((/* implicit */int) ((((/* implicit */int) ((12306739177807318815ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80)))))) == (((/* implicit */int) (unsigned char)4)))))));
}
