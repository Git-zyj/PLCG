/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9418
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_0 [i_0]))))));
        var_18 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(signed char)10]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-72)) & (((/* implicit */int) arr_0 [0LL]))))) ^ (((unsigned long long int) (unsigned short)39429))))));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9911))) ^ (arr_1 [i_1]))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((long long int) (unsigned short)49975))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)123)) != (((/* implicit */int) (short)-13377))))) & (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65009)) || (((/* implicit */_Bool) 11796537693852401940ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76))))))))))));
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-13403)) <= (((var_5) ? (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
}
