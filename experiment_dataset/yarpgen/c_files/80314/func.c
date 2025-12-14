/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80314
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */unsigned char) (signed char)63);
    var_18 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) min((((unsigned short) (~(((/* implicit */int) (unsigned char)55))))), (max((((/* implicit */unsigned short) (short)1792)), (var_6)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? ((-2147483647 - 1)) : (var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(short)14] [i_1 + 1] [(short)14])) ? (((/* implicit */int) ((short) arr_2 [i_1] [i_3]))) : (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)128))))))) : (max((0U), (((/* implicit */unsigned int) (short)32767))))));
                        arr_11 [i_0 - 1] [i_1] [i_2] [9] = ((/* implicit */long long int) ((int) ((unsigned char) arr_7 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3])));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((+(arr_3 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0] [i_1] [i_1]) : (arr_2 [i_1] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1984))) & (arr_0 [i_0 + 3])))) : (min((((arr_6 [i_1]) ^ (arr_6 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)190)))))))));
                    }
                    for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_21 = ((((/* implicit */_Bool) 4611686018427387904ULL)) || (((/* implicit */_Bool) (unsigned char)1)));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -292672972)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)254))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5925))) * (arr_0 [i_2])))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_4] [i_4 + 3])) ? (var_8) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4 - 2])))), (((/* implicit */int) ((arr_4 [i_0 - 1] [i_1] [i_1]) > (((/* implicit */unsigned int) var_5))))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */short) arr_7 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_1 + 1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_0]))) + (arr_4 [i_1] [(unsigned short)10] [i_1])))));
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_1] [i_5] = ((/* implicit */long long int) ((unsigned int) 57344));
                    }
                    var_24 = (~(max((max((4836942572359009794LL), (((/* implicit */long long int) (unsigned char)31)))), (4836942572359009794LL))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)2)), (2147483647))))));
}
