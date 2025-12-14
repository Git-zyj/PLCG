/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57939
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1523795108)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)145)))) : (((unsigned int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)133)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((var_4) != (((/* implicit */long long int) 4294967295U))));
            var_12 = ((/* implicit */short) (~(536870904)));
            var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) ((1347353925) << (((7371796720156545258ULL) - (7371796720156545258ULL))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (_Bool)0))));
                var_15 = ((/* implicit */short) (_Bool)1);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) -1)) >= (0LL)));
                arr_10 [i_2] [i_1] = ((/* implicit */_Bool) 8911549707283247553LL);
            }
            arr_11 [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)145)) | (((/* implicit */int) var_7))));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_19 [i_0 + 3] [i_3] [i_4] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)4492)) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (7621190771428130741ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_3 - 3] [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_24 [(short)10] [(short)10] [i_5 + 1] [(short)10] = ((/* implicit */signed char) arr_22 [i_0] [i_3] [i_4] [i_5 + 1] [i_6]);
                                arr_25 [i_0] [i_0 - 3] [i_0 - 3] [17LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(var_4))) >= (((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) & (arr_14 [i_0])))))));
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5] [i_3 + 3])) ? (arr_18 [i_5 + 1] [i_5] [i_3 + 3]) : (((/* implicit */int) (signed char)3)))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_3 + 2] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)0)))) > (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_4 [i_4] [i_0 + 2]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) / (var_1)))) ? ((~(11959317921028524350ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_27 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) ((unsigned short) (_Bool)1)))), (3386273970110910623LL)));
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0 + 2])) / (((/* implicit */int) (unsigned char)145))))) ? (((unsigned int) (+(116802944U)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0 + 2])))));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_31 [(unsigned char)24] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))) : (4294967295U)))));
        var_19 = ((/* implicit */short) var_5);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_3))));
        var_21 -= ((/* implicit */unsigned short) 2698816030U);
    }
}
