/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57898
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_5 [i_1 + 1] [i_2]), (arr_5 [i_1 - 1] [i_2]))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(max((arr_5 [6ULL] [6ULL]), (arr_5 [(unsigned short)6] [(unsigned short)6]))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (max(((+(0LL))), (((/* implicit */long long int) (-(var_7)))))) : (((max((arr_2 [i_0]), (((/* implicit */long long int) 1018006783U)))) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0])))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))))));
        var_19 = ((unsigned long long int) (-(arr_5 [(_Bool)1] [(_Bool)1])));
        var_20 = ((/* implicit */short) (~((~(((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) var_13))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_15 [i_5]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_5 [i_3 + 1] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_17 [i_4] [i_4]))))) && (((/* implicit */_Bool) min((arr_1 [i_3 + 1]), (((/* implicit */int) var_13))))))))))))));
                    var_23 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_3 + 1])) > (((/* implicit */int) arr_12 [i_3])))) ? (((((/* implicit */int) arr_7 [i_3] [i_3] [i_3 + 1])) & (((/* implicit */int) var_13)))) : (((/* implicit */int) max((((/* implicit */short) arr_3 [i_3 + 1] [i_3 + 2])), (arr_15 [i_3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (arr_5 [i_3 + 1] [i_3])));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_25 |= ((/* implicit */unsigned int) arr_2 [i_3 - 1]);
            var_26 -= ((/* implicit */unsigned char) var_8);
            arr_22 [i_3] = ((/* implicit */short) ((min((arr_12 [i_3]), ((!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1])))))) && ((!(((/* implicit */_Bool) var_11))))));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_27 ^= ((/* implicit */long long int) max((((((/* implicit */int) arr_15 [i_7])) / (((/* implicit */int) arr_14 [i_7])))), ((-(((/* implicit */int) var_12))))));
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_7] [i_3 - 1])) < (((/* implicit */int) arr_3 [i_3 + 2] [i_7]))))))) + (arr_19 [i_3 + 2] [i_3] [i_7])));
            arr_25 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((unsigned long long int) ((((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_5 [i_3 + 1] [i_3]) + (8082197108961825626LL))) - (30LL))))) << (((((((/* implicit */int) arr_8 [i_3])) * (((/* implicit */int) arr_6 [i_3 + 2] [i_3])))) - (1955))))))) : (((/* implicit */unsigned int) ((unsigned long long int) ((((((((/* implicit */int) var_8)) + (2147483647))) << (((((((arr_5 [i_3 + 1] [i_3]) + (8082197108961825626LL))) - (30LL))) - (2597866286341551136LL))))) << (((((((((((/* implicit */int) arr_8 [i_3])) * (((/* implicit */int) arr_6 [i_3 + 2] [i_3])))) - (1955))) + (615))) - (20)))))));
        }
        var_29 -= ((/* implicit */long long int) ((((max((var_15), (((/* implicit */unsigned int) arr_13 [i_3 + 2] [i_3])))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) >> (((((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (max((((/* implicit */long long int) arr_13 [i_3] [i_3])), (arr_2 [i_3 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_3 - 1] [(unsigned char)12]))))))) - (180LL)))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3])) || (((1018006783U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 - 1] [i_3]))))))));
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127))))))) ? (((unsigned int) min((arr_20 [i_3 + 1] [i_8] [i_8]), (((/* implicit */short) (unsigned char)17))))) : (((/* implicit */unsigned int) ((int) min((((/* implicit */short) arr_28 [i_3] [i_3 + 2] [i_8])), (arr_27 [i_3] [i_8]))))))))));
        }
    }
    var_32 |= ((/* implicit */unsigned short) var_7);
}
