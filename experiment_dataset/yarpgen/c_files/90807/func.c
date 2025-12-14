/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90807
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
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((var_0) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3432146807U)) ? (((/* implicit */int) (unsigned short)63632)) : (((/* implicit */int) (signed char)120))))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-14)) && (((/* implicit */_Bool) -2126071639)))))) : (var_8)))));
    var_19 = ((/* implicit */unsigned long long int) max(((~(((0U) & (3047046121U))))), (((((/* implicit */_Bool) max((var_6), (1247921174U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_8)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [6ULL] = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_0 [(unsigned char)9]))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-120)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 4] [i_2 - 1] [i_2 + 4])) ? (((/* implicit */int) ((short) arr_3 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)2890)))))));
                var_21 = (((_Bool)1) ? ((~(1180666469U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))));
                arr_9 [i_2 - 2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)40506)))) * ((+(16875827905719573965ULL)))));
            }
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) arr_6 [i_0] [i_0] [(unsigned short)2] [i_0])))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) arr_11 [i_0])))));
                        arr_16 [i_4] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41564)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned int) (+(arr_0 [i_5])));
            arr_19 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)20195))) ? (3047046121U) : (((arr_6 [i_5] [i_5] [i_5] [(unsigned short)6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))))));
            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */_Bool) var_4)) ? (arr_18 [6ULL] [6ULL] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_5] [i_5] [i_5] [i_0] [i_5])))))));
        }
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
            {
                arr_27 [i_0] [i_6] [i_6] [i_7 - 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) 3047046137U)))) ? ((+(max((((/* implicit */unsigned long long int) arr_26 [i_0] [i_6] [i_7 + 1])), (18014398507384832ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_6] [i_0] [i_7 + 2] [6U])) : (3729319377U))) <= (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))))))))));
                arr_28 [i_7 + 2] [i_6] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-4)))) + (((/* implicit */int) ((short) (+(arr_23 [i_0] [i_0] [i_6] [i_7])))))));
                arr_29 [(_Bool)1] [10U] [10U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_7] [i_6] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)40839)) ? (var_5) : (arr_20 [i_7] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_4 [i_0]))))))) : (((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_7 - 3] [9U] [i_0] [i_0])) ? (9095737033210576189ULL) : (((/* implicit */unsigned long long int) 1814310137U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7 - 2] [5U]))))))))));
                arr_30 [i_7 + 2] [i_6] = ((/* implicit */unsigned short) max(((+(1954285143833612640ULL))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned char)4]))))) ? (((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) arr_10 [i_7 + 1] [i_0] [i_0]))))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) ^ (arr_23 [i_8 + 1] [i_6] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_8 + 2] [i_8 - 1]))) : (arr_31 [i_0] [i_0] [i_0] [i_8 + 1])));
                arr_34 [i_0] [i_8] [i_8 - 1] = ((/* implicit */unsigned int) arr_24 [i_8 + 2] [i_8 - 1] [i_8 - 2]);
            }
            var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) (short)-3615)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11)))))))));
            var_28 -= ((/* implicit */short) var_11);
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [(unsigned char)3] [i_6]);
            arr_36 [(_Bool)1] = ((/* implicit */_Bool) var_12);
        }
        arr_37 [i_0] = ((/* implicit */unsigned int) (~(var_13)));
    }
    var_29 = ((/* implicit */short) var_6);
}
