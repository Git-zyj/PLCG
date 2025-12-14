/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88684
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
    var_20 = ((/* implicit */short) (-(((((241041914414095127ULL) / (241041914414095127ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16940)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 4] [i_0 - 4])), (((241041914414095127ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
            arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) min((var_13), ((signed char)-46)))) ^ (((/* implicit */int) (unsigned short)45506))))));
            arr_5 [(short)8] [i_1] [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (-196141375)))), (18446744073709551613ULL)))));
        }
        var_22 += ((/* implicit */unsigned int) ((var_14) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (2110629146U))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_8 [i_2 + 1] |= ((/* implicit */int) max((3924913903U), (((/* implicit */unsigned int) var_5))));
        arr_9 [i_2] |= ((/* implicit */unsigned int) (~(((18205702159295456489ULL) >> (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */unsigned char) ((min((((unsigned int) 18446744073709551615ULL)), (((/* implicit */unsigned int) arr_0 [i_2 + 1] [i_2 - 1])))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2 + 1])), (var_8)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) arr_1 [i_2]);
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
            {
                arr_15 [(short)5] [i_2 + 2] [i_3] [i_4 + 2] |= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_14 [i_2])), (241041914414095135ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [(short)11])))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((1735291971) & (((/* implicit */int) var_16))))))))))));
            }
            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((18205702159295456480ULL) > (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)27328)))))))));
                    arr_22 [i_2] [(short)3] [i_5] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_8)), (arr_17 [i_2] [i_5] [i_2 - 1] [i_6]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)13966))) ^ (arr_17 [(_Bool)1] [(_Bool)1] [i_2 + 1] [i_6])))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_3 [i_2] [i_2]))))));
                }
                for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    arr_25 [i_2] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(short)6])), (var_2)))))))));
                    var_28 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_19 [i_7] [i_7 - 3] [i_7 - 3] [(unsigned short)4] [i_7] [i_5 - 2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)137)) * (((/* implicit */int) (_Bool)1)))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), ((unsigned char)160)))) ? ((~(arr_17 [6ULL] [i_5] [i_3] [6ULL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 - 1])))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned short)48835)) - (48813)))))), (max((((/* implicit */unsigned int) (_Bool)1)), (2184338128U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
                }
                arr_26 [i_2 - 1] |= ((/* implicit */unsigned short) max((((/* implicit */short) var_17)), ((short)-9857)));
            }
        }
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_2])) && (((/* implicit */_Bool) var_8))))) >> (((922375536U) - (922375532U)))))), (max((((var_19) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))))), (var_4))))))));
    }
    var_31 = ((/* implicit */short) var_5);
}
