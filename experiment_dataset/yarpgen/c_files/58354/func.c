/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58354
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_11 &= ((/* implicit */unsigned int) min(((+(arr_5 [i_3]))), (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3]) : (((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_0 + 2]))))));
                            arr_9 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [5U]))));
                            var_12 = ((((arr_4 [i_1] [i_2] [4U]) ? (((arr_4 [i_1] [i_1] [i_2]) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_2])) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_1])))) - (((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [(short)16] [8U] [(unsigned char)21])) <= (((/* implicit */int) arr_6 [i_1] [(_Bool)0] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
                {
                    var_13 = ((unsigned char) arr_3 [i_1]);
                    var_14 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 134217727)) >= (17758075947163407712ULL))))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0 + 1] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) -134217736)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_7 - 2] [i_5]))) : (arr_7 [i_0 + 1] [i_1] [i_5] [i_6] [i_1]))))), (((/* implicit */unsigned long long int) ((short) (unsigned short)19137)))));
                                var_15 = ((/* implicit */short) (-(13801747649396641891ULL)));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] = (((~(((((/* implicit */int) arr_11 [i_0] [20U] [i_5])) * (((/* implicit */int) arr_4 [i_1] [i_1] [i_5])))))) % (((/* implicit */int) var_6)));
                    arr_23 [15] [i_1] [i_5] [i_5] = min((((/* implicit */int) (unsigned char)154)), (134217732));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((long long int) (~(((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned short)16])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_8])) ? (arr_17 [i_0] [i_0] [i_0] [i_1] [i_8]) : (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_8]))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_2))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned char) (_Bool)1))))), ((-(13801747649396641911ULL))))))))));
}
