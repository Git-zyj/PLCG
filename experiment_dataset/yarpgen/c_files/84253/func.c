/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84253
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned short) 8050463351633554191LL);
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_12)), ((-(arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 9006924376834048ULL))));
        arr_7 [i_1] = ((/* implicit */int) max((max((((/* implicit */long long int) 724496466)), (min((((/* implicit */long long int) var_4)), (-9223372036854775788LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_10 [(unsigned char)12] = ((/* implicit */int) ((((/* implicit */long long int) 724496483)) & (((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_2])), (-25154177)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_2]), (((/* implicit */unsigned short) arr_0 [i_2])))))) : (-116625854887105362LL)))));
        arr_11 [(short)10] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (4543126761795175599LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))) >= (((((/* implicit */_Bool) ((-724496483) % (arr_8 [i_2] [7])))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((/* implicit */int) arr_4 [i_2]))))));
        arr_12 [(short)2] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_14)))) & (((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)7]))) ^ (-2425647229684622696LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) & ((~(((/* implicit */int) var_18))))))) : (max((((((/* implicit */_Bool) (unsigned short)12910)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)255)), (arr_5 [i_2]))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned char) arr_20 [i_2]);
                        var_21 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51682))) / (-4543126761795175599LL))))));
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2]))));
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1477954607)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))) >= (arr_15 [i_2])))) : (((((/* implicit */int) ((short) var_14))) - (min((((/* implicit */int) (unsigned short)1598)), (arr_16 [i_2] [i_4])))))));
                    arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) arr_8 [i_2] [3]))) ? (((((/* implicit */_Bool) 116625854887105361LL)) ? (arr_15 [i_3]) : (((/* implicit */unsigned long long int) -2034278432)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) var_11)))))))), (((/* implicit */unsigned long long int) -434436620))));
                }
            } 
        } 
        arr_22 [i_2] = ((/* implicit */short) var_5);
    }
    var_24 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -2425647229684622696LL)) ? (((/* implicit */int) ((var_15) > (((/* implicit */int) (unsigned short)1625))))) : (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) var_10)) : (434436619))))));
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32256))));
}
