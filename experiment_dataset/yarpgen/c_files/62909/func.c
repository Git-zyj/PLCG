/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62909
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) (~(-1))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) (-((~(max((var_14), (((/* implicit */long long int) (unsigned short)0))))))));
        arr_2 [(short)9] = ((/* implicit */unsigned int) var_19);
        var_22 *= ((/* implicit */_Bool) ((unsigned long long int) ((long long int) arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_23 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) (unsigned char)5)))));
            var_24 = ((/* implicit */long long int) (!(((((/* implicit */int) var_1)) < (((/* implicit */int) arr_0 [i_0]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((signed char) var_7))) ? (((int) max((((/* implicit */int) var_8)), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_26 = ((((/* implicit */int) ((unsigned char) var_7))) << (((((int) var_13)) - (121))));
                var_27 ^= (~(min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)0))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_15))))));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)740))))), (((long long int) (signed char)2)))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (+(max((min((((/* implicit */long long int) (signed char)0)), (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (_Bool)1))))))))))));
                var_30 = ((/* implicit */long long int) max((((((/* implicit */int) var_9)) % (((/* implicit */int) ((13ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))), (((/* implicit */int) (short)-13170))));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_4]))));
            }
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_10))));
            var_33 ^= ((/* implicit */short) var_15);
            var_34 = ((/* implicit */unsigned int) -404516519096475305LL);
        }
        var_35 = var_8;
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_18) << (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((unsigned short) var_14)), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (-6301124117476517841LL)))))))));
}
