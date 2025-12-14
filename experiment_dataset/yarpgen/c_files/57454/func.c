/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57454
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
    var_18 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))), (((max((((/* implicit */unsigned long long int) -8198343344402065776LL)), (var_7))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_1] |= (-(((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 - 3])), (max((arr_4 [2LL] [i_1] [i_2]), (((/* implicit */short) var_1))))))));
                    arr_10 [i_2] = ((/* implicit */_Bool) max((2766824445U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0 - 1])) ? (((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) (short)-20954)))) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
                    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2] [i_0 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-25116)), (arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0 + 1])))), ((-(((((/* implicit */int) (short)25115)) + (((/* implicit */int) var_5))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_4 [i_0 - 2] [i_3 + 3] [i_4]), (((/* implicit */short) (unsigned char)245))))), (((arr_6 [i_0 - 3] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13403)))))));
                                var_20 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_8 [i_1] [i_0 - 3] [i_0 - 3] [i_3 + 1])))));
                                arr_17 [i_0] [i_2] [(_Bool)1] [(unsigned short)15] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4] [i_4] [i_4] [i_3 - 1] [i_4])))) ? (min((arr_13 [i_3] [i_1] [i_2] [i_3] [i_3] [i_3 - 1] [i_4]), (arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] [i_3 + 3] [i_1]))) : ((-(((/* implicit */int) (unsigned short)13403))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 -= ((/* implicit */_Bool) 549621596160ULL);
        arr_18 [i_0] = ((/* implicit */short) (-((-(max((((/* implicit */unsigned long long int) var_1)), (18446743524087955456ULL)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) (short)-25116))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */int) (!(arr_7 [i_5])));
        /* LoopSeq 1 */
        for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_5] [i_6 + 1]))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */int) (short)25116)) >= (((/* implicit */int) arr_24 [i_6 + 2])))))));
            arr_25 [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13395)) ? (-1563411480) : (((/* implicit */int) arr_19 [i_5]))));
        }
    }
    var_26 = ((/* implicit */short) (-(min(((-(((/* implicit */int) (unsigned short)52132)))), (((/* implicit */int) var_15))))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((int) var_10)) + (2147483647))) << (((((/* implicit */int) (short)25135)) - (25135)))))) & (((((var_14) >> (((var_12) - (8164218082228342726ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
