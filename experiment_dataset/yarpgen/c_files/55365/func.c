/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55365
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
    var_19 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)85)) << (((/* implicit */int) (unsigned char)0)))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)158)), (arr_6 [i_2] [i_2 - 1] [i_2 + 1]))))) / (-7639897723774643522LL))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+((~(6506345301912238406ULL))))))));
                            }
                        } 
                    } 
                } 
                var_23 = (unsigned char)121;
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) + (-7639897723774643522LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)10294))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (short)-32767))))))) - (18105468373798101948ULL)))));
}
