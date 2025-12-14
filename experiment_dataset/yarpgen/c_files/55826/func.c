/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55826
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_9)) == (((/* implicit */int) min((((/* implicit */short) var_5)), (var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max(((-((-(arr_1 [i_0]))))), (((/* implicit */unsigned int) max((arr_4 [i_1 + 1] [i_0]), (arr_4 [i_1 - 1] [i_0]))))));
                arr_5 [i_0] [7U] [i_1 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) (short)23330)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_0 [i_0] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((short) (signed char)-1)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-29695), (max((((/* implicit */short) var_5)), ((short)23330)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23350))) & (5841081475605982273ULL))) : (((/* implicit */unsigned long long int) (~(arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_2]))))));
                            var_13 += ((/* implicit */short) ((((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)69))))) | (min((((/* implicit */unsigned int) var_7)), (min((3317984712U), (3317984712U)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_7)), (arr_14 [i_0] [i_0]))) >> ((((~(((((var_0) + (2147483647))) >> (((arr_14 [i_0] [(unsigned short)14]) - (2027935168U))))))) + (212)))));
                                var_15 = ((/* implicit */unsigned short) (-(arr_2 [i_0])));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [(short)11] [i_0] [i_1 - 1] [i_1 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 14173861549318324257ULL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1 + 1]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) max((var_2), (var_2)))), ((unsigned short)65535))), (((/* implicit */unsigned short) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_26 [i_7])))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (signed char)102))));
                    var_19 = ((/* implicit */short) arr_23 [i_7] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned int) min((((/* implicit */int) min((var_3), (((/* implicit */short) var_2))))), (((((/* implicit */_Bool) 0U)) ? (-1) : (((/* implicit */int) var_7)))))))));
                                arr_35 [i_7] [(unsigned short)4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) min((((/* implicit */short) arr_26 [i_7])), (var_3)))))));
                                var_21 = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
