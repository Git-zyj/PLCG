/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91550
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
    var_15 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)18)) + (((/* implicit */int) (short)8191))))), (1665261160583796628ULL)))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))) % ((+(min((var_4), (((/* implicit */unsigned long long int) 950560000U))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5489767453568797505LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_5)))))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)235))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (((9223372036854775802LL) ^ (((/* implicit */long long int) 950559993U))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 2341356519U)) : (1023ULL)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) % (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (((((_Bool)1) ? (967102746294384493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))) + (max((5541492326069727432ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                var_20 = ((/* implicit */unsigned short) ((max((max((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) * (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_0 [i_0])))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)57858)))))));
                var_21 = ((/* implicit */unsigned char) ((((var_6) % (((/* implicit */long long int) ((/* implicit */int) var_10))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(536870912U))))))))));
            }
        } 
    } 
}
