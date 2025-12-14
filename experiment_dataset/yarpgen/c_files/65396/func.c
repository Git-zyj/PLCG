/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65396
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
    var_13 ^= ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) var_2)))))) : (min((((((/* implicit */int) (short)(-32767 - 1))) - (var_2))), (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) var_12)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 ^= ((3980049341388521220ULL) + (1961876630103453563ULL));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_4)) : (var_11))), (16484867443606098052ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_0])) | (var_8)))))), (((/* implicit */unsigned long long int) (+(-407387291))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) var_12);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 6667561006063680564ULL)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */int) (short)-1))))))) >= (max((((((/* implicit */_Bool) 2128261532)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -329869320)))), (((/* implicit */long long int) arr_6 [i_1 - 1] [i_1 - 3]))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) (+(1961876630103453563ULL)));
                    var_21 *= ((/* implicit */short) ((12902257443259392773ULL) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2911711951U)) ? (((/* implicit */unsigned long long int) -278911375)) : (14876127835385429948ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (1961876630103453563ULL)))));
                    var_22 = (~(18446744073709551597ULL));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    var_23 *= ((/* implicit */unsigned int) ((162616103229966762LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) >= (arr_17 [i_0] [i_0])))))));
                    arr_18 [2ULL] [i_1] [2ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7903)))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
                    arr_21 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [2] [i_7])))));
                }
            }
        } 
    } 
}
