/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/849
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(3178244465U))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_10 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11)))) ? (3178244469U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_10)))))))), (9223372036854513664ULL)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0 - 1] [i_1] [i_2] [i_1]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (1116722814U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_0 - 1] [i_0] [i_0] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3178244470U)) ? (3178244465U) : (((/* implicit */unsigned int) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((1116722830U) - (3178244465U))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_1]))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(var_14))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((min((((((/* implicit */_Bool) var_4)) ? (arr_21 [i_0] [i_1] [i_6] [i_7] [i_8]) : (var_0))), (((/* implicit */unsigned long long int) (-(3178244465U)))))) / (((/* implicit */unsigned long long int) ((3178244469U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))))))));
                                var_23 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)2050))))), (arr_4 [i_0 - 1] [i_7 + 1])));
                                arr_26 [i_8] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) var_1);
                                arr_27 [i_8] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-27), ((signed char)-71))))) * (((((/* implicit */_Bool) (unsigned char)248)) ? (1116722842U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_19 [i_1] [i_0 - 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)160)))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)153)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) ((signed char) (short)-10143))))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))) << (((((/* implicit */int) arr_29 [i_10] [i_10])) + (106)))))) ? ((((_Bool)0) ? (((/* implicit */int) (short)2042)) : (((/* implicit */int) (unsigned char)95)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_10] [i_10]), (((/* implicit */signed char) (_Bool)1))))))))));
                arr_32 [i_9] [i_9] = ((/* implicit */signed char) (unsigned char)8);
            }
        } 
    } 
}
