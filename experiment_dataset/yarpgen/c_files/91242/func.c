/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91242
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((var_7) <= (((/* implicit */unsigned long long int) var_14))))));
        var_17 = ((min((min((((/* implicit */unsigned long long int) var_2)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (var_4)))))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_3) > (((/* implicit */long long int) var_8))))), ((~(((/* implicit */int) var_6))))))));
        var_18 -= ((((((/* implicit */_Bool) (~(var_12)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) || (((/* implicit */_Bool) 11535363609488090682ULL)))))))) % (((/* implicit */long long int) ((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)88)), (var_14))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (var_12))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))), (var_7)))));
                        var_19 *= ((/* implicit */unsigned short) var_12);
                        var_20 = ((/* implicit */int) var_7);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(var_12)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((((((/* implicit */long long int) var_2)) / (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_4)))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) : ((+(0LL)))))) + (((max((((/* implicit */unsigned long long int) var_15)), (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_16)))))))));
    }
    var_23 = ((/* implicit */unsigned int) var_4);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) & (((max((((/* implicit */unsigned long long int) var_3)), (var_7))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (var_2))))))));
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((-((+(11535363609488090682ULL))))) : (((/* implicit */unsigned long long int) min((max((var_0), (var_11))), (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
}
