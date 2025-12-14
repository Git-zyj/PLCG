/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63436
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
    var_15 |= ((/* implicit */short) var_9);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4240588267848715651LL) >> (((((/* implicit */int) (short)-4214)) + (4215)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-119)))) : (((((/* implicit */_Bool) (short)-1)) ? (((int) -7488427114024923624LL)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) > (-707687895776077262LL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [(signed char)8] = ((/* implicit */signed char) (((-(18446744073709551615ULL))) + (((((/* implicit */_Bool) ((signed char) (signed char)-55))) ? ((-(16059478383586075299ULL))) : (((((/* implicit */_Bool) (signed char)-97)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4591)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_17 &= ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned short) ((unsigned char) (signed char)30))), ((unsigned short)0))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((_Bool) max(((unsigned short)17437), (((/* implicit */unsigned short) (unsigned char)232)))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)57))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_14);
}
