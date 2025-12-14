/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6395
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) var_16)))))))) : (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) var_9)))), (((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)173))))) / (var_2))), (((/* implicit */unsigned long long int) var_0))));
                            var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) ((var_5) || (((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_4] [(_Bool)1] [i_0] [i_1])) && (((/* implicit */_Bool) var_14)))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) var_19)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)167)), ((short)508))))) : (max((var_2), (((/* implicit */unsigned long long int) 1905540511)))))))))));
                            var_23 = ((signed char) ((long long int) arr_2 [i_0]));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_24 &= ((/* implicit */signed char) ((var_18) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            arr_16 [i_1] = ((/* implicit */long long int) (_Bool)1);
                            arr_17 [i_0] [i_0] [i_2] [i_3 + 2] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)44)) ? (var_7) : (((/* implicit */int) var_12))))));
                            var_25 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)172));
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (short)-509))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
    }
    var_27 = ((/* implicit */unsigned long long int) (~((+((+(((/* implicit */int) (_Bool)1))))))));
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
}
