/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62041
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
    var_10 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) & (((/* implicit */int) (signed char)84))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~((-(var_4))))))));
        arr_2 [(short)19] [i_0] = ((/* implicit */unsigned char) (((~(((var_3) >> (((var_1) - (14208021122822018797ULL))))))) - (((/* implicit */long long int) var_6))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */signed char) arr_14 [i_2] [i_3] [i_4]);
                                arr_17 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_1] [i_1] [i_1])))) + (max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)16)))))));
                                var_14 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned char) ((signed char) (signed char)2))), (((unsigned char) (signed char)11)))));
                                arr_18 [(unsigned char)9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) (~(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-2)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_15 [i_1] [i_2] [i_2]))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) arr_15 [i_1] [15ULL] [i_1]);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (arr_0 [9U]) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1])), (arr_7 [i_1] [i_1] [i_1])))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) -3509440928698059826LL)))))));
        arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 1958764742)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)-9))))) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    /* vectorizable */
    for (short i_6 = 4; i_6 < 20; i_6 += 4) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_21 [i_6 - 1]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 - 3]))) - ((-(arr_23 [i_6] [i_6])))));
        arr_25 [i_6] = ((/* implicit */int) var_0);
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_7]), (((/* implicit */unsigned long long int) arr_8 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_3)))) ? (var_1) : (((/* implicit */unsigned long long int) -6487998451929300314LL))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_7] [i_7]))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_7 - 1])), (arr_4 [(short)16] [(short)16])))))));
        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [(unsigned short)4] [i_7])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9)))))) ? (max((arr_0 [i_7]), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 1; i_8 < 17; i_8 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) arr_10 [i_8 + 2] [i_8 + 2] [i_8 + 2])) && (((/* implicit */_Bool) (signed char)24))))));
        arr_31 [i_8] [i_8] = ((/* implicit */signed char) ((short) arr_12 [i_8]));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))));
    }
    var_26 -= ((/* implicit */short) var_3);
}
