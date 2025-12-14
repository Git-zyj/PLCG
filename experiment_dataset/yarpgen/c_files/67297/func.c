/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67297
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [(signed char)14]))) : (((4294967290U) & (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((9ULL) == (((/* implicit */unsigned long long int) -1955569102)))))))) ? ((+(arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_5 [7U]) & ((~(((/* implicit */int) (signed char)111))))))), (var_4)));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)18))))) ? (((var_9) & (((/* implicit */unsigned int) arr_5 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_1]), (var_2)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (+(max(((+(var_6))), (((/* implicit */unsigned int) ((3550425021U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)5]))))))))));
        arr_9 [i_1] = ((/* implicit */short) (~(((unsigned long long int) (~(((/* implicit */int) arr_7 [i_1])))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_23 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_2 + 3])) && (((/* implicit */_Bool) arr_13 [i_2 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 3])) : (((/* implicit */int) arr_13 [i_2 - 1]))))) : (min((((/* implicit */unsigned int) arr_13 [i_2 + 2])), (var_8)))));
                            arr_24 [i_2] [i_2] [i_3] [i_4] [(signed char)10] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 744542255U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (arr_1 [i_2 + 2])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((var_14), (var_7)));
                var_15 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)20446))))), ((+(arr_11 [i_2 - 1] [i_2 + 1])))));
                arr_25 [i_3] [i_3] = ((/* implicit */unsigned int) min((arr_20 [i_2] [11LL] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((short) arr_10 [i_2 + 1])))));
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned long long int) ((min((var_9), (var_6))) ^ ((~(var_9)))))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3550425021U)) ? (744542275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((~(var_4))))));
}
