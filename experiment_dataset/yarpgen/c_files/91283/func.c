/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91283
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
    var_17 = 4003951104073204796LL;
    var_18 -= ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60691)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16363))) : (4003951104073204796LL)));
        arr_3 [2ULL] = var_0;
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60691)) / (((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)-1)) : ((+(((/* implicit */int) (signed char)-112))))))) : ((+(var_15)))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_2)))))))));
        arr_4 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned short)16386)) : (((/* implicit */int) (short)22589))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((((((/* implicit */int) (unsigned short)60714)) <= (((/* implicit */int) (short)-32764)))) ? (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)60665)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 801389710403074874LL)) ? (-801389710403074889LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29838))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-23), (((/* implicit */signed char) var_0)))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 801389710403074888LL)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (_Bool)1)))))))))));
        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (unsigned char)189)) : ((+(((/* implicit */int) (unsigned short)49172))))))) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((-1LL) % (var_4)));
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? ((-(((/* implicit */int) (unsigned short)49159)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_16)) - (38309)))))));
    }
    var_25 = ((/* implicit */long long int) var_10);
}
