/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71834
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
    var_19 = max(((short)-16351), (((/* implicit */short) var_13)));
    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16351)) ? (((/* implicit */int) (unsigned short)6154)) : (((/* implicit */int) (unsigned char)255))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [(_Bool)1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_5)))))));
                        var_21 = ((/* implicit */_Bool) var_9);
                        var_22 &= ((/* implicit */int) ((short) (~((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_14 [(unsigned char)18] [(unsigned char)20] [i_4 + 1] [i_4] [i_4 - 1] [i_1])) | (arr_10 [i_4 + 1] [i_4 - 1] [i_4] [(short)13] [i_4 - 1] [i_0])));
                        var_24 = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16117))) <= (var_12)));
                    }
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-16331)) ? (((/* implicit */int) arr_8 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_1])) : (-1665369676))) <= (max(((-(var_4))), (((/* implicit */int) (unsigned short)20))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_6] [i_0] [i_5] [i_6] = ((/* implicit */_Bool) (-(((14599490837685851287ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16331)))))));
                                var_26 -= ((/* implicit */unsigned char) ((int) (short)-24952));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16312)) ? (((/* implicit */int) (short)16351)) : (((/* implicit */int) (short)16331))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                {
                    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_22 [i_7] [10])), (3847253236023700328ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-16332)) && (((/* implicit */_Bool) 1549413803U))))))))) && (((/* implicit */_Bool) (+(var_10))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 4; i_10 < 14; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_29 += ((/* implicit */_Bool) var_6);
                                arr_34 [8LL] [i_10] [i_10] [8LL] [i_10] [8LL] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(1549413830U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)2818))))))) & (min((((/* implicit */unsigned int) arr_28 [i_10 - 1] [i_9 - 1])), (min((((/* implicit */unsigned int) arr_33 [i_7] [i_7] [i_7] [i_10 - 3] [i_11] [i_7] [i_9 - 2])), (var_0)))))));
                                arr_35 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-16313)), (3847253236023700328ULL)));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) ((signed char) (+((+(((/* implicit */int) var_8)))))));
                    var_31 = ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) ((unsigned char) ((unsigned short) (unsigned short)20502)));
                        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) var_15)) + (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-120))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-16351)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_12])))))) : (max((((/* implicit */int) var_14)), (max((((/* implicit */int) (_Bool)1)), (var_10)))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */short) var_17);
}
