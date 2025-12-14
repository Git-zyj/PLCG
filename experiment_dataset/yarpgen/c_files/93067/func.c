/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93067
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) var_10)))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(short)6] [i_0])), (var_11))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_15)))) : (max((((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) (unsigned char)96)) - (89))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */int) min(((~(2083636345749890591ULL))), (16241723691038370696ULL)));
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_3 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-((~(-588257545))))))));
        var_21 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_1] [i_1])), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [(_Bool)1])) : (371650649))) : (min((((/* implicit */int) var_12)), (arr_8 [i_1] [i_1])))))));
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)93)), (1717352072)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)868)))))))) : (max((max((arr_3 [i_1]), (((/* implicit */int) arr_6 [i_1] [i_1])))), ((~(((/* implicit */int) arr_7 [0] [i_1]))))))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            for (signed char i_4 = 4; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)21670)), (-1925810181)))) ? (arr_8 [i_5 + 1] [i_3]) : (((/* implicit */int) var_14)))), (max((((((/* implicit */int) arr_6 [i_2] [i_3])) / (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)11)), (arr_6 [i_2] [(short)10]))))))));
                                var_24 = ((/* implicit */short) min((var_24), (var_14)));
                                arr_22 [i_4] [i_4] [i_2] [i_4] [i_6] [i_6] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2]))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned short) min(((((+(arr_11 [i_4]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4] [i_4])) ? (((/* implicit */int) var_7)) : (arr_18 [i_4 - 3] [i_2])))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))) == (((((/* implicit */_Bool) arr_11 [i_2])) ? (var_2) : (((/* implicit */int) var_6)))))))));
                    var_26 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)41)), (-1616932173)));
                    var_27 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) -1447239916)) && (((/* implicit */_Bool) -5549665223400723108LL))))), ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)38)), ((short)-10353))))))));
                    var_28 = ((/* implicit */int) min((var_28), (max((((((/* implicit */int) arr_10 [i_4])) % (arr_3 [i_3 + 2]))), (((((/* implicit */_Bool) (-(arr_15 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2]))))) : (((/* implicit */int) max((arr_10 [i_3]), (arr_7 [i_2] [i_2]))))))))));
                }
            } 
        } 
    } 
}
