/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85929
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
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)13409)) & (((/* implicit */int) (unsigned short)52116))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) | ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)107), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (max((((/* implicit */int) var_8)), (-1676422784)))))) ? ((-(((/* implicit */int) max(((unsigned short)13393), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))) : ((-(((/* implicit */int) ((_Bool) 7279991396729248655ULL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_23 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_1 [i_0])))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (+(max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_3 - 1]))))));
                            var_25 = ((/* implicit */int) min((max((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_13 [i_3 + 3] [4U] [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_3 + 3])))), (((((/* implicit */_Bool) arr_5 [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13409))) : (var_14))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_18)), (arr_13 [i_2 - 1] [i_2 - 1] [i_3] [i_4] [(unsigned char)6] [i_2 - 1]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)199))), (max(((unsigned short)16411), ((unsigned short)52119))))))))));
                var_27 = ((((/* implicit */_Bool) max((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_2])) && (((/* implicit */_Bool) (signed char)-89))))) : ((-(((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])))));
                arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)10679)) : (((/* implicit */int) (signed char)0))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_8);
}
