/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66253
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
    var_17 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) 5330053672142261679LL)) ? (1654312802U) : (790030582U))) >> (((var_7) - (4120645293U))))));
    var_18 -= ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_15)))) : (((long long int) 3510415495U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) (_Bool)1)))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((-6537812481812048548LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 444190108))) ? (((/* implicit */int) (short)-6943)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) ((((arr_10 [(short)4]) ? (arr_17 [i_0] [(short)10] [(_Bool)1] [4U] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)15))))))))))));
                                var_23 &= ((/* implicit */unsigned long long int) var_16);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)5))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_6] [i_7])) + (arr_25 [15LL] [i_10])))), ((+(var_14)))))));
                                var_25 = ((/* implicit */_Bool) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_23 [i_8])) : (arr_25 [i_7] [i_8]))))), (((800660585) - (arr_33 [i_6] [i_7] [i_8] [i_9] [i_10])))));
                            }
                        } 
                    } 
                } 
                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
