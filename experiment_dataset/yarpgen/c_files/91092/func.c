/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91092
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
    var_20 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)15] = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1]);
                arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (min((min((var_4), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3039655019277219592ULL)) ? (((/* implicit */int) (short)3432)) : (((/* implicit */int) arr_2 [i_1 - 1]))))))) : (min((((15346157422972145LL) ^ (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])))), (((/* implicit */long long int) ((unsigned int) -15346157422972146LL)))))));
            }
        } 
    } 
}
