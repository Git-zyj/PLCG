/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84052
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
    var_17 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (9262941584446230936ULL)))))) ? (((/* implicit */unsigned long long int) var_13)) : (6891530620519417782ULL)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 += var_14;
                                arr_16 [i_0] [i_4] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (short)-30258);
                            }
                        } 
                    } 
                    var_19 = 17078096563729786818ULL;
                }
                for (short i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((long long int) arr_8 [i_5 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 4])) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)252), (((/* implicit */unsigned char) arr_14 [i_0 + 1])))))))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        var_21 += ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30270))) <= (arr_7 [i_1] [i_1] [7] [i_1])))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_6] [5]), (((/* implicit */unsigned short) ((signed char) var_7)))))) ? (((/* implicit */int) arr_8 [(signed char)13] [i_5] [i_6] [i_7])) : ((+(((/* implicit */int) (signed char)21))))));
                            arr_24 [i_7] [i_6] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (short)19790))) <= (3988023693572221855LL))) ? (((((/* implicit */_Bool) 7181545110669878444ULL)) ? (3886183085U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)510))))));
                        }
                        arr_25 [i_0] [11] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) | (((var_4) ^ (((/* implicit */unsigned int) var_0))))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) 115897738)));
                    var_24 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))), ((+(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0]))))));
                    arr_26 [i_0 - 1] [i_0] [i_1] [i_5 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_21 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 + 2] [i_0 - 3]))) : (8869492532977916185ULL))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 33554400)), (9532152726413911700ULL)))) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)249))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))));
            }
        } 
    } 
}
