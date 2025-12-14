/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93299
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (!(var_11))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-5600)) * (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((unsigned short) ((12U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1])) ? (arr_2 [(signed char)17]) : (((/* implicit */int) var_11))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)135))));
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [(unsigned char)12]))))) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((unsigned int) 858076945259241564ULL)))), (((((((/* implicit */int) arr_4 [(unsigned char)20])) % (((/* implicit */int) var_1)))) * (((/* implicit */int) arr_1 [(unsigned char)0])))))))));
                            var_22 += ((/* implicit */_Bool) (+(((unsigned long long int) arr_4 [(unsigned short)6]))));
                            var_23 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) var_1)), (arr_2 [i_2 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))) ^ (arr_18 [i_4] [i_4]))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2130303778816ULL)) ? (((((/* implicit */_Bool) (short)6841)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (255LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
    var_26 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7569708752107115381LL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))))), (var_6)));
    var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)29574)))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_11))))))), (min((min((var_0), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_17))))));
}
