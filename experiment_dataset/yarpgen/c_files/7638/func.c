/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7638
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((min((((((/* implicit */_Bool) 2282456331U)) ? (1828780240) : (((/* implicit */int) (unsigned short)65535)))), ((~(((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (signed char)6)))))));
    var_18 = ((/* implicit */signed char) (((((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1))))))) + ((+(((/* implicit */int) var_13))))));
    var_19 += ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-843))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967285U)) == (17381034674097399378ULL)))) : (((/* implicit */int) (unsigned char)167)))))));
        var_22 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) var_2))))), (max((min((((/* implicit */long long int) var_5)), (1299689652281489859LL))), (((/* implicit */long long int) arr_2 [i_0]))))));
    }
}
